#include<stdio.h>
int main()
{
    
    int n,a[20],i,t,j;
    printf("Input array size : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    printf("%d is greatest number and %d is second greatest number in the array",a[n-1],a[n-2]);
    break;
}
    }
    
