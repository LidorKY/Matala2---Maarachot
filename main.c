#include "stdio.h"
#include "my_mat.h"

#define true 1;
#define false 0;

int main(){

int matrix[10][10];
int check = true;
int badChoice;
char order;

while(check){
    scanf("%c",&order);
    switch(order){
        case ('A'):
        //func 1
        initializingMat(matrix);
        scanf("%d",&badChoice);
        break;

        case ('B'):
        //func 2
        int i,j;
        scanf("%d",&i);
        scanf("%d",&j);
        printf("%d",containsPath(i,j,matrix));
        scanf("%d",&badChoice);
        break;

        case ('C'):
        //func 3
        scanf("%d",&i);
        scanf("%d",&j);
        printf("%d",shortestPath(i,j,matrix));
        scanf("%d",&badChoice);
        break;

        case ('D'):
        //exit loop
        check = false;
        break;

        default:
        scanf("%d",&badChoice);
        }
   }

    return 0;
}