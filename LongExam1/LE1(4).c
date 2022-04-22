#include<stdio.h>
#include<stdio.h>
void main()
{ double res;
float z,x,y=1,tol=0.00001,loop=1;
printf("Input number:");
scanf("%f",&x);
res=(y+x/y)/2;
printf("%f\n",res);

while(loop){
    y=res;
    res=(y+x/y)/2;
    printf("%f\n",res);

    if (fabs(res-y)<tol){
        break;
    }
}
}
