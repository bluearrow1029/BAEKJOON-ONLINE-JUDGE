//문제 출처: https://www.acmicpc.net/problem/1080

#include <stdio.h>

int main()
{
	char A[50][50], B[50][50];
	int N = 0, M = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%s", A[i]);

	for (int i = 0; i < N; i++)
		scanf("%s", B[i]);

	return 0;
}