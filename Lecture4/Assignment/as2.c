#include <stdio.h>
int main(void){
int i=10;

while (i < 10) {
printf("While Loop: %d\n", i);
i++;
}
for (i=10; i < 10;i++){
    printf("For Loop: %d\n", i);
 }
i=10;
do{
    printf("Do-While loop: %d\n", i);
    i++;
} while(i<10);
}
