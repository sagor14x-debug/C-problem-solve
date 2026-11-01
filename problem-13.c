
#include <stdio.h>

int main()
{
    float deposit, rate, interest, totalAmount;

    printf("Enter deposit amount: ");
    scanf("%f", &deposit);

    if (deposit > 1000000)
    {
        rate = 12;
    }
    else if (deposit >= 700000)
    {
        rate = 10;
    }
    else if (deposit >= 400000)
    {
        rate = 8;
    }
    else if (deposit >= 100000)
    {
        rate = 6;
    }
    else
    {
        rate = 4;
    }

    interest = deposit * rate / 100;
    totalAmount = deposit + interest;

    printf("Annual Interest: %.5f\n", interest);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}
