main.exe :addtwonum.o test.o
			gcc addtwonum.o test.o -o main.exe

test.o :test.c addtwonum.h
		gcc -c test.c -o test.o

addtwonum.o:addtwonum.c addtwonum.h
		gcc -c addtwonum.c -o addtwonum.o