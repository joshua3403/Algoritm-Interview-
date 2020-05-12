
#include "stdafx.h"

// 나의 답
int main()
{
	int count = 0;
	std::vector<int> age_container;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int age;
		std::cin >> age;
		age_container.push_back(age);
	}

	std::sort(age_container.begin(), age_container.end());

	int min = age_container.front();
	int max = age_container.back();

	int result = max - min;

	std::cout << result;

	return 0;
}

// 정답
//int main()
//{
//	freopen("input.txt", "rt", stdin);
//	int count, age, min = 2147000000, max = -2147000000;
//
//	std::cin >> count;
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cin >> age;
//		if (age < min) min = age;
//		if (age > max) max = age;
//	}
//
//	std::cout << (max - min);
//	return 0;
//}