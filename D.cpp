#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <climits>

using namespace std;

int sum(int n, int i)
{
	if (i == n) cout << i;
	else {
		int m = n;
		while (m > i && i < n)
		{
			m -= i;
			cout << i << " ";
		}
		if (m > 0) cout << m;
		cout << endl;
		sum(n, i + 1);
		return 0;
	}
}

int main()
{
	int n, i = 1;
	cin >> n;
	sum(n, i);
}