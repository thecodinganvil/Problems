#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,x=0,i,t;
    printf("Input a number : ");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        a++;
        n=n/10;

    }
    n=i;
    while(n!=0)
    {
        t=n%10;
        x = x + (int)pow(t,a);
        n=n/10;

    }
    if(i==x)
    printf("It is an armstrong number");
    else
    printf("It is not a armstrong number");
    
}