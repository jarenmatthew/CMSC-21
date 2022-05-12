#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#define NUM_STRINGS ((int) (sizeof(road_network)) / sizeof(road_network[0]))

int main(){

    int station, i = 0, road_network[8][8] = {
                                    {1,1,0,0,0,1,0,0},
                                    {1,1,1,0,0,0,0,0},
                                    {0,1,1,0,1,1,0,0},
                                    {0,0,0,1,1,0,0,0},
                                    {0,0,0,1,1,0,0,0},
                                    {1,0,1,0,0,1,0,0},
                                    {1,0,0,1,0,0,1,0},
                                    {0,0,0,0,0,1,0,1}
                                   };

    char *points[NUM_STRINGS] = {"A", "B", "C", "D", "E", "F", "G", "H"};

    //displays the adjacency matrix
    printf ("\t  A\t  B\t  [C]\t  [D]\t  E\t  F\t  G\t  H\n");
    for (int row = 0; row < NUM_STRINGS; row++){
        if (points[row] == "C" || points[row] == "D")
        {
            printf("[%s]",points[row]);
        }else{
            printf("%s  ",points[row]);
        }
        //prints numbers in matrix
        for (int col = 0; col < NUM_STRINGS; col++){
            printf("%8d", road_network[row][col]);
        }
        printf("\n");
    }

    //input for stating location
    printf("Which point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf ("%d",&station);


    if (station < 0 || station > 7){
        printf("Invalid. Try again.");
    }

    // if starting location is beside/nearest to charging station
    else if (road_network[station][2]){
        printf("At point: %s\n",points[station]);
        printf("You arrived at charging station %s", points[2]);
    }else if (road_network[station][3]){
        printf("At point: %s\n",points[station]);
        printf("You arrived at charging station %s", points[3]);
    }


    // for further starting locations
    else{
        printf("At point: %s\n",points[station]);

        // Error fix: So the program wont print or stay in location A twice.
        if (station == 0){
            i = 1;
        }

        for (i; i < NUM_STRINGS; i++){
            if (road_network[station][i])
            {
                printf("Now at point %s \n", points[i]);

                //if charging station is reached ( 2 - C, 3 - D )
                if (i == 2 || i == 3){
                    printf("You arrived at charging station %s", points[i]);
                    break;
                }else{
                    station = i;
                }
            }

            //goes back to 0 if it reaches the end and no path/point is found
            else if (i == 7){
                i = 0;
            }
        }
    }
}
