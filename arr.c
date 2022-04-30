#include<stdio.h>
#include"swap.h"

int main() {

    int a = 4;
    int b = 5;

//    int sum = add(a,b);
    swap(&a, &b);


    printf("%d\n", a);
    
    return 0;



}