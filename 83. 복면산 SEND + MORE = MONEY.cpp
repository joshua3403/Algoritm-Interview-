#include "stdafx.h"

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
std::map<char, int> backup;
char
int main()
{
	std::string a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	for (int i = 0; i < a.length(); i++)
	{
		if (backup.find(a[i]) == backup.end())
		{
			backup.insert(std::make_pair(a[i], -1));
		}
	}

	for (int i = 0; i < b.length(); i++)
	{
		if (backup.find(b[i]) == backup.end())
		{
			backup.insert(std::make_pair(b[i], -1));
		}
	}


	for (int i = 0; i < c.length(); i++)
	{
		if (backup.find(c[i]) == backup.end())
		{
			backup.insert(std::make_pair(c[i], -1));
		}
	}

	return 0;
}