var http = require('http')
var ws = require('ws')
var websocket = require('websocket-stream')
var docker = require('docker-browser-console')
var url = require('url')

var server = http.createServer()
var wss = new ws.WebSocketServer({noServer: true})

server.on('upgrade', function upgrade(request, socket, head) {
  pathname = url.parse(request.url).pathname;
  console.log(`pathname: '${pathname}'`)

  if (pathname === '/osint') {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'osint');
    });
  }
  else if (pathname === '/osint2') {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'osint2');
    });
  }
  else if (pathname === '/buf') {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'buf');
    });
  }
  else if (pathname === '/pass') {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'pass');
    });
  }
  else if (pathname === '/story') {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'story');
    });
  }
  else {
    wss.handleUpgrade(request, socket, head, function done(ws) {
      wss.emit('connection', ws, 'challenges');
    });
  }
});

wss.on('connection', function(socket, container_name) {
  console.log(`container name: '${container_name}'`)
  socket = websocket(socket)
  socket.pipe(docker(container_name)).pipe(socket)
})

var port = 8080
server.listen(port, function() {
  console.log(`server is listening on port ${port}`)
})
