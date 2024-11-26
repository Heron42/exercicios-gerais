#include <stdio.h>
#include <math.h>

int contacasa(int x);
void converte(int dec, int num);
int main(){
    int dec;
    //scanf("%d", &dec);
    dec = 2497;

    int num = contacasa(dec);

    converte(dec, num);

    return 0;
}

int contacasa(int x){
    int count=0;

    while(1){
        if(x>0){
            x = x/10;
            count++;
        }
        else{break;};
    }

    return count;
}

void converte(int dec, int num){
    int digitos[num];
    int i;
    for(i=0;i<num;i++){
        digitos[i] = (dec%8);
        dec /= 8;
    }

    int oct = 0;

    for(i=0;i<num;i++){
        oct += digitos[i]*(pow(10, i));
    }

    printf("%d\n", oct);
}