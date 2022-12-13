FROM buildpack-deps:jammy
RUN apt-get update && apt-get install -y vim less

COPY storyteller.c /story/storyteller.c
COPY flag /flag
RUN chmod 600 /flag
RUN gcc -std=gnu11 /story/storyteller.c -o /story/storyteller
RUN chmod 4775 /story/storyteller

RUN useradd -ms /bin/bash lebron
USER lebron
WORKDIR /home/lebron
