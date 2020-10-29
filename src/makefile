exe_so:main.o max.o sum.o
	gcc -o exe_so main.o max.o sum.o
main.o:main.c
	gcc -I../include -c main.c
max.o:max.c
	gcc -I../include -c max.c
sum.o:sum.c
	gcc -I../include -c sum.c

.PHONY:clean
clean:
	rm *.o exe_so

