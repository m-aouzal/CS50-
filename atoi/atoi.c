#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int len=strlen(input);
    int sum=0;
    // TODO
    if(input[len-1]){
   sum=input[len-1]-'0';
   input[len-1]='\0';
    }
    else return 0;
   return sum + 10*convert(input);
}