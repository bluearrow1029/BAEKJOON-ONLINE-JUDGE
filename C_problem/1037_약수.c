// 문제 출처: https://www.acmicpc.net/problem/1037

#include <stdio.h>

int main()
{
	int N = 0, m = 0, temp = 0;
	int * a;

	scanf("%d", &m);
	a = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);

	// 입력된 값들을 오름차순으로 정렬
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	// 맨앞값과 맨뒷값으로 원본값을 구할 것

	return 0;
}