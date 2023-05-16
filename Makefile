all: compile-project

#print-hash: print-hash.c
#	gcc -g print-hash.c -o ./print-hash

compile-project: contact-struct.c
	gcc -g contact-struct.c -o ./contact-struct