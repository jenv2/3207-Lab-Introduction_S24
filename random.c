#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// character function randchar() returns a random character from A-Z
// this function is then used in print_random.c to generate a 7 letter word

char randchar()
{
	char c;

    char all_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int rand_index = rand() % (sizeof(all_chars)-1);
    c = all_chars[rand_index];
    
	return c;
}