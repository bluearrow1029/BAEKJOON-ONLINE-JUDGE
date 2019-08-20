// 문제 출처: https://www.acmicpc.net/problem/1085

#include <stdio.h>

int main()
{
	int x = 0, y = 0, w = 0, h = 0;
	int result = 0;

	// 1 <= w,h <= 1000
	// 1 <= x <= w-1	1 <= y <= h-1
	scanf("%d %d %d %d", &x, &y, &w, &h);

	// 직사각형의 경계선까지 가는 거리의 최솟값
	printf("%d", result);
	return 0;
}