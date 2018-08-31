#include <iostream>
using namespace std;

int main ()
{
	int payment_by_hour, total_time, payment;

	cout << "時給を入力してください: ";
	cin >> payment_by_hour;
	cout << "労働時間を入力してください: ";
	cin >> total_time;

	payment = payment_by_hour * total_time;
	cout << "賃金は " << payment << " 円です\n";

	return 0;
}
