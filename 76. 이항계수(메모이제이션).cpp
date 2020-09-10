#include "stdafx.h"

// 내 답안
__int64 Fac(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return Fac(x - 1) * x;
	}
}

int main()
{
	int n, r;
	__int64 answer = 0;
	scanf("%d %d", &n, &r);
	answer = Fac(n) / (Fac(r) * Fac(n - r));
	printf("%lld", answer);
	return 0;
}

// 강의 답안
// 특정 콤비네이션 xCy는 x-1Cy-1 + x-1Cy이다.
// 가지를 뻗지 말고 구해 놓았던 값을 배열에 저장해 놓고 다시 쓰자.
int dy[21][21];
int DFS(int n, int r)
{
	if (dy[n][r] > 0)
		return dy[n][r];
	if (n == 1 || r == 0)
		return 1;
	else
	{
		return dy[n][r] = DFS(n - 1, r - 1) + DFS(n-1,r);
	}
}

int main()
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", DFS(n, r));
}