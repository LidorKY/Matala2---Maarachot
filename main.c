#include "stdio.h"
#include "my_mat.h"

#define true 1;
#define false 0;

int main(){

int matrix[10][10];
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