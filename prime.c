#include<stdio.h>
#include<cs50.h>
#include<math.h>

int isPrime(int number);

int main(void)
{
    int n=get_int("Enter number to check if it is prime\n");
    if(isPrime(n))
    {
        printf("%i is not prime\n", n);
    }
    else
    {
        printf("%i is prime\n", n);
    }
}


int isPrime(int number)
{
    for(int i=2; i*i<=number; i++)
    {
        if(n%i==0)
        {
            return 1;
            break;
        }
    }
    return 0;
}




