#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = -1; 

    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            result = i; 
        } else {
            break; 
        }
    }
if (result != -1) {
        printf("The floor of %d is %d at index %d.\n", k, arr[result], result);
    } else {
        printf("No element less than or equal to %d exists in the array.\n", k);
    }

    return 0;
}