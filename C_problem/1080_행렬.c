//문제 출처: https://www.acmicpc.net/problem/1080

#include <stdio.h>
#define MAX 50

int main()
{
	char A[MAX][MAX], B[MAX][MAX];
	int N = 0, M = 0, count = 0;
	scanf("%d %d", &N, &M);
	
	// A,B 입력
	for (int i = 0; i < N; i++)
		scanf("%s", A[i]);

	for (int i = 0; i < N; i++)
		scanf("%s", B[i]);

	// 동일여부 검사
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			// A,B 행렬 원소 값이 다를 경우
			if (A[i][j] != B[i][j])
			{
				// 행렬 최대 크기 벗어난 경우
				if (i + 3 > N || j + 3 > M)
				{
					printf("-1\n");
					return 0;
				}
				// 원소값이 다른 부분부터 3*3 크기의 행렬 변환
				for (int k = i; k < i + 3; k++)
				{
					for (int l = j; l < j + 3; l++)
					{
						if (A[k][l] == '0')
							A[k][l] = '1';
						else
							A[k][l] = '0';
					}
				}
				count++;
			}
		}
	}

	// 결과 출력
	printf("%d\n", count);
	
	return 0;
}