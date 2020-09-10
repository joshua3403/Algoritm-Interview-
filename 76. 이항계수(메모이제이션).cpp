#include "stdafx.h"

// �� ���
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

// ���� ���
// Ư�� �޺���̼� xCy�� x-1Cy-1 + x-1Cy�̴�.
// ������ ���� ���� ���� ���Ҵ� ���� �迭�� ������ ���� �ٽ� ����.
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