#include "stdafx.h"

// 내 답안
int main()
{
	std::stack<char> s;
	char input[31] = { '\0' };
	scanf("%s", &input);
	int i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '(')
			s.push(input[i]);

		if (input[i] == ')')
		{
			if (s.empty())
			{
				printf("NO\n");
				return 0;
			}
			else
			{
				s.pop();
			}
		}
		i++;
	}
	if(s.empty())
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}

// 강의 답안
int main()
{
	std::stack<char> s;
	char a[31] = { '\0' };
	int i, flag = 0;
	scanf("%d", &a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
			s.push(a[i]);
		else
		{
			if (s.empty())
			{
				printf("NO\n");
				flag = 0;
				break;
			}
			else
			{
				s.pop();
			}
		}
	}
	if (s.empty() && flag == 1)
		printf("YES\n");
	else if(flag == 1 && !s.empty())
		printf("NO\n");

	return 0;
}