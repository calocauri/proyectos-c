#include<stdio.h>

int num = 7;
int* num_adress = &num; 

float num2 = 1.7;
float *num2_adress = &num2;

int main()
{
    printf("num: %d\n", num);
    printf("num adress: %d\n", &num);
    printf("num adress size: %d\n", sizeof(&num));
    
    printf("num2: %f\n", num2);
    printf("num2 adress: %d\n", &num2);
    printf("num2 adress size: %d\n", sizeof(&num2));

    int x = 3;
    int y = 7;

    printf("x:%d y:%d\n", x, y);
    suma_valor(x,y);
    printf("x:%d y:%d\n", x, y);
    suma_referencia(&x,&y);
    printf("x:%d y:%d\n", x, y);


    return 0;
}

void suma_valor(int a, int b){
    a += b;
}

void suma_referencia(int *a, int *b){
    *a += *b;
}