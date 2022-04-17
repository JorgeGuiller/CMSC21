#include<stdio.h>

int main(void){
int power;
float answer=2;
printf("Input the power that you want 2 to be raised: ");
scanf("%d", &power);
if (power==0){
    printf("2 raised to the power of 0 is equals to: 1");}
else if (power>0){
    while (power>1){
        answer*=2;
        power--;
    }
    printf("2 raised to the power of %d is equals to: %0.0f", power,answer);
}
else if (power<0){
    power= abs(power);
    while (power>1){
        answer*=2;
        power--;
    }
    answer=1/answer;
    printf("2 raised to the power of %d is equals to: %0.4f", power,answer);

}
}
