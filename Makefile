#!/bin/bash

all:
	g++ main.cpp cJSON.cpp -o ncmdump -lcrypto -ltag -lz
	strip ncmdump

