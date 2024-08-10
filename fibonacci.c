#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n=get_int("How many fibonacci numbers do you want?\n");
    int fibonacci[n];
     fibonacci[0]=0;
     fibonacci[1]=1;
     printf("0\n1\n");
    for (int i=2; i<n; i++)
    {
        fibonacci[i]=fibonacci[i-2]+fibonacci[i-1];
        printf("%i\n" ,fibonacci[i]);
    }
}
