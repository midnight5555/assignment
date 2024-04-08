patient:functions.o main.o
	gcc-o patient function.o main.o
main.o: main.c
		gcc -c main.c
functions.o: functions.c
	gcc -c fuctions.c
clean: 
	rm patient*.o