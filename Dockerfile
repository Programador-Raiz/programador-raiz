FROM ubuntu:16.04

RUN apt-get update && apt-get install build-essential nano python -y

RUN mkdir -p /src

WORKDIR /src

COPY ./src .
