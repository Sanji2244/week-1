// Program to count the no's of positive and negative number in an array
#include <stdio.h>

int main() {
    int n, i, positive = 0, negative = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Count positive and negative numbers
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }
    
    printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    
    return 0;
}
