#include<stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, %s.\n",name);
    string answer = get_string("How are you?\n");
    printf("Have a good day!\n");
}