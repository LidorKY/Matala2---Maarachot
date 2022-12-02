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
    if(order=='A'){//func 1
        initializingMat(matrix);
        } 
        else if(order=='B'){
        //func 2
        int i,j;
        scanf("%d",&i);
        scanf("%d",&j);
        containsPath(i,j,matrix);
        }
        else if(order=='C'){
        //func 3
        int i,j;
        scanf("%d",&i);
        scanf("%d",&j);
        printf("%d \n",shortestPath(i,j,matrix));
        }
        else if(order=='D'){
        //exit loop
        check = false;
        }
        else{
        }
    }


    return 0;
}