#include<stdio.h>
#include <cs50.h>

int main(void)
{
    /* Getting input from the user using get_string */
    string name = get_string("What is your name?\n");

    /* Output including the input from the user */
    printf("Hello, %s.\n", name);

    return 0;
}