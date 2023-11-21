'use strict';

const net = require('node:net');
const repl = require('node:repl');
const { Duplex } = require('node:stream');

const notAllowed = [
    '\n', '$', '&', '&&', '+', ';',
    'Duplex', '`', 'at(', 'atob', 'bad', 'bonk',
    'btoa', 'child_process', 'concat', 'eval', 'exec', 'execFile',
    'filter', 'flag', 'for', 'fork', 'from', 'fs',
    'join', 'map', 'match', 'net', 'reduce', 'repl',
    'require', 'reverse', 'slice', 'spawn', 'split', 'sub',
    'toString', '|', '||'
];

class BonkFilter extends Duplex {
    constructor(socket, options) {
        super(options);
        this.socket = socket;
        this.replServer = null;
    }

    isBad(cmdString) {
        for (const badWord of notAllowed) {
            if (cmdString.trim().toLowerCase().includes(badWord)) {
                return badWord;
            }
        }

        return null;
    }

    _read(size) { }

    _write(chunk, encoding, callback) {
        let cmd = chunk.toString();

        const badWord = this.isBad(cmd);

        if (this.replServer && badWord !== null) {
            this.socket.write(`${badWord} is not allowed, BONK!\n`);
            this.replServer.lines.push(cmd);
            cmd = '\n';
        }

        this.push(cmd);
        callback();
    }
}

net.createServer((socket) => {
    const filter = new BonkFilter(socket);
    const replServer = new repl.REPLServer({ input: filter, output: socket });
    filter.replServer = replServer;
    socket.pipe(filter);
}).listen(5000);
