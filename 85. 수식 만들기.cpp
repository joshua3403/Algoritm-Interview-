#include "stdafx.h"

int expressions[4];
std::vector<int> numbers;
int max = 0, min = 2147000000;
int count;

void GetAnswer(int L,int result)
{
	if (count  == L)
	{
		return;
	}
	else
	{

			for (int i = 0; i < 4; i++)
			{
				int temp = result;
				if (expressions[i] != 0)
				{
					expressions[i]--;
					switch (i)
					{
					case 0:
						temp += numbers[L + 1];
						break;
					case 1:
						temp -= numbers[L + 1];
						break;
					case 2:
						temp *= numbers[L + 1];
						break;
					case 3:
						temp /= numbers[L + 1];
						break;
					default:
						break;
					}

					if (L == count - 1)
					{
						if (temp > max)
							max = temp;
						if (temp < min)
							min = temp;
					}

					GetAnswer(L + 1, temp);
					expressions[i]++;

				}
			}		

	}
}

int main()
{
	scanf("%d", &count);
	numbers.push_back(0);
	for (int i = 0; i < count; i++)
	{
		int x;
		scanf("%d", &x);
		numbers.push_back(x);
	}
	for (int i = 0; i < 4; i++)
	{
		int x;
		scanf("%d", &x);
		expressions[i] = x;
	}

	GetAnswer(1, numbers[1]);

	printf("%d\n%d", max, min);

}