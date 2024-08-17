#include <stdio.h>
/* You may call function through function(a, size) */
void function(int *in, int size)
{
    int i, index = 0;
    for(i = 0; i <= size; i++)
    {
        if(i == in[index])
            index++;
        else
            printf("%d\n", i);
    }
}

int main()
{
    int a[10] = {3,5,7,8,11, 200, 201, 202, 303, 404};
    function(a, 500);
}
