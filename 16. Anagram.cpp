#include "stdafx.h"

// 내 답안
int main()
{
	char input1[101] = { '\0' };
	char input2[101] = { '\0' };

	char alphabet[130] = { '\0' };
	scanf("%s", &input1);
	scanf("%s", &input2);

	
	int len1 = strlen(input1);
	int len2 = strlen(input2);


	for (int i = 0; i < len1; i++)
	{
		alphabet[input1[i]]++;
		alphabet[input2[i]]++;
	}

	for (int i = 65; i < 130; i++)
	{
		if (!(alphabet[i] % 2 == 0))
		{
			printf("NO");
			return 0;
		}

	}

	printf("YES");
	return 0;
}

// 강의 답안
// 대문자 알파벳은 ascii 65 ~ 90
// 소문자 알파벳은 ascii 97 ~ 122
int a[60], b[60];

int main()
{
	char str[101];
	int i;
	scanf("%s", &str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			a[str[i] - 64]++;
		}
		else
		{
			a[str[i] - 70]++;
		}
	}
	scanf("%s", &str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			b[str[i] - 64]++;
		}
		else
		{
			b[str[i] - 70]++;
		}
	}

	for (int i = 0; i < 60; i++)
	{
		if ((a[i] != b[i]))
		{
			printf("NO");
			return 0;
		}
	}

	printf("YES");
	return 0;
}