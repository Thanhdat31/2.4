#include<iostream>
using namespace std;
int Tong(int n)
{
	if (n == 0)
		return 0;
	return (n - 2) + n;
}
int main()
{
	int n;
	do {
		cout << "nhap n = ";
		cin >> n;

	} while (n % 2 != 1);
	int s = Tong(n);
		cout << "tong so le la :" << s << endl;
	return 0;
}