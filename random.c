// character function randchar() returns a random character from A-Z
// this function is then used in print_random.c to generate a 7 letter word

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>*/

char randchar()
{
	char c;

	srand( time(NULL) );

    char all_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

	printf("Random character: ");
    //c = (rand()%(90-65))+65
    for(size_t i=0; i<(sizeof(all_chars)-1); i++) {
        char c;
        int rand_index = (double)rand() / RAND_MAX * (sizeof(all_chars)-1);

        c = all_chars[rand_index];
        printf("%c",c);
    }

	putchar('\n');
    

	return(c);
}