#include<stdio.h>

int main(void){
int days, start,i,j;
do{
    printf("Input number of days in month: ");
    scanf("%d", &days);
    }while((days<0)||(days>32)||(days<28));
do{
    printf("Input the starting day of the month (1=Sun,..,7=Sat):");
    scanf("%d", &start);
    }while((start<0)||(start>7));
for(i=1;i<days;i++){

    for(j=0;((i<days)&&(j<6));j++){

        while(start!=0){
            printf("   ");
            start--;
            j++;
        }
        if(i<10){
        printf("%d  ",i);}


        else{
        printf("%d ",i);}

        i++;
    }
    printf("%d\n",i);

}
}
