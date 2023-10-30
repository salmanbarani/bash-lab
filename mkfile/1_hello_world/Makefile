# TARGETS: name for certain operations you want to assign
# target: prerequisites which is the dependency to the target


build: main.o my_lib.o
	gcc main.o my_lib.o -o main # we can list as many commands as we want 

main.o:
	gcc main.c -c 

my_lib.o:
	gcc my_lib.c -c 

run:
	./main

clean:
	rm -f *.o
	rm -f main





