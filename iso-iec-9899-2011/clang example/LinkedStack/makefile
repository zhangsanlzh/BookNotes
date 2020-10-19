outputPath:=./bin

program:linkedStack.o main.o
	gcc -o $(outputPath)/program $(outputPath)/linkedStack.o $(outputPath)/main.o

main.o:main.c
	gcc -o $(outputPath)/main.o -c main.c

linkedStack.o:LinkedStack.c
	mkdir bin
	gcc -fexec-charset=GBK -o $(outputPath)/linkedStack.o -c LinkedStack.c

clean:
	rm -rf *.o *.exe bin

run:
	$(outputPath)/program