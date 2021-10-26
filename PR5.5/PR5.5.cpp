#include <iostream>
#include <cmath>

using namespace std;

double nsd(int n, int m)
{
	if (m == 0)
		return n;
	else
		return nsd(m, n % m);
}
int main()
{
	int n, m;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	cout << "nsd = " << nsd(n, m) << endl;
	return 0;
}
