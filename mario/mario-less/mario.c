#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char stored;
   do
   {
     printf("insert a value between 1 and 8 : ");
     scanf("%c",&stored);
   }while(stored<'1' || stored >'8');
   stored-='0';
   printf("STORED :  %d\n",stored);
   for(int j=1;j<=stored;j++){
    for(int i=0;i<stored-j;i++)
   {
    printf(" ");
   }
    for(int i=stored-j;i<stored;i++)
      {
        printf("#");
    }
    printf(" ");
    for(int i=0;i<j;i++)
   {
    printf("#");
   }

    printf("\n");
   }
}