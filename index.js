var docker = require('docker-browser-console')
var websocket = require('websocket-stream')

var terminal = docker()

//terminal.pipe(websocket('wss://canvasctf.com:8080')).pipe(terminal)
terminal.pipe(websocket('ws://localhost:8080')).pipe(terminal)

terminal.appendTo(document.body)
