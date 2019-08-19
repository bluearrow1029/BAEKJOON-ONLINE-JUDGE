// 문제 출처: https://www.acmicpc.net/problem/1037

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m = 0;
	int temp = 0, i = 0, j = 0;

	scanf("%d", &m);
	int * a = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);

	// 입력된 값 오름차순 버블정렬
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m - 1; j++)
		{	
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	// 가장 작은값, 가장 큰 값의 곱이 구해야하는 N값
	printf("%d", a[0] * a[j]);
	
	free(a);
	return 0;
}