#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(long number);

int main(void)
{
    long p=get_int("you wanna check primes from\n");
    long m=get_int("till?\n");
    for (long n = p; n <= m; n++)
    {
        if (isPrime(n))
        {
          //  printf("%ld is not prime\n", n);
        }
        else
        {
            printf("%ld is prime\n", n);
        }
    }
}

bool isPrime(long number)
{
    for (long i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return true;
            //break;
        }
    }
    return false;
}
