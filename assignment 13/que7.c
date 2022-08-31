//7. Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
int HCF(int,int);
int main()
{
    int s,a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=HCF(a,b);
    printf("HCF is %d",s);
    return 0;
}
int HCF(int a,int b)
{
    int min,max;
    min=a<b?a:b;
    max=a>b?a:b;
    if(max%min==0)
        return min;
    return HCF(min,max%min);
}