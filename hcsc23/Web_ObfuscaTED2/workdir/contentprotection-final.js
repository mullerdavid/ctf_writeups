function purejs(a) { //adding 32768 to charcode
  var _0x52fd32 = ''
  for (var c = 0; c < a.length; c++) {
    var d = a.charCodeAt(c),
      _0x490c33 = (d - 32768 + 65536) % 65536
    _0x52fd32 += String.fromCharCode(_0x490c33)
  }
  return _0x52fd32
}
function canbehard(a) { //adding 47 to each char
  var _0x54af19 = ''
  for (var c = 0; c < a.length; c++) {
    var d = a.charCodeAt(c)
    d >= 33 && d <= 126 && ((d -= 47), d < 33 && (d += 94))
    _0x54af19 += String.fromCharCode(d)
  }
  return _0x54af19
}
urlToLoad = '/tedtalk/index.html'
function loadPage(a) {
  var b = new XMLHttpRequest()
  b.open('GET', a, false)
  b.send()
  document.body.innerHTML = purejs(canbehard(b.responseText))
}
loadPage(urlToLoad)