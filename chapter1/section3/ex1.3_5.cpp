 #include <iostream>
using namespace std;

int main ()
{
	char ch;
	
	cout  << "キーを入力してください．xで停止します\n";
	do {
		cout << ": ";
		cin >> ch;
	} while (ch != 'x');

	return 0;
}
