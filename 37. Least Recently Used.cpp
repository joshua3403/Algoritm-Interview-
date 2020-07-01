#include "stdafx.h"

// 내 답안

std::list<int> g_cache;
int g_cacheUsingSize = 0;
int cacheSize = 0;
int workCount = 0;

bool isHit(int work)
{
	bool flag = false;
	for (std::list<int>::iterator itor = g_cache.begin(); itor != g_cache.end(); itor++)
	{
		if (*itor == work)
		{
			flag = true;
			break;
		}
	}

	return flag;
}

void InsertMiss(int work)
{
	if (g_cacheUsingSize >= cacheSize)
	{
		g_cache.pop_back();
		g_cacheUsingSize--;
	}
	g_cache.push_front(work);


	g_cacheUsingSize++;
}

void InsertHit(int work)
{
	for (std::list<int>::iterator itor = g_cache.begin(); itor != g_cache.end();)
	{
		if (*itor == work)
		{
			itor = g_cache.erase(itor);
			g_cacheUsingSize--;
			break;
		}
		else
			itor++;
	}
	g_cacheUsingSize++;
	g_cache.push_front(work);
}

int main()
{

	scanf("%d %d", &cacheSize, &workCount);
	for (int i = 0; i < workCount; i++)
	{
		int work = 0;
		scanf("%d", &work);
		if (isHit(work))
		{
			InsertHit(work);
		}
		else
			InsertMiss(work);
	}

	for (std::list<int>::iterator itor = g_cache.begin(); itor != g_cache.end(); itor++)
	{
		printf("%d ", *itor);
	}

	return 0;
}

// 강의 답안
int C[20];
int main()
{
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		pos = -1;
		for (j = 0; j < s; j++)
			if (C[j] == a)
				pos = j;
		if (pos == -1)
		{
			for (j = s - 1; j >= 1; j--)
				C[j] = C[j - 1];
		}
		else
		{
			for (j = pos; j >= 1; j--)
				C[j] = C[j - 1];
		}
		C[0] = a;
	}

	for (i = 0; i < s; i++)
		printf("%d", C[i]);
	return 0;
}