#include<stdio.h>
void main()
{ int square,length,width;                          //variable declarations
char choice='y';                                    //variable declarations
 
while(choice=='y'){                                 //while loop checks if choice is equal to y
    printf("Enter square size: ");                  //input indicator
    scanf("%d", &square);                           //user input
    for (length=square;length>0;length--){          //length of square loop

        for(width=square;width>0;width--){          //width of square loop

            if ((length==square)||(length==1)||(width==square)||(width==1)){    //checks if the position is only in the edges
                printf("* ");                       //added space after * to make the square symmetric
                }

            else{
                printf("  ");}                      //double space to be symmetric
                }
            printf("\n");                           //break line to print on the next line
        }
    fflush(stdin);                                  //clear output buffer
    do{                                             //do-while loop to repeat progra,
    printf("Print another square? Enter y or n:");  //input indicator
    scanf("%c", &choice);                           //input new value for choice
    if ((choice!='y')&&(choice!='n')){              //if statement to check if input is invalid
        printf("\nNot a valid choice.\n");          //invalid inpur indicator
        }
        }while((choice!='y')&&(choice!='n'));       //do while loop condition, looping until choice equals to y or n
    }
}
