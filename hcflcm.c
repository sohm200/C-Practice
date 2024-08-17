#include <cs50.h>
#include <stdio.h>

int hcf_of_2(int num1, int num2);
int hcf_of_3(int n1, int n2, int n3);
int lcm_of_3(int no1, int no2, int no3);

int main(void)
{
    int a = get_int("Calculate hcf and lcm for \n");
    int b = get_int("\n");
    int c = get_int("\n");
    printf("the gcd of the given numbers is %i and the lcm is %i\n", hcf_of_3(a, b, c), lcm_of_3(a, b, c));
}


int hcf_of_2(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    if (num1 == 0)
    {
        return num2;
    }
    else if (num2 == 0)
    {
        return num1;
    }
    return 0;
}




int hcf_of_3(int n1, int n2, int n3)
{
     int gcd_of_n1_n2, gcd;
     gcd_of_n1_n2=hcf_of_2(n1, n2);
     gcd=hcf_of_2(gcd_of_n1_n2, n3);
     return gcd;
}


int lcm_of_3(int no1, int no2, int no3)
{
     int gcd_of_no1_no2, gcd_of_no2_no3, gcd_of_no1_no3, gcd_of_3;
     gcd_of_no1_no2=hcf_of_2(no1,no2);
     gcd_of_no2_no3=hcf_of_2(no2,no3);
     gcd_of_no1_no3=hcf_of_2(no1,no3);
     gcd_of_3=hcf_of_3(no1,no2,no3);

     int var1 = no1*no2*no3*gcd_of_3;
     int var2 = gcd_of_no1_no2*gcd_of_no2_no3*gcd_of_no1_no3;

     //printf("no1*no2*no3*gcd_of_3 is %i\n ", var1);
     //printf("gcd_of_no1_no2*gcd_of_no2_no3*gcd_of_no1_no3 is %i\n", var2);

     return var1/var2;
}

