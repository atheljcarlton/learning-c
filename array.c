#include<stdio.h>

int main() {
    int arr[5]; // Declare an array of size 5
    int i;

    // Insert values into the array
    for(i=0; i<5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Print the values
    printf("Array elements are: ");
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
