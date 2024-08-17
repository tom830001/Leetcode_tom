#include <stdio.h>

unsigned int bit_reverse(unsigned int input)
{
    unsigned int temp = 0;
    int i;
    for(i = 0; i < 32; i++)
    {
        temp |= ((input >> i) & (0x1)) << (31 - i);
    }
    return temp;

}

void main(void)
{
    printf("%X", bit_reverse(0xE15DC543));
}
