#include<stdio.h>
int main()
{
    int n,arr[20],temp[20],k,ivalk,remanarr,remanarr1ival,i,p;
    printf("Input array elements : ");
    scanf("%d",&n);
    printf("Input %d array elements : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter k element to rotate the array : ");
    scanf("%d",&k);
    p=k;
        for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for(i=0;i<n;i++)
    printf("%d \t",arr[i]);

}