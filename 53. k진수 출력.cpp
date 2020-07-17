#include "stdafx.h"

// 내 답안
int main()
{
	int count = 0, binary = 0;
	std::stack<char> temp;

	scanf("%d %d", &count, &binary);

	while (true)
	{
		if (count <= 0)
			break;

		if (binary != 16)
		{
			char balance = count % binary;
			temp.push(balance);
			count /= binary;
		}
		else
		{
			char balance = count % binary;
			if (balance == 10)
			{
				temp.push('A');
			}
			else if (balance == 11)
			{
				temp.push('B');
			}
			else if (balance == 12)
				temp.push('C');
			else if (balance == 13)
				temp.push('D');
			else if (balance == 14)
				temp.push('E');
			else if (balance == 15)
				temp.push('F');
			else
				temp.push(balance);

			count /= binary;
		}
	}

	while (temp.size() != 0)
	{
		char result = temp.top();
		if (result >= 65)
			printf("%c", result);
		else
			printf("%d", result);
		temp.pop();
	}

	return 0;
}

// 강의 답안
int stack[100], top = -1;

void push(int x)
{
	stack[++top] = x;
}

int pop()
{
	return stack[top--];
}

int main()
{
	int n, k;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	while (n >= 0)
	{
		push(n % k);
		n = n / k;
	}

	while (top != -1)
	{
		printf("%c", str[pop()]);
	}
	return 0;
}