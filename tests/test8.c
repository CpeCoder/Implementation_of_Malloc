#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main()
{
    printf("Running test 8\n");
    
    char * ptr1 = (char*) malloc(1024);
    char * ptr_array[40];
    int i;

    for(i = 0; i < 40; i++)
    {
        ptr_array[i] = (char *) malloc(40);
    }

    for(i = 0; i < 40; i++)
    {
        if(i == 10 || 20 || 25 || 28)
        {
            ptr_array[i] = realloc(ptr_array[i], 120);
        }
        if(i > 15)
        {
            free(ptr_array[i]);
        }
    }

    free(ptr1);

   return 0;
}
