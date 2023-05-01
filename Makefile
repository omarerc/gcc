all: compile-project

#print-hash: print-hash.c
#	gcc -g print-hash.c -o ./print-hash

compile-project: contacts.c
	gcc -g contacts.c -o ./contacts