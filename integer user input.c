#include <stdio.h>

int main(){
     //format strings
    // %d for integer
    // %f for float
    // %c for character
    int number;
    //displays formatted input
    printf("Enter an integer :");
    //reads the formatted input and store them
    scanf("%d", &number);
    //displays formatted input
    printf("you entered %d", number);
}
