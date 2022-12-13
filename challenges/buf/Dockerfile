FROM buildpack-deps:jessie
RUN apt-get update && apt-get install -y --force-yes vim less

COPY buf.c /buf/buf.c
WORKDIR /buf

RUN gcc -std=gnu11 buf.c -o buf
