#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[100];
	cin >> str;
	int len = strlen(str);
	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	cout << str;
	return 0;
}
/*
12
21

322
223
*/