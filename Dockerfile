FROM node:18-bullseye

COPY . /server
WORKDIR /server

RUN npm install
COPY --from=docker:dind /usr/local/bin/docker /usr/local/bin/

CMD node server.js & node_modules/.bin/budo index.js -P -p 80
