run: fact
	./fact

fact: fact.c
	gcc -Wall -std=c11 fact.c -o fact

build: fact
