#include<stdio.h>
void main()
{
int number;
char list1[10][20]={
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    };

char list2[8][20]={
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
};
char list3[10][20]={
    "",
    "-one",
    "-two",
    "-three",
    "-four",
    "-five",
    "-six",
    "-seven",
    "-eight",
    "-nine",

};
do {
    printf("Input a two digit number:");
    scanf("%d", &number);
    }while (number<10);

if (number<20){
    printf("Number in words: %s", list1+(number-10));
}

else{
    printf("number in words: %s%s",list2+((number/10)-2),list3+((number%10)));
}

}
