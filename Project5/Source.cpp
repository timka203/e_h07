#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <time.h>
using namespace std;

void task1()
{
	string s = "one two three";
	string word;
	istringstream str(s);
	while (str >> word)
	{
		cout << word << endl;
	}
	system("pause");
}
int my_atoi(string s)
{
	int res = 0;
	int n = s.length();
	for (int i = 0; i < n; i++)
	{
		res *= 10;
		res += s[i] - '0';
	}
	return res;
}
int task2()
{
	char str[10];
	cin.get(str, 10);
	cout << my_atoi(str) * 2 << endl;
	system("pause");
}
int alf(char s)
{
	int j = 0;
	for (int i = 'a'; i <= 'z'; i++)
	{
		j++;
		if (s == i)

			return j;
	}
}
int task3()
{
	int gl = 0, i, j;
	char gls[] = "aeiouy";
	char str[100];
	cin >> str;
	for (i = 0; i < (strlen(str)); i++)
	{
		for (j = 0; j < strlen(gls); j++)
		{
			if (str[i] == gls[j])
			{
				cout << alf(str[i]) << " " << endl;
			}
		}
	}
	system("pause");
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{

		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}