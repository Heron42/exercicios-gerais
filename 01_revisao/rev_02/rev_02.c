#include <stdio.h>
#include <stdlib.h>

void imprimetriangulo(int n);

int main(){
    int n;
    scanf("%d", &n);

    imprimetriangulo(n);

    return 0;
}

void imprimetriangulo(int n){
    int x = 1;
    int count = 1;
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<count;j++){
            printf("%d ", x);
            x++;
        }
        printf("\n");
        count++;
    }
}