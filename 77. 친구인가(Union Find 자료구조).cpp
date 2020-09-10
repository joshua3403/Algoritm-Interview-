#include "stdafx.h"


//std::vector<int> g_Vec[1001];
//int Check[1001];
//bool isFind = false;
//int start, end;
//
//void GetAnswer(int x)
//{
//	if (x == end)
//	{
//		isFind = true;
//		return;
//	}
//	else
//	{
//		for (int i = 0; i < g_Vec[x].size(); i++)
//		{
//			if (Check[g_Vec[x][i]] == 0)
//			{
//				Check[g_Vec[x][i]] = 1;
//				GetAnswer(g_Vec[x][i]);
//				Check[g_Vec[x][i]] = 0;
//			}
//		}
//	}
//}
//// �� ���
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		g_Vec[x].push_back(y);
//		g_Vec[y].push_back(x);
//	}
//	scanf("%d %d", &start, &end);
//	Check[start] = 1;
//	GetAnswer(start);
//	if (isFind)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//  ���� ���
// Disjoint - set : ���μ� ����
// Ʈ�� ���·� ���� but �������� �򸮴� ���´� �ſ� ��ȿ�� ��.
// Ʈ���� ��������. ���� 1�� ����
int uni[1001];

int Find(int v)
{
	if (v == uni[v])
		return v;
	else
		return uni[v] = Find(uni[v]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a != b)
		uni[a] = b;
}

int main()
{
	int n, m, a, b;
	std::cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		uni[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		std::cin >> a >> b;
		Union(a, b);
	}

	std::cin >> a >> b;
	a = Find(a);
	b = Find(b);
	if (a == b)
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}