#include <stdio.h>

//Structures in C

// Create a Structure:
struct myStructure { // Structure Declaration
    int myNum;       // Member (int)
    char myLetter;   // Member (char variable)
};  // End the structure with a semicolon



int main()
{
    // Accessing the Struct
    struct myStructure s1;  // Creates a struct variable with the name "s1"

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    return 0;
}