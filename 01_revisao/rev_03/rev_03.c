#include <stdio.h>
#include <stdlib.h>

int main(){
    short int n;
    scanf("%hd", &n);    //Lê a quantidade de Ls

    short int L[n];

    int i, j;
    for(i=0;i<n;i++){
        scanf("%hd", &L[i]); //Pega os indentificadores dos Ls
    }

    short int count[n];

    for(i=0;i<n;i++){
        count[i] = 0;   //Coloca todos os contadores em 0
    }

    for(i=0;i<n;i++){
        short int x = L[i];
        for(j=0;j<n;j++){
            if(L[j] == x){
                count[i]++;
            }
        }
    }   //Conta quantos de cada identificador têm

    for(i=0;i<n;i++){
        if(count[i] == 1){
            count[i] = 0;
        }
        else if(count[i] > 1){
            count[i] = 1;
        }
    }   //Numera os repetidos como "1" e os não repetidos como "0"


    for(i=0;i<n;i++){
        if(count[i] == 0){
            printf("%d ", L[i]);    //Imprime os não repetidos
        }
    }
}
