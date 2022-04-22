#include<stdio.h>
void main()
{ int square,length,width;
char choice='y';
while(choice=='y'){
    printf("Enter square size: ");
    scanf("%d", &square);
    for (length=square;length>0;length--){

        for(width=square;width>0;width--){

            if ((length==square)||length==1){
                printf("* ");
                }

            else{
                if ((width==square)||width==1){
                    printf("* ");}

                else{
                    printf("  ");}
                }
            }
            printf("\n");
        }
    fflush(stdin);
    do{

    printf("Print another square? Enter y or n:");
    scanf("%c", &choice);
    if ((choice!='y')&&(choice!='n')){
        printf("\nNot a valid choice.\n");
        }
        }while((choice!='y')&&(choice!='n'));
    }
}
