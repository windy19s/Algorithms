#include<stdio.h>

#define count 100



void Insertsort(int *p, int n){
    
    for(int i = 1; i < n; i++){
        int key = p[i];
        int j = i;
        while(j > 0 && p[j - 1] > key){
            p[j] = p[j - 1];
            j--;
        }
        p[j] = key;
    }
}
int main(){

    int Arr[count];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &Arr[i]);

    Insertsort(Arr, n);
    
    for(int i = 0; i < n; i++)
        printf("%d ", Arr[i]);
    printf("\n");

    return 0;
}