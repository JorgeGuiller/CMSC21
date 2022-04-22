#include<stdio.h>
#include<stdio.h>
void main(){
//Variable Declarations
double res;
float z,x,y=1,tol=0.00001,loop=1;

printf("Input number:");    //input indication
scanf("%f",&x);             //input number
res=(y+x/y)/2;              //equation
printf("%f\n",res);

while(loop){                //Loop to continuosly  perform the equation
    y=res;
    res=(y+x/y)/2;
    printf("%f\n",res);

    if (fabs(res-y)<=tol){  //if statement to break loop
        break;
    }
}
}
