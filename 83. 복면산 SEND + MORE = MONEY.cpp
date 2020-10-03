#include "stdafx.h"

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
std::map<char, int> backup;
std::map<char, bool> check;
int numbers[10];
std::string a, b, c;


int GetA()
{
	int t = 0;
	for (int i = a.size() - 1; i >= 0; --i)
	{
		t += (*backup.find(a[i])).second * pow(10, a.size() - 1 - i);
	}
	return t;
}

int GetB()
{
	int t = 0;
	for (int i = b.size() - 1; i >= 0; --i)
	{
		t += (*backup.find(b[i])).second * pow(10, b.size() - 1 - i);
	}
	return t;
}

int GetC()
{
	int t = 0;
	for (int i = c.size() - 1; i >= 0; --i)
	{
		t += (*backup.find(c[i])).second * pow(10, c.size() - 1 - i);
	}
	return t;
}

void DFS(int t)
{
	if (t == backup.size())
	{
		if (GetA() + GetB() == GetC())
		{
			if ((*backup.find(a[0])).second == 0 || (*backup.find(b[0])).second == 0 || (*backup.find(c[0])).second == 0)
				return;

			printf("Find\n");
		}
	}
	else
	{

		for (std::map<char, int>::iterator itor = backup.begin(); itor != backup.end(); itor++)
		{
			if (check[(*itor).first] == false)
			{
				check[(*itor).first] = true;
				for (int i = 0; i < 10; i++)
				{
					if (numbers[i] == 0)
					{
						numbers[i] = 1;
						(*itor).second = i;
						DFS(t + 1);
						numbers[i] = 0;
					}

				}
				check[(*itor).first] = false;

			}

		}
	}
}
int main()
{
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	for (int i = 0; i < a.length(); i++)
	{
		if (backup.find(a[i]) == backup.end())
		{
			backup.insert(std::make_pair(a[i], -1));
			check.insert(std::make_pair(a[i], false));
		}
	}

	for (int i = 0; i < b.length(); i++)
	{
		if (backup.find(b[i]) == backup.end())
		{
			backup.insert(std::make_pair(b[i], -1));
			check.insert(std::make_pair(b[i], false));
		}
	}


	for (int i = 0; i < c.length(); i++)
	{
		if (backup.find(c[i]) == backup.end())
		{
			backup.insert(std::make_pair(c[i], -1));
			check.insert(std::make_pair(c[i], false));
		}
	}


	DFS(0);
	return 0;
}