//문제 출처: https://www.acmicpc.net/problem/1080

#include <stdio.h>
#define MAX 50

int main()
{
	char A[MAX][MAX], B[MAX][MAX];
	int N = 0, M = 0, count = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%s", A[i]);

	for (int i = 0; i < N; i++)
		scanf("%s", B[i]);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			if (A[i][j] != B[i][j])
			{
				//뒤집기
			}
	}

	if (count >= 0)
		printf("%d\n", count);

	return 0;
}