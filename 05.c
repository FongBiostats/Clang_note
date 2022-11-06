#include <stdio.h>

int total_price;

int main()
{
    int apple_price, bananas_price;

    apple_price=8;
    bananas_price=12;
    total_price= apple_price + bananas_price ;

    printf ("the total price = %d, apple price =%d, bananas price=%d\n", apple_price, bananas_price, total_price);

    return 0;
}