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

int two(int a)
{
	vector <int> A;
	while (a > 0)
	{
		A.push_back(a % 2);
		a /= 2;
	}
	return A[0];
}

int sum(int a)
{
	vector <int> A;
	int r = 0, count = 0;
	while (a > 0)
	{
		A.push_back(a % 2);
		a /= 2;
		r++;
	}
	for (int i = 0; i < r; i++) if (A[i] == 1) count++;
	return count;
}

int main()
{
	int a, b, count = 0;
	cin >> a >> b;
	if (a > 0)
	{
		int max = 0;
		for (a; a <= b; a++) if (two(a) == 0 && sum(a) == 5 && a % 10 != 0)
		{
			count++;
			if (a >= max) max = a;
		}
		cout << count << " " << max;
	}
	else {
		a = abs(a);
		b = abs(b);
		int max = INT_MAX;
		for (a; a >= b; a--) if (two(a) == 0 && sum(a) == 5 && a % 10 != 0)
		{
			count++;
			if (a <= max) max = a;
		}
		cout << count << " " << max;
	}
}
//first commit
