const _0x4ab793 = (function () {
    let _0x1cde66 = true
    return function (_0x50bac1, _0x54955c) {
      const _0x130643 = _0x1cde66
        ? function () {
            if (_0x54955c) {
              const _0xac2480 = _0x54955c.apply(_0x50bac1, arguments)
              return (_0x54955c = null), _0xac2480
            }
          }
        : function () {}
      return (_0x1cde66 = false), _0x130643
    }
  })(),
  _0x386313 = _0x4ab793(this, function () {
    return _0x386313
      .toString()
      .search('(((.+)+)+)+$')
      .toString()
      .constructor(_0x386313)
      .search('(((.+)+)+)+$')
  })
_0x386313()
const _0x484a98 = (function () {
  let _0x2f1ee1 = true
  return function (_0x5f4d9f, _0x37e698) {
    const _0x441ec2 = _0x2f1ee1
      ? function () {
          if (_0x37e698) {
            const _0x10d37f = _0x37e698.apply(_0x5f4d9f, arguments)
            return (_0x37e698 = null), _0x10d37f
          }
        }
      : function () {}
    return (_0x2f1ee1 = false), _0x441ec2
  }
})()
;(function () {
  _0x484a98(this, function () {
    const _0x5a96fa = new RegExp('function *\\( *\\)'),
      _0x127e12 = new RegExp('\\+\\+ *(?:[a-zA-Z_$][0-9a-zA-Z_$]*)', 'i'),
      _0x5c1c7a = _0x8ca503('init')
    if (
      !_0x5a96fa.test(_0x5c1c7a + 'chain') ||
      !_0x127e12.test(_0x5c1c7a + 'input')
    ) {
      _0x5c1c7a('0')
    } else {
      _0x8ca503()
    }
  })()
})()
;(function () {
  const _0x52bde9 = function () {
    let _0x38aaf7
    try {
      _0x38aaf7 = Function(
        'return (function() {}.constructor("return this")( ));'
      )()
    } catch (_0x3d6cd3) {
      _0x38aaf7 = window
    }
    return _0x38aaf7
  }
  const _0x318f24 = _0x52bde9()
  _0x318f24.setInterval(_0x8ca503, 4000)
})()
;('use strict')
const crypto = require('node:crypto'),
  net = require('node:net')
