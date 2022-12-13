FROM buildpack-deps:jessie
RUN apt-get update && apt-get install -y --force-yes vim less

COPY challenges/story /story
RUN mv /story/flag /flag
RUN chmod 600 /flag
RUN chmod 4775 /story/storyteller.py
RUN gcc -std=gnu11 /story/storyteller.c -o /story/storyteller
RUN chmod 4775 /story/storyteller

RUN useradd -ms /bin/bash lebron
USER lebron
WORKDIR /home/lebron