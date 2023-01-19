#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size, end_size, years, actual_size = 0;
    years = 0;
    // TODO: Prompt for start size
    do
    {
        printf("insert the start size :");
        scanf("%d",&start_size);
    }while (start_size<9);

    // TODO: Prompt for end size
    do{
    printf("insert the end size :");
     scanf("%d",&end_size);
    }while(end_size<start_size);

    // TODO: Calculate number of years until we reach threshold
    while (end_size>actual_size){
        actual_size=start_size+start_size/3-start_size/4;
        start_size=actual_size;
        years+=1;
    }

    // TODO: Print number of years
    printf("the numbers of years is %d\n",years);
}
