//문제 출처: https://www.acmicpc.net/problem/1026

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A, *B;
    int S, i;
    int N = 0;
    scanf("%d",&N);

    A = (int*)malloc(sizeof(int) * N);
    B = (int*)malloc(sizeof(int) * N);

    for (i=0; i<N; i++)
        scanf("%d",&A[i]);
    
    for(i=0; i<N; i++)
        scanf("%d",&B[i]);
    
        

    free(A);
    free(B);

    return 0;
}