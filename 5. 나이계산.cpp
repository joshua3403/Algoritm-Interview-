#include "stdafx.h"

//// 내 답안
//int main()
//{
//	char input[15] = { '\0' };
//	std::cin >> input;
//	char year[2] = { '\0' };
//	int yearInt = 0;
//	char flag[1] = { '\0' };
//	int flagInt = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		year[i] = input[i];
//	}
//	flag[0] = input[7];
//
//	char sex = 0;
//	int result = 0;
//
//	yearInt = atoi(year);
//	flagInt = atoi(flag);
//
//	switch (flagInt)
//	{
//	case 1:
//		result = 2020 - (1900 + yearInt);
//		sex = 'M';
//		break;
//	case 2:
//		result = 2020 - (1900 + yearInt);
//		sex = 'W';
//		break;
//	case 3:
//		result = 2020 - (2000 + yearInt);
//		sex = 'M';
//		break;
//	case 4:
//		result = 2020 - (2000 + yearInt);
//		sex = 'W';
//		break;
//	}
//
//	std::cout << result << " " << sex;
//
//	return 0;
//}

// 선생님 답안
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[20];
	int year, age;
	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2')
		year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else
		year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if (a[7] == '1' || a[7] == '3')
		printf("M\n");
	else
		printf("W\n");

	// 아스키 문자 'A'~'Z' = 65 ~ 90
		// 'a'~'z' = 97 ~ 120
		// '0'~'9' = 48 ~ 57

	return 0;
}