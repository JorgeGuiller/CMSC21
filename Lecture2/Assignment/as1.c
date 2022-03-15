#include<stdio.h>
// reversing the order of a two digit number
int main(void)
{
    int num,rev_num;
    printf("Input a 2 digit number:\n");
    scanf("%d",&num);


    rev_num=(num%10*10)+(num/10); //the remainder of num when divided by 10 is the 1st digit while the num divided by 10
                                 // is the 2nd digit thus adding it with the modulo ten of the number would result in its reverse
    printf("Reverse Order of the 2-digit number: %d", rev_num);
    return 0;
}
