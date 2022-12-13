#!/usr/bin/env bash

nohup node server.js >/dev/null 2>&1  &
nohup node_modules/.bin/budo index.js -P -p 80 >/dev/null 2>&1 &
