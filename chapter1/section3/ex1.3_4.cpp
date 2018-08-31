#include <iostream>
using namespace std;

int main ()
{
	int i;
	float f;
	char s[30];

	cout << "整数,浮動小数点数,文字列を入力: ";
	cin >> i >> f >> s;
	cout << "入力: " << i << ' ' << f << ' ' << s << '\n';

	return 0;
}

