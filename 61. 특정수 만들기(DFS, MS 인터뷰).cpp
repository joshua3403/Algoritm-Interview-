#include "stdafx.h"

// 내 답안
int g_iSize;
int g_iTarget;
int g_iAnswer = 0;
std::vector<int> g_vInput;
std::vector <std::vector<int>> g_vCount;
int* g_aFlag;
void GetCount(int level)
{
	if (level == g_iSize)
	{
		std::vector<int> temp;
		for (int i = 0; i < g_iSize; i++)
		{
			if (g_aFlag[i] == 1)
			{
				temp.push_back(g_vInput[i]);
			}
		}
		if(!temp.empty())
			g_vCount.push_back(temp);
	}
	else
	{
		g_aFlag[level] = 1;
		GetCount(level + 1);
		g_aFlag[level] = 0;
		GetCount(level + 1);
	}
}

int* g_aFlag2;

void GetAnswer(int count,int level, int sum)
{
	if (level == g_vCount[count].size())
	{
		if (sum == g_iTarget)
			g_iAnswer++;
	}
	else
	{
		GetAnswer(count, level + 1, sum + g_vCount[count][level]);
		GetAnswer(count, level + 1, sum - g_vCount[count][level]);

	}
}

int main()
{
	scanf("%d %d", &g_iSize, &g_iTarget);
	g_aFlag = new int[g_iSize];
	g_aFlag2 = new int[g_iSize];
	for (int i = 0; i < g_iSize; i++)
	{
		int t;
		scanf("%d", &t);
		g_vInput.push_back(t);
	}

	GetCount(0);

	for (int i = 0; i < g_vCount.size(); i++)
	{
		GetAnswer(i, 0, 0);
	}

	if (g_iAnswer != 0)
	{
		printf("%d\n", g_iAnswer);
	}
	else
		printf("-1\n");

	delete[] g_aFlag;
	return 0;
}

// 강의 답안
// 2갈래로 DFS를 했다면
// 지금은 3갈래 (+, -, 사용안함)으로 갈래를 내려가자
int a[11], n, m, cnt = 0;

void DFS(int L, int val)
{
	if (L == n + 1)
	{
		if (val == m)
			cnt++;
	}
	else
	{
		DFS(L + 1, val + a[L]);
		DFS(L + 1, val - a[L]);
		DFS(L + 1, val);
	}
}


int main()
{
	int i;
	scanf("%d %d", &n, &m);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	DFS(1, 0);

	if (cnt == 0)
		printf("-1\n");
	else
		printf("%d\n", cnt);
	return 0;
}