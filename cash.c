#include <stdio.h>
#include <cs50.h>

int main(void)
{

    float cash_amount = get_float("Which amount?");
    printf("You gave %.2f USD\n", cash_amount);
}


