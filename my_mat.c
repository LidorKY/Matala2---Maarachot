#include <stdio.h>
#include "my_mat.h"

#define infinity 999999

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

int initMatrix [10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            initMatrix[i][j] = mat[i][j];
        }
    }

    int tempMatrix [10][10];
    int finalMatrix [10][10];

    for(int k = 0; k < 10; k++){   
        int temp1, temp2, temp3;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                temp1 = initMatrix[i][j];
                temp2 = initMatrix[i][k];
                temp3 = initMatrix[k][j];
                if((temp1 == 0)&&(temp2 != 0)&&(temp3 != 0)){
                    tempMatrix[i][j] = temp2 + temp3;
                }
                else if((temp1 != 0)&&((temp2 == 0)||(temp3 ==0))){
                    tempMatrix[i][j] = temp1;
                }
                else if((temp1 == 0)&&((temp2 == 0)||(temp3 ==0))){
                    tempMatrix[i][j] = infinity; 
                }
                else{
                    if((temp1) < (temp2 + temp3)){
                        tempMatrix[i][j] = temp1;
                    }
                    else{
                        tempMatrix[i][j] = temp2 + temp3;
                    }
                }
            }  
        }
        // copy to final mat
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                finalMatrix[i][j] = tempMatrix[i][j];
            }
        }
    }
    if(finalMatrix[a][b] != 0){
        printf("True");
        return 0;
    }
    printf("False");
    return 0;

}

int shortestPath(int a, int b, int mat [10][10] ){

int initMatrix [10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            initMatrix[i][j] = mat[i][j];
        }
    }

    int tempMatrix [10][10];
    int finalMatrix [10][10];

    for(int k = 0; k < 10; k++){   
        int temp1, temp2, temp3;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                temp1 = initMatrix[i][j];
                temp2 = initMatrix[i][k];
                temp3 = initMatrix[k][j];
                if((temp1 == 0)&&(temp2 != 0)&&(temp3 != 0)){
                    tempMatrix[i][j] = temp2 + temp3;
                }
                else if((temp1 != 0)&&((temp2 == 0)||(temp3 ==0))){
                    tempMatrix[i][j] = temp1;
                }
                else if((temp1 == 0)&&((temp2 == 0)||(temp3 ==0))){
                    tempMatrix[i][j] = infinity; 
                }
                else{
                    if((temp1) < (temp2 + temp3)){
                        tempMatrix[i][j] = temp1;
                    }
                    else{
                        tempMatrix[i][j] = temp2 + temp3;
                    }
                }
            }  
        }
        // copy to final mat
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                finalMatrix[i][j] = tempMatrix[i][j];
            }
        }
    }
    if(finalMatrix[a][b] != 0){
        return finalMatrix[a][b];
    }
    return -1;

}


