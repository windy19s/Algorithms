#include<stdio.h>

void swap(int *a, int *b){

    int *temp = a;
    a = b;
    b = temp;
    printf("%d\n", *a);
}
//int add(int a, int b){
    
//    a = a + b;
//    return a;
//}