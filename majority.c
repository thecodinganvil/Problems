#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,a[20],i,j,m,t,k=0;
    printf("\n input array size:");
    scanf("%d",&n);
    printf("\n input array elements :");
    for(i=0;i<n;i++)
    {
        printf("\n input a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=i+1;j<n;j++)
        {
            
            if(a[i]==a[j])
            {
                k++;
                if(k>(n/2))
                {
                    printf("\n %d is the majority element:,k=%d",a[i],k);
                    exit(1);
                }
            }

        }
    }
    printf("\n There is no majority element!!,%d",k);
    return 0;
}