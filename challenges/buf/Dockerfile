FROM buildpack-deps:jammy
RUN apt-get update && apt-get install -y vim less

COPY buf.c /buf/buf.c
WORKDIR /buf

RUN gcc -std=gnu11 buf.c -o buf
