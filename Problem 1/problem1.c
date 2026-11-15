
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[] = "L$$555ee"; // using a character array to store the correct password as it contains both letters and numbers
    char b[50]; // setting up an array to store the password entered by the user
    int y = 1; // this is set up for the while loop

    while(y != 0) { // loop it while y is not equal to 0, meaning it will terminate when y has a value of 0

        printf("Enter your password: "); // display the text to instruct the user to enter their password

        scanf("%49s", b); // scans the user's input and stores the password inside the character array b, allowing the full password to be entered

        if (strcmp(b, a) == 0) { // if the password entered by the user is equal to the correct password stored in a, then the following happens

            printf("That is the right password"); // display the text between the ""

            y = 0; // to stop the loop from repeating I set y to 0, which due to the condition will terminate the loop

        }
        else {

            printf("That is not the right password. Try Again"); // in case the user did not enter the right password this message will appear to them and the loop will repeat

        }

        printf("\n"); // this is meant to separate the lines between the loop output

    }

    return 0;
}
