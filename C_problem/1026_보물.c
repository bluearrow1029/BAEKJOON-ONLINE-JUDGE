//문제 출처: https://www.acmicpc.net/problem/1026

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *A, *B;
	int N = 0, S = 0, i = 0, temp = 0;
	scanf("%d", &N);

	A = (int*)malloc(sizeof(int) * N);
	B = (int*)malloc(sizeof(int) * N);

	for (i = 0; i<N; i++)
		scanf("%d", &A[i]);

	for (i = 0; i<N; i++)
		scanf("%d", &B[i]);
	
	// A는 오름차순 정렬
	for (i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-1-i; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	// B는 내림차순 정렬
	for (i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (B[j] < B[j + 1])
			{
				temp = B[j];
				B[j] = B[j + 1];
				B[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
		S = S + (A[i] * B[i]);

	printf("%d\n", S);

	free(A);
	free(B);

	return 0;
}