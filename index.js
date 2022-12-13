var docker = require('docker-browser-console')
var websocket = require('websocket-stream')

var terminal = docker()

//terminal.pipe(websocket(`ws://canvasctf:8080${window.location.pathname}`)).pipe(terminal)
terminal.pipe(websocket(`ws://localhost:8080${window.location.pathname}`)).pipe(terminal)

terminal.appendTo(document.body)
