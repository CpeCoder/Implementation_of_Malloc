#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Running test 5\n");
    
    char * ptr1 = (char*) malloc(1024);
    char * ptr2 = (char*) malloc(1616);
    
    char * ptr_array[40];
    int i;
    for(i = 0; i < 40; i++)
    {
        if(i%2 == 0)
        {
            ptr_array[i] = (char *) malloc(40);
        }
        else
        {
            ptr_array[i] = (char *) malloc(80);
        }
    }
    free(ptr2);
    
    for( i=39; i>=0; i--)
    {
        if(i%2 != 0)
        {
            free(ptr_array[i]);
        }
    }
    free(ptr1);

    return 0;

}
