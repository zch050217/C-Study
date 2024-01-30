#include <stdio.h>

void matrix_T(){
    int n = 3, m = 3;
    //scanf("%d %d", &n, &m);
    int a[n][m];
    int b[m][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

int main(){
    matrix_T();
    return 0;
}
