#include <stdio.h>
#include <cs50.h>

int main(void)
{
// ensure that the user’s input is indeed a floating-point (or integral) value but not that it is non-negative
    float cash_amount = 0.00;
    do {
        cash_amount = get_float("Which amount?");
    } while(cash_amount <= 0.00);

    printf("You gave %.2f USD\n", cash_amount);
}


