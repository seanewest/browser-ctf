FROM buildpack-deps:jessie
RUN apt-get update && apt-get install -y --force-yes vim less

COPY pass.c /pass/pass.c
WORKDIR /pass

RUN gcc -std=gnu11 pass.c -o pass && rm pass.c
