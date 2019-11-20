#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_2_arr(int **arr, int n, int m){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%2d ",arr[i][j]);
        }

        printf("\n");
    }
}

int main(void){
    int n, m;
    scanf("%d %d",&n, &m);
    int **y;

    y = (int **)malloc(sizeof(int *)*m);
    y[0] = (int *)malloc(sizeof(int)*n*m);
    for(int i = 1 ; i<n ; ++i){
        y[i] = y[0] + m *i;
    }

    
    int t = 0;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            y[i][j]=t++;
        }
    }

    printf("\narray\n");
    print_2_arr(y, n, m);

    printf("\nthe pointer of array's each element\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%p ",&y[i][j]);
        }
        printf("\n");
    }

    printf("\nwhat's y?\n");
    printf("%p\n",&y);

    printf("\nwhat's y[n]?\n");
    for(int i = 0;i<n;i++){
        printf("%p ",&y[i]);
    }
    printf("\n");

    printf("\nwhat's y[n] stands for?\n");
    for(int i = 0;i<n;i++){
        printf("%p ",y[i]);
    }
    printf("\n");

    printf("\ny[0]\n");
    for(int i = 0;i<n*m;i++){
        printf("%d ",y[0][i]);
    }
    printf("\n");

    printf("\npointer of y[0]\n");
    for(int i = 0;i<n*m;i++){
        printf("%p ",y[0] + i);
    }
    printf("\n\n");
    
    free(y[0]);
    free(y);
    return 0;
}