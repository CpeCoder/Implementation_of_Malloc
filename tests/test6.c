#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Running test 6\n");

    char * ptr1 = ( char * ) malloc( 2048 );

    char * ptr2 = ( char * ) calloc(160, sizeof(char));

    char * ptr3;

    free( ptr1 );

    ptr3 = ( char * ) calloc(320, sizeof(char));

    free( ptr2 );

    free( ptr3 );

    return 0;
}