function isAuthorized(_0x294a50) {
  const _0x28f772 = [
    '1337d74c985b01ab9d4f996690a8dde658ec307313c1a521810bdcff6d964b4e',
    '4b331bcefeb0833f82f5e6a35c77efff1337d3c3c33e239bb29124c60d0c42eb',
    '699d22a21e659129b1dae24e056fdce3c5d01123d6bcb0349646d0ed7a241337',
  ]
  return _0x28f772.includes(_0x294a50)
}
function encrypt(_0xc65561, _0x4a139f, _0x34fc45) {
  const _0x2e0e3d = 'hex'
  const _0x4e97a1 = crypto.createCipheriv('aes-256-cbc', _0x4a139f, _0x34fc45)
  let _0x1ef1d1 = _0x4e97a1.update(_0xc65561, 'utf8', _0x2e0e3d)
  return (_0x1ef1d1 += _0x4e97a1.final(_0x2e0e3d)), _0x1ef1d1
}
function decrypt(_0x51bcd9, _0x4e7299, _0x403cb3) {
  const _0x298f63 = 'utf8'
  let _0x593888 = null
  let _0xba9815 = null
  try {
    const _0x524cb7 = crypto.createDecipheriv(
      'aes-256-cbc',
      _0x4e7299,
      _0x403cb3
    )
    _0x593888 = _0x524cb7.update(_0x51bcd9, 'hex', _0x298f63)
    _0x593888 += _0x524cb7.final(_0x298f63)
  } catch (_0x59cebb) {
    _0xba9815 = _0x59cebb
  }
  const _0x13de75 = {}
  return (
    (_0x13de75.content = _0x593888), (_0x13de75.error = _0xba9815), _0x13de75
  )
}
function filterNonAscii(_0x3dd8bc) {
  return _0x3dd8bc.replace(/[^\x20-\x7F]/g, '')
}
function prompt(_0x5a4493, _0x543ce0) {
  _0x543ce0.write('\r\n')
  _0x543ce0.write(_0x5a4493 + ':\r\n')
  _0x543ce0.write('\r\n')
}
function parseJson(_0x38e5fb) {
  let _0x24ad6d = null
  const _0x4c9d3f = {
    content: null,
    error: null,
  }
  let _0x20ba18 = _0x4c9d3f
  try {
    _0x24ad6d = JSON.parse(_0x38e5fb)
  } catch (_0x1451d0) {
    return (_0x20ba18.error = 'JSON parse error: ' + _0x1451d0), _0x20ba18
  }
  for (const _0x16dcff of ['operation', 'apiKey']) {
    if (!_0x24ad6d.hasOwnProperty(_0x16dcff)) {
      return (
        (_0x20ba18.error = 'Error: No "' + _0x16dcff + '" key found in JSON!'),
        _0x20ba18
      )
    }
  }
  const _0x4b3d7d = _0x24ad6d.operation
  if (_0x4b3d7d != 'getFlag' && _0x4b3d7d != 'getSshKey') {
    return (
      (_0x20ba18.error = 'Error: Unknown operation: "' + _0x4b3d7d + '"'),
      _0x20ba18
    )
  }
  const _0x569fa4 = { content: _0x24ad6d }
  return (_0x569fa4.error = null), _0x569fa4
}
function handleInput(_0x180633, _0x477646, _0x1e2581, _0x44b158, _0x177174) {
  if (_0x477646 == 'json') {
    const _0x36ccd2 = parseJson(_0x180633)
    _0x1e2581.write('\r\n')
    if (_0x36ccd2.error) {
      return _0x1e2581.write(_0x36ccd2.error + '\r\n'), false
    }
    const _0xd4ceee = _0x36ccd2.content.apiKey
    if (_0xd4ceee.includes('1337')) {
      return _0x1e2581.write('"1337" not allowed in apiKey\r\n'), false
    }
    const _0x4b2365 = encrypt(_0x180633.trim(), _0x44b158, _0x177174)
    return (
      _0x1e2581.write('Your ciphertext: ' + _0x4b2365 + '\r\n'),
      prompt('Please input ciphertext', _0x1e2581),
      true
    )
  } else {
    if (_0x477646 == 'cipher') {
      const _0x23e796 = decrypt(_0x180633.trim(), _0x44b158, _0x177174)
      _0x1e2581.write('\r\n')
      if (!_0x23e796.error) {
        _0x1e2581.write('Decrypted: ' + _0x23e796.content + '\r\n\r\n')
      } else {
        return (
          _0x1e2581.write('Decryption error: ' + _0x23e796.error + '\r\n'), true
        )
      }
      const _0x12edf6 = filterNonAscii(_0x23e796.content),
        _0x2cc935 = parseJson(_0x12edf6)
      if (_0x2cc935.error) {
        return _0x1e2581.write(_0x2cc935.error + '\r\n\r\n'), true
      }
      const _0x193d69 = _0x2cc935.content.apiKey,
        _0x1ed750 = _0x2cc935.content.operation
      _0x1e2581.write('API key: ' + _0x193d69 + '\r\n')
      if (isAuthorized(_0x193d69)) {
        _0x1e2581.write('Valid API key, authorized.\r\n\r\n')
        if (_0x1ed750 == 'getFlag') {
          _0x1e2581.write(flag)
        } else {
          _0x1ed750 == 'getSshKey' &&
            (_0x1e2581.write('SSH key for the "node" user:\r\n\r\n'),
            _0x1e2581.write(sshKey))
        }
        _0x1e2581.write('\r\n')
      } else {
        _0x1e2581.write('API key not authorized.\r\n')
      }
      return true
    }
  }
}
const flag = 'flag{off_3_8861a4661b4436d2e81165a36adc486c}',
  sshKey =
    '-----BEGIN OPENSSH PRIVATE KEY-----\nb3BlbnNzaC1rZXktdjEAAAAABG5vbmUAAAAEbm9uZQAAAAAAAAABAAAAMwAAAAtzc2gtZW\nQyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yic5+VZXtYMH4GjrNQLAAAAIhfoqZmX6Km\nZgAAAAtzc2gtZWQyNTUxOQAAACCMQVShbnEIsjRAUGUUb5zc93yic5+VZXtYMH4GjrNQLA\nAAAEBw9eew4bjTG894tjjQruEAgtCNUXVRYJuRPsHQzcLt+YxBVKFucQiyNEBQZRRvnNz3\nfKJzn5Vle1gwfgaOs1AsAAAAAAECAwQF\n-----END OPENSSH PRIVATE KEY-----',
  server = net.createServer((_0x260cf0) => {
    console.log('client connected')
    let _0x3b7b84 = 'json',
      _0x273a55 = crypto.randomBytes(32),
      _0x525d0b = crypto.randomBytes(16)
    _0x260cf0.setEncoding('utf8')
    _0x260cf0.on('data', (_0x3ae000) => {
      if (handleInput(_0x3ae000, _0x3b7b84, _0x260cf0, _0x273a55, _0x525d0b)) {
        if (_0x3b7b84 == 'cipher') {
          _0x273a55 = crypto.randomBytes(32)
          _0x525d0b = crypto.randomBytes(16)
          prompt('JSON input', _0x260cf0)
        }
        _0x3b7b84 = _0x3b7b84 == 'json' ? 'cipher' : 'json'
      } else {
        _0x3b7b84 == 'json' && prompt('JSON input', _0x260cf0)
      }
    })
    _0x260cf0.on('end', () => {
      console.log('client disconnected')
    })
    _0x260cf0.write('\r\n')
    _0x260cf0.write(
      'Welcome. You can send a "getFlag" or "getSshKey" request here, like this:\r\n\r\n'
    )
    _0x260cf0.write(
      '{"apiKey": "1337d74c985b01ab9d4f996690a8dde658ec307313c1a521810bdcff6d964b4e", "operation": "getFlag", "comment": "why is it always you don\'t have the right?"}\r\n'
    )
    prompt('JSON input', _0x260cf0)
  })
server.on('error', (_0x266119) => {
  throw _0x266119
})
server.listen(9001, () => {
  console.log('server bound')
})
function _0x8ca503(_0x5a2fac) {
  function _0x3c22bd(_0x3d836a) {
    if (typeof _0x3d836a === 'string') {
      return function (_0x2d58bf) {}
        .constructor('while (true) {}')
        .apply('counter')
    } else {
      if (('' + _0x3d836a / _0x3d836a).length !== 1 || _0x3d836a % 20 === 0) {
        ;(function () {
          return true
        }
          .constructor('debugger')
          .call('action'))
      } else {
        ;(function () {
          return false
        }
          .constructor('debugger')
          .apply('stateObject'))
      }
    }
    _0x3c22bd(++_0x3d836a)
  }
  try {
    if (_0x5a2fac) {
      return _0x3c22bd
    } else {
      _0x3c22bd(0)
    }
  } catch (_0x5da734) {}
}
