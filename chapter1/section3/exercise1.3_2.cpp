#include <iostream>
using namespace std;

int main ()
{
    float feet, inch;

    cout << "feetをinchに変換します(0入力で終了)\n";

    while (1) {
        cin >> feet;
        if (feet == 0) break;
        inch = feet * 12.0;
        cout << inch << "インチ\n";
    }

    return 0;
}
