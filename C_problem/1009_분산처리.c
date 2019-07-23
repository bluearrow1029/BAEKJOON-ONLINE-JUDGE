//문제 출처: https://www.acmicpc.net/problem/1009
#include <stdio.h>

int main()
{
	int T, A, B, base = 0;
	scanf("%d", &T);

	for (; T>0; T--)
	{
		scanf("%d %d", &A, &B);

		base = A;

		for (; B-1>0; B--)
			A = base * A % 10;

		if (A == 0)
			printf("10\n");
		else
			printf("%d\n", A);
	}
	return 0;
}