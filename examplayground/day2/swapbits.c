#include <stdio.h>
#include <unistd.h>
unsigned char	print_bits(unsigned char octet)
{
    int i = 128; // MSB

    while(i > 0)
    {
        if(octet & i)
            write(1, "1", 1);
        else    
            write(1, "0", 1);
        i >>= 1;
    }
    return octet;
}


unsigned char	swap_bits(unsigned char octet)
{
    unsigned char reverse = ((octet & 1) << 4 | (octet & 128) >> 4);

    return reverse;
}

int main()
{
    unsigned char octet = 128;
    print_bits(swap_bits(octet));
    return 0;   
}