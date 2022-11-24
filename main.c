#include "stdio.h"
#include "my_mat.h"

#define true 1;
#define false 0;

int main(){

int matrix[10][10] ={{0,3,1,0,0,2,0,0,0,0},
                    {3,0,1,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,5,0,0},
                    {0,0,0,0,0,0,0,4,1,1},
                    {2,0,0,0,0,0,2,0,0,0},
                    {0,0,0,0,0,2,0,0,0,0},
                    {0,0,0,5,4,0,0,0,0,2},
                    {0,0,0,0,1,0,0,0,0,0},
                    {0,0,0,0,1,0,0,2,0,0}};
int check = true;
char order;
while(check){
    scanf("%c",&order);
    switch(order){
        case ('A'):
        //func 1
        initializingMat(matrix);
        break;

        case ('B'):
        //func 2
        int i,j;
        scanf("%d",&i);
        scanf("%d",&j);
        printf("%d",containsPath(i,j,matrix));
        break;

        case ('C'):
        //func 3
        scanf("%d",&i);
        scanf("%d",&j);
        printf("%d",shortestPath(i,j,matrix));
        break;

        case ('D'):
        //exit loop
        check = false;
        break;

        default:
        printf("pls enter a char from A,B,C,D only");
        }
   }
    return 0;
}