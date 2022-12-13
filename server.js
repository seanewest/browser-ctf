var ws = require('ws')
var websocket = require('websocket-stream')
var docker = require('docker-browser-console')

var server = new ws.Server({port:8080})

server.on('connection', function(socket) {
  socket = websocket(socket)
  socket.pipe(docker('challenge')).pipe(socket)
})
