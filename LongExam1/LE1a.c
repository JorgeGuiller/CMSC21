#include<stdio.h>
void main()
{
int a=2,b=3;                //Variable Declarioton
                            //(removed statement if(b==3) since body is empty
if ( a == 2 ){              //if statement executing if a==2
    printf( "*****\n" );}   //added \n to make next print go next line

else{
    printf( "-----\n" );}   //added \n to make next print go next line

printf( ">>>>>\n" );        //added \n to make next print go next line
printf( "<<<<<\n" );        //added \n to make next print go next line
}
