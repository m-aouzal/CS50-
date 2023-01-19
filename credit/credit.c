#include <cs50.h>
#include <stdio.h>

#define fift 100000000000000
#define sixt 1000000000000000
#define sevent 10000000000000000
#define fourt 10000000000000
#define thirt 1000000000000

int main(void)
{
    long credit;
    int sumOdd=0;
    int sumEven=0;
    int sum=0;
    int test=0;
    long modOdd=10;
    long moddEven=1;
    int check;
    credit= get_long("insert the credit card : ");
    if(credit<fift || credit>sevent) {
        printf("\nInvalid");
        return 0;
    }
    for (int i=0;i<8;i++){
        test=(credit/modOdd)%10*2;
        printf("test : %d\n",test);

       do{
            sumOdd+=test%10;
            test/=10;

        } while(test!=0);

        modOdd=modOdd*100;
    }
    for (int i=0;i<8;i++){
        test=(credit/moddEven)%10;
        printf("test : %d\n",test);
        sumEven+=test;
        moddEven=moddEven*100;
    }
    printf("sumod %d",sumOdd);
    printf("SumEven %d",sumEven);

    sum=sumOdd+sumEven;
    printf("\n%d",sum%10);
    if(sum%10==0){
        if(credit<sixt){
            check=credit/fourt;
            printf("check : %d",check);
            if (check==34 || check==37) printf("american express");
        }
    }
    else printf("Invalid");







}