all: compile-project

#print-hash: print-hash.c
#	gcc -g print-hash.c -o ./print-hash

#compile-project: random-list.c
#	gcc -g random-list.c -o ./random-list

compile-project: random-list.c
	gcc -c -g binary-node.c
	gcc -c -g random-list.c
	gcc -o ./random-list binary-node.o random-list.o