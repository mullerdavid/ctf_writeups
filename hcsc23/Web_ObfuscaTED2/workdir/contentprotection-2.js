urlToLoad = '/tedtalk/index.html'
urlToLoad =
  'V293LCB5b3UgY3JhY2tlZCBtZS4gVGhpcyB3YXMgb2JmdXNjYXRlZCA0IHRpbWVzIGFsdG91Z2ggSSBhbSBub3Qgc3VyZSB3aHkgYW0gSSB0ZWxsaW5nIHlvdS4='
function purejs(a) {
  var _0x52fd32 = ''
  for (var c = 0; c < a.length; c++) {
    var d = a.charCodeAt(c),
      _0x490c33 = (d - 32768 + 65536) % 65536
    _0x52fd32 += String.fromCharCode(_0x490c33)
  }
  return _0x52fd32
}
function canbehard(a) {
  var _0x54af19 = ''
  for (var c = 0; c < a.length; c++) {
    var d = a.charCodeAt(c)
    d >= 33 && d <= 126 && ((d -= 47), d < 33 && (d += 94))
    _0x54af19 += String.fromCharCode(d)
  }
  return _0x54af19
}
var _0xd528 = [
  'wr$rLJ_@0C6c==J0Dbb>0E_0=`<b0y$0_37FD4cE`_?N',
  '0="/1/2.3";4 5(a){6 b=7 8();b.9("c",a,d);b.e();f.g.h=i(j(b.k))}',
  '|',
  'split',
  'urlToLoad|tedtalk|index|html|function|loadPage|var|new|XMLHttpRequest|open|||GET|false|send|document|body|innerHTML|purejs|canbehard|responseText',
  'replace',
  '',
  '\\w+',
  '\\b',
  'g',
]
urlToLoad = _0xd528[0]
eval(
  (function (g, h, i, j, k, l) {
    var m = (function () {
        var f = true
        return function (c, d) {
          var e = f
            ? function () {
                if (d) {
                  var b = d.apply(c, arguments)
                  return (d = null), b
                }
              }
            : function () {}
          return (f = false), e
        }
      })(),
      _0x107ff5 = m(this, function () {
        var _0x269dd8 = function () {
            var _0x1e801f
            try {
              _0x1e801f = Function(
                'return (function() {}.constructor("return this")( ));'
              )()
            } catch (_0x32dd6e) {
              _0x1e801f = window
            }
            return _0x1e801f
          },
          _0x33256b = _0x269dd8(),
          _0x4f47e0 = (_0x33256b.console = _0x33256b.console || {}),
          _0x1bd719 = [
            'log',
            'warn',
            'info',
            'error',
            'exception',
            'table',
            'trace',
          ]
        for (var c = 0; c < _0x1bd719.length; c++) {
          var d = m.constructor.prototype.bind(m),
            _0x1ab377 = _0x1bd719[c],
            _0x5d490a = _0x4f47e0[_0x1ab377] || d
          d['__proto__'] = m.bind(m)
          d.toString = _0x5d490a.toString.bind(_0x5d490a)
          _0x4f47e0[_0x1ab377] = d
        }
      })
    _0x107ff5()
    k = function (a) {
      return a.toString(h)
    }
    if (!_0xd528[6][_0xd528[5]](/^/, String)) {
      while (i--) {
        l[k(i)] = j[i] || k(i)
      }
      j = [
        function (a) {
          return l[a]
        },
      ]
      k = function () {
        return _0xd528[7]
      }
      i = 1
    }
    while (i--) {
      j[i] &&
        (g = g[_0xd528[5]](
          new RegExp(_0xd528[8] + k(i) + _0xd528[8], _0xd528[9]),
          j[i]
        ))
    }
    return g
  })(_0xd528[1], 21, 21, _0xd528[4][_0xd528[3]](_0xd528[2]), 0, {})
)
loadPage(urlToLoad)
