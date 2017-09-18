//
//  functions.h
//  matrices
//
//  Created by Luis Romo on 18/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef functions_h
#define functions_h

void printMatrix0(int a[2][2]){
    for(int i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<2;j++)
            printf(" %d ",a[i][j]);
    }
    printf("\n");
}

void printMatrix1(int **a,short n, short m){
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++)
            printf(" %d ",a[i][j]);
    }
    printf("\n");
}
void printMatrix2(int a[][2], short n){
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<n;j++)
            printf(" %d ",a[i][j]);
    }
    printf("\n");
}
#endif /* functions_h */
