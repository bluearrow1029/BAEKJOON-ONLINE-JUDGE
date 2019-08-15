//문제 출처: https://www.acmicpc.net/problem/1037

#include <stdio.h>

int main()
{
	int N = 0, m = 0;
	int * a;

	scanf("%d", &m);
	a = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < m; i++)
		printf("%d", a[i]);

	return 0;
}