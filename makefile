compile:randomfile.o
	gcc randomfile.o
run:
	./a.out
clean:
	rm *.o ./a.out
file.o: randomfile.c randomfile.h
	gcc -c randomfile.c
