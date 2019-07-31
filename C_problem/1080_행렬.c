//문제 출처: https://www.acmicpc.net/problem/1080

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **A, **B;
	int N = 0, M = 0;
	scanf("%d %d", &N, &M);

	A = (int**)malloc(sizeof(int*) * N);
	B = (int**)malloc(sizeof(int*) * N);

	for (int i = 0; i < N; i++)
	{
		A[i] = (int*)malloc(sizeof(int) * M);
		B[i] = (int*)malloc(sizeof(int) * M);
	}

	for (int i = 0; i < N; i++)
	{
		free(A[i]);
		free(B[i]);
	}
	free(A);
	free(B);

	return 0;
}