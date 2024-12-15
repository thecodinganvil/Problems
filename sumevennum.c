#include<stdio.h>
int main()
{
    int n,a[200],i,s=0,x=0;
    printf("Input array size : ");
    scanf("%d",&n);
    printf("Input %d array elements : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            x++;
            s+=a[i];
        }
       
    }
    printf("There are %d even numbers and sum of all Even numbers in the array is %d",x,s);
}