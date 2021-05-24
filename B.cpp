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
	int count = 0, bc = 0;
	for (int i = 2; i < a; i += 2) if (a % i == 0) {
		count++;
		if (count == 3) {
		cout << a << endl;
		bc++;
	}
		else if (count > 3) break;
	}
	
	return bc;
}
int main()
{
	int a, b, bc = 0;
	cin >> a >> b;
	for (a; a <= b; a++) bc += two(a);
	if (bc == 0) cout << 0;
}