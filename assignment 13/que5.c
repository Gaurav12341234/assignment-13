//5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int digit(int);
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=digit(n);
    printf("Sum of digits is %d",s);
    return 0;
}
int digit(int n)
{
    if(n>0)
        return n%10+digit(n/10);
}