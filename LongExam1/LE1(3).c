#include <stdio.h>
int main(){
int row, column = 0;                                                        //variable declarations
int size = 0 ;                                                              //variable declarations
char cont = 'y';                                                            //variable declarations
while(cont='y'){                                                            //loop to run program
    printf("Enter square size:");
    scanf("%d", &size);
    for( row = 0 ;row < size ; row++){                                      //nested loop indicating row
        for(column = 0 ; column<size;column++){                             //nested loop indicating column                  
            if (column==0 || column==(size-1)|| row==0|| row==(size-1)){    //if condition statement executing in the edges of the square
                printf("*");
                }
            else{
                printf(" ");
                }
            }
        printf("\n");                                                       //break line to print for next line
        }
    fflush(stdin);                                                          //clear output buffer
    printf("Print another square? Enter y or n: ");                         //input indicator
    scanf("%c", &cont);                                                     //user input
    if (cont == 'n'){                                                       //if condition executing if input is n
        break;                                                              //breaks the loop
        }
    else if (cont!='y' &&cont!='n'){                                        //if condition executing if input is not n or y
        printf("Not a valid choice. \n");                                   //error indicator
        printf("Print another square? Enter y/n: ");                        //input indicator
        scanf("%c", &cont);                                                 //user input
    }
    }
return 0;
}
