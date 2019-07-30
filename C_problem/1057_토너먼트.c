//문제 출처: https://www.acmicpc.net/problem/1057

#include <stdio.h>

int main()
{
	int N = 0, A = 0, B = 0, round = 0;
	scanf("%d %d %d", &N, &A, &B);

    // N보다 큰 값 입력 방지
	while(A > N || B > N)
		scanf("%d %d %d", &N, &A, &B);
    
	while (A != B)
	{
		A = (A + 1) / 2;
		B = (B + 1) / 2;
		round += 1;
	}
	printf("%d\n", round);

	return 0;
}