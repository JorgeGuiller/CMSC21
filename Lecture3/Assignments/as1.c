#include<stdio.h>
void main()
{
int age;

printf("Input age:");
scanf("%d", &age);

if ((age >= 13) &&(age <= 19)){
    char  teenager[4] = "true";
    printf("Teenager:%s", teenager);}

else{
    char teenager[5] = "false";
    printf("Teenager:%s", teenager);}

}
