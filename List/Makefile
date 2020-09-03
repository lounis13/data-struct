
# run the program
run : compil
	./main

# compilation GCC 
compil : main.c list.h list.c
	gcc -Wall -g3 main.c list.c -o main

debug : compil
	gdb main

meme_test : compil
	valgrind ./main

clean : 
	rm -rf main 