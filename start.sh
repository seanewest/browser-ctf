#!/usr/bin/env bash

docker build . -t challenge
nohup node server.js >/dev/null 2>&1  &
nohup node_modules/.bin/budo index.js -p 80 >/dev/null 2>&1 &
