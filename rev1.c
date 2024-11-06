#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float modulo(float num);

typedef struct{
    float x;
    float y;
}posicao;

int main(){
    posicao tiro = {0, 0};
    posicao alvo = {0, 0};

    float r1, r2;
    scanf("%f %f %f", &tiro.x, &tiro.y, &r1);

    scanf("%f %f %f", &alvo.x, &alvo.y, &r2);

    float dx = tiro.x - alvo.x;
    float dy = tiro.y - alvo.y;

    dx = modulo(dx);
    dy = modulo(dy);

    float H = sqrt((pow(dx, 2) + pow(dy, 2)));

    if(H <= (r1 + r2)){
        printf("ACERTOU");
    }
    else{
        printf("ERROU");
    }

    return 0;
}

float modulo(float num){
    if(num<0){
        num = num*(-1);
    }

    return num;
}