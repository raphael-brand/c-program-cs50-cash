#include <stdio.h>
#include <cs50.h>

int main(void)
{
// ensure that the user’s input is indeed a floating-point (or integral) value but not that it is non-negative
    float cash_amount = 0.00;
    do {
        cash_amount = get_float("Which amount?");
// If the user fails to provide a non-negative value, your program should re-prompt the user for a valid amount again and again until the user complies
    } while(cash_amount <= 0.00);

    printf("You gave %.2f USD\n", cash_amount);
}


