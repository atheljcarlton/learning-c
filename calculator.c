#include <stdio.h>

void display_operations() {
    //Print out List of Operations
    printf("Valid Operations: \n");
    printf(" Addition\n");
    printf(" Subtraction\n");
    printf(" Multiplication\n");
    printf(" Division\n");
}

    //Define Operations
    float add(float x, float y) {
        float sum = x + y;
        return sum;
    }

    float minus(float x, float y) {
        float xminusy = x - y;
        return xminusy;
    }

    float multiply(float x, float y) {
        float xtimesy = x*y;
        return xtimesy;
    }

    float division(float x, float y) {
        float division_result = 0;
        if(y==0) {
            printf("Division by zero. ");
            division_result = 0;
        } else {
            division_result = x/y;
        }
        return division_result;
    }

int main() {

    display_operations();

    return 0;
}