#include "stdafx.h"

#define PUSH 'P'
#define POP 'O'

// 내 답안
int main()
{
	int input = 0, PushCount = 0, PopCount = 0;
	int numbers[31] = { 0 };
	std::stack<int> cross;
	std::vector<char> result;
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
		scanf("%d", &numbers[i]);
	}

	int index = 0;
	int currentflag = 1;
	while (true)
	{
		if (index >= input)
			break;
		// 우선 들어온 모든 기차들을 교차로에 집어 넣고 보자
		cross.push(numbers[index]);
		result.push_back(PUSH);
		PushCount++;
		index++;
		while (true)
		{
			if (cross.empty() != true)
			{
				if (cross.top() != currentflag)
					break;
				// 교차로 스택의 맨 위가 현재 B로 옮겨야 할 번호라면
				if (cross.top() == currentflag)
				{
					result.push_back(POP);
					cross.pop();
					currentflag++;
					PopCount++;
				}
			}
			else
				break;

		}

	}

	if (PushCount != PopCount)
		printf("impossible");
	else
	{
		for (int i = 0; i < result.size(); i++)
		{
			printf("%c", result[i]);
		}
	}

	return 0;
}

// 강의 답안
int main()
{
	std::stack<int> s;
	int i, j = 1, n, m;
	scanf("%d", &n);
	std::vector<int> a(n + 1);
	for (i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	std::vector<char> str;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		s.push(m);
		str.push_back('P');
		while (true)
		{
			if (s.empty())
				break;
			if (a[j] == s.top())
			{
				s.pop();
				j++;
				str.push_back('O');
			}
			else
				break;
		}
	}
	if (!s.empty())
		printf("impossible\n");
	else
	{
		for (i = 1; i <= str.size(); i++)
		{
			printf("%c", str[i]);
		}
	}
	return 0;
}