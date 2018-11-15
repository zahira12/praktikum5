#include <iostream>

using namespace std;

int main()
{
	int a,b,c,hasil;

	cout << "masukkan bilangan a : ";
	cin >> a;
	cout << "masukkan bilangan b : ";
	cin >> b;
	cout << "masukkan bilangan c : ";
	cin >> c;

	if ((a+b==c) or (a+c==b) or (b+c==a))
		cout << "benar";
	else
		cout << "salah";

	return 0;
}
