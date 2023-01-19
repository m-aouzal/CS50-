#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<math.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    int bit,binary[8];
    string word=get_string("insert a word");
    for (int i=0;word[i]!='\0';i++){
        bit=word[i];

        for(int j=0;j<8;j++){
            binary[j]=bit%2;
            bit/=2;
            }


            for (int k=7;k>=0;k--){
                print_bulb(binary[k]);
            }
          printf("\n");
        }

    }







void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
