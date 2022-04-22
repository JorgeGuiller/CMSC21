#include<stdio.h>
void main()
{
int a=2,b=3;                       //variable declarations

if (( b == 3 )&&( a == 2 )){       //changed if statement condition to (( b == 3 )&&( a == 2 ))
    printf( "*****" );}

else{
    printf( "-----" );
    printf( ">>>>>" );             //added to else statement to avoid being printed at b=3 and a=2
    printf( "<<<<<" );}            //added to else statement to avoid being printed at b=3 and a=2

}
