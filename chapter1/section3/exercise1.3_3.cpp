 #include <iostream>
using namespace std;

int gcd (int a, int b) 
{
    if (!b) return a;
    return gcd(b, a%b);
}

int main ()
{
    int a, b, c;

    cout << "整数を2つ入力: ";
    cin >> a >> b;
    c = gcd(a,b);
    cout << "最大公約数は " << c << " です\n";

    return 0;
}

