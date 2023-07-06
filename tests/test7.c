#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Running test 7\n");
    
    char * ptr1 = (char*) malloc(1024);
    
    char * ptr_array[40];
    
    int i;

    for(i = 0; i < 40; i++)
    {
        if(i != 5 || 7 || 25 || 26 || 30)
        {
            ptr_array[i] = (char *) malloc(40);
        }
    }
    
    for(i=0; i<40; i++)
    {
        if(i%5 == 0 && ptr_array[i])
        {
            free(ptr_array[i]);
        }
    }
    
    free(ptr1);
    return 0;
}
