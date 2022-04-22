#include<stdio.h>
void main()
{
int a=2,b=3;                    //variable declaration

if (( b == 3 )&&( a == 2 )){    //if statement condition changed to (( b == 3 )&&( a == 2 ))
    printf( "*****\n" );}       //added \n to break line

else{
    printf( "-----\n" );        //added \n to break line
    printf( ">>>>>\n" );}       //added \n to break line and added to else to avoid printing at b==3 and a==2

printf( "<<<<<" );              //added \n to break line
}
