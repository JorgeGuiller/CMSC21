#include<stdio.h>
// reversing the order of a three digit number
int main(void)
{
    int num,rev_num;
    printf("Input a 3 digit number:\n");
    scanf("%d",&num);


    rev_num=(num%100%10*100)+(num%100/10*10)+(num/100*1); //Each digit is taken through module and division then multiplied
                                                          //to fit their digit when reversed
    printf("Reverse Order of the 2-digit number: %d", rev_num);
    return 0;
}
