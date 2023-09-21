build:
	gcc -c new_lib.c
	ar cr new_lib.a new_lib.o
	gcc main.c new_lib.a -o main

run:
	MALLOC_TRACE=main.log ./main
	mtrace ./main main.log
	rm  main.log

clean:
	rm new_lib.o new_lib.a main
