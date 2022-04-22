#include<stdio.h>
void main()
{
int a=2,b=3;                  //Variable Declarioton
                              //(removed statement if(b==3) since body is empty
if (( b == 3 )&&( a == 2 )){  //changed if statement condition to (( b == 3 )&&( a == 2 ))
    printf( "*****\n" );}     //added \n to make next print go next line

else{
    printf( "-----\n" );}     //added \n to make next print go next line

printf( ">>>>>\n" );          //added \n to make next print go next line
printf( "<<<<<\n" );          //added \n to make next print go next line
}
