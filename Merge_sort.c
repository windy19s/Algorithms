#include<stdio.h>

#define count 100

void Merge(int *A, int l, int m, int r){

    int L_size = m - l + 1;
    int R_size = r - m;
    int L[L_size];
    int R[R_size];
    int j, i, k, n;

    for(n = 0, i = l; i <= m; i++, n++)
        L[n] = A[i];

    for(n = 0, i = m +1; i <= r; i++, n++)
        R[n] = A[i];

    for(i = l, j = 0, k = 0; j < L_size && k < R_size; i++){
        if(L[j] < R[k])
            A[i] = L[j++];
        else
            A[i] = R[k++];
    }
    while(j < L_size)
        A[i++] = L[j++];
    while(k < R_size)
        A[i++] = R[k++];

}

void Merge_sort(int *A, int L, int R){

    if(L == R) return;

    int M = (L + R) / 2;

    Merge_sort(A, L, M);
    Merge_sort(A, M + 1, R);

    Merge(A, L, M, R);

}

int main(){

    int n;
    int Arr[count];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &Arr[i]);
    
    int L = 0; 
    int R = n - 1;
    int M = (L + R) / 2;

    Merge_sort(Arr, L, R);

    for(int i = 0; i < n; i++)
        printf("%d ", Arr[i]);
    printf("\n");
    return 0;
}