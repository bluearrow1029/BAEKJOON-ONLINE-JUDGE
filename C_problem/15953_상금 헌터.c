//문제 출처: https://www.acmicpc.net/problem/15953

#include <stdio.h>

int main()
{
	// 0<=a<=100     1/2~3/4~6/7~10/11~15/16~21
	// 0<=b<=64      1/2~3/4~7/8~15/16~31

	int T = 0;
	scanf("%d", &T);

	for (; T>0; T--)
	{
		int a, b, PRIZE = 0;
		scanf("%d %d", &a, &b);

		if (a == 1)
			PRIZE += 500;
		else if (a >= 2 && a <= 3)
			PRIZE += 300;
		else if (a >= 4 && a <= 6)
			PRIZE += 200;
		else if (a >= 7 && a <= 10)
			PRIZE += 50;
		else if (a >= 11 && a <= 15)
			PRIZE += 30;
		else if (a >= 16 && a <= 21)
			PRIZE += 10;

		if (b == 1)
			PRIZE += 512;
		else if (b >= 2 && b <= 3)
			PRIZE += 256;
		else if (b >= 4 && b <= 7)
			PRIZE += 128;
		else if (b >= 8 && b <= 15)
			PRIZE += 64;
		else if (b >= 16 && b <= 31)
			PRIZE += 32;

		if (PRIZE == 0)
			printf("0\n");
		else
			printf("%d0000\n", PRIZE);
	}
	return 0;
}