#include "stdafx.h"

struct st_TEST
{
	int test;

};

struct st_Compare
{
	bool operator()(const st_TEST& lhs, const st_TEST& rhs)
	{
		return lhs.test > rhs.test;
	}
};

// ³» ´ä¾È
std::priority_queue<st_TEST, std::vector<st_TEST>, st_Compare> Q;

int main()
{
	while (true)
	{
		int input;
		st_TEST output;
		scanf("%d", &input);
		st_TEST test;
		test.test = input;
		switch (input)
		{
		case 0:
			if (Q.empty())
			{
				printf("-1\n");
			}
			else
			{
				output = Q.top();
				Q.pop();
				printf("%d\n", output.test);
			}
			break;

		case -1:
			return 0;
			break;

		default:
			Q.push(test);
			break;
		}
	}

	return 0;
}