#include <stdio.h>
#include "my_mat.h"

#define infinity 7777

#define true 1
#define false 0

int initializingMat (int mat [10][10]){
int num;
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        mat[i][j] = scanf("%d",&num);
    }
}
return 0;
}

int containsPath(int a, int b, int mat [10][10]){
    int tempMatrix [10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tempMatrix[i][j] = mat[i][j];
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((i != j)&&(tempMatrix[i][j] == 0)){
            tempMatrix[i][j] = infinity;
            }
        }
    }
    for (int pivot = 0; pivot < 10; pivot++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                
                int temp1 = tempMatrix[i][j];
                int temp2 = tempMatrix[i][pivot];
                int temp3 = tempMatrix[pivot][j];
               
                if (temp1 > (temp2 + temp3)){
                    tempMatrix[i][j] = temp2 + temp3;
                }

            }
        }
    }  
    if((tempMatrix[a][b] != 0)&&(tempMatrix[a][b] != infinity)){
        printf("True\n");
        return true;
    }
    else{
        printf("False\n");
        return false;
    }

}

int shortestPath(int a, int b, int mat [10][10] ){
    int tempMatrix [10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tempMatrix[i][j] = mat[i][j];
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((i != j)&&(tempMatrix[i][j] == 0)){
            tempMatrix[i][j] = infinity;
            }
        }
    }
    for (int pivot = 0; pivot < 10; pivot++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                
                int temp1 = tempMatrix[i][j];
                int temp2 = tempMatrix[i][pivot];
                int temp3 = tempMatrix[pivot][j];
               
                if (temp1 > (temp2 + temp3)){
                    tempMatrix[i][j] = temp2 + temp3;
                }

            }
        }
    }
    if((tempMatrix[a][b] != 0)&&(tempMatrix[a][b] != infinity)){
        return tempMatrix[a][b];
    }
    return -1;
}


