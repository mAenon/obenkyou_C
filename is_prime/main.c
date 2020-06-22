#include <stdio.h>
#include <math.h>

int is_prime(int);

int main(void)
{
    /*-------------------------------------*/
    // local var :
    //   i       : loop counter
    //   counter : prime number counter
    /*-------------------------------------*/

    int i, counter = 0;

    for (i = 2; i <= 100; i++)
    {
        if (is_prime(i))
        {
            printf("%d, ", i);
            counter++;
        }
    }

    printf("\nanswer = %d\n", counter);
    return 0;
}

int is_prime(int n)
{
    /*-------------------------------------*/
    // return    : Is n prime number ? (1 / 0)
    //
    // input     :
    //   n : check number
    //
    // local var :
    //   i     : loop counter
    //   limit : check limit
    /*-------------------------------------*/

    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;


    int i, limit;

    limit = sqrt(n);

    for (i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
