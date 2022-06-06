#include <stdio.h>
//4. smacros for dimensions of the array road_networks
#define row 8
#define col 8
int main(void) {

    char *point[] = {"A  ", "B  ", "[C]", "[D]", "E  ", "F  ", "G  ", "H  "}; //C & D in brackets to reflect charing station
    //1.) road_networks array initialization
    int location, valid=0, road_networks[row][col] = {{1,1,0,0,0,1,0,0}, // point A
                                        {1,1,1,0,0,0,0,0}, // Point B
                                        {0,1,1,0,1,1,0,0}, // Point C
                                        {0,0,0,1,1,0,0,0}, // Point D
                                        {0,0,0,1,1,0,0,0}, // Point E
                                        {1,0,1,0,0,1,0,0}, // Point F
                                        {1,0,0,1,0,0,1,0}, // Point G
                                        {0,0,0,0,0,1,0,1}}; // Point H


    printf("%8c", ' ');                 //print 8 spaces to align table
    for (int i = 0; i < row; i++) {
        printf("%-6s", point[i]);       //%-6s to allign table
    }
    printf("\n");

    // 2.) loop to print adjacency matrix
    for (int i = 0; i < row; i++) {
        printf("%s", point[i]);     //point indicator

        for (int j = 0; j < col; j++) { // loop to print the point adjacency
            printf("%6i", road_networks[i][j]); //%6i to allign table
        }
        printf("\n");
    }

    printf("Which point are you located?");
    for(int y=0;y<8;y++){
        printf("\n%-d      %s", y,point[y]); //loop to print corresponding number to point
    }


    while (1) { // while loop to check for input validation
        printf("\nEnter your location: ");
        scanf("%d", &location);

        if (location<0 || location>7) { // checks if input is not 0 through 7
            printf("%d", valid);
            printf("\nError! You can only be at points 0 through 7. Make sure you type only the number."); //error notice
        }
        else { // breaks the loop upon valid input
            printf("\n");
            break;
        }
    }

    printf("At point %s.\n", point[location]);

    for (int i = 0; i < col; i++) { //3. loop to search for route

        if (road_networks[location][2] == 1) { // Near Point C
            printf("Now at point %s.\nPoint: %s arrived at charging station", point[2],point[2]);
            break;
        }

        else if (road_networks[location][3] == 1) { // Near point D
            printf("Now at point %s.\nPoint: %s arrived at charging station", point[3],point[3]);
            break;
        }

        else if (road_networks[location][i] == 1) {
            printf("Now at point %s.\n", point[i]);

            if (point[i] == point[2] || point[i] == point[3]) {
                printf("Point: %s arrived at charging station.", point[i]);
                break;
            }

            else { //reassign location
                location = i;
            }
        }
    }

}
