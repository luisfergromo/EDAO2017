//
//  main.c
//  matrices
//
//  Created by Luis Romo on 18/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include "functions.h"
/*Sin memoria dinámica
 void printMatrix0(int a[2][2]);
     //%h para variables tipo short
 void printMatrix2(int a[][2],short n, short m);
 */

    //void printMatrix1(int **a,short n, short m);
void cpyMatrix(int a[2][2],int b[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            a[i][j]=b[i][j];
    }
}

int main(int argc, const char * argv[]) {
    int m1[][2]={{1,2},{3,4},{5,6}};
    int m2[2][2]={{0}};
        printMatrix0(m1);
    cpyMatrix(m2, m1);
    printMatrix0(m2);
        //printMatrix2(m1, 2);
        //printMatrix1(m1,2,2);
    return 0;
}


