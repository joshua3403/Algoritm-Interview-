#include "stdafx.h"
int check[21], costInput[21], date[21];
int day, max = 0;

//// 내 답안
//void DFS(int due, int cost)
//{
//	if (due >= day + 1)
//		return;
//
//	for (int i = due; i <= day; i++)
//	{
//		if (check[i] == 0)
//		{
//			check[i] = 1;
//			if (due + date[i] > day + 1)
//				continue;
//			if (cost + costInput[due] > max)
//			{
//				max = cost + costInput[due];
//			}
//
//			DFS(i + date[i], cost + costInput[i]);
//			check[i] = 0;
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &day);
//
//	for (int i = 1; i <= day; i++)
//	{
//		int dueday, cost;
//		scanf("%d %d", &dueday, &cost);
//		costInput[i] = cost;
//		date[i] = dueday;
//	}
//
//	DFS(1, 0);
//	
//	printf("%d", max);
//
//	return 0;
//}

// 강의 답안
void GetAnswer(int due, int cost)
{
	if (due == day + 1)
	{
		if (cost > max)
		{
			max = cost;
		}
	}
	else
	{
		if (due + date[due] <= day + 1)
			GetAnswer(due + date[due], cost + costInput[due]);
		GetAnswer(due + 1, cost);
	}
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin >> day;

	for (int i = 1; i <= day; i++)
	{
		int dueday, cost;
		std::cin >> dueday >> cost;
		costInput[i] = cost;
		date[i] = dueday;
	}

	GetAnswer(1, 0);
	
	std::cout << max;
	return 0;
}