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

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	string s;
	int len = 1, lenmax = 0, imax;
	getline(fin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (int(s[i]) == int(s[i + 1])) {
			len++;
			
		}
		if (len > lenmax) {
			lenmax = len;
			imax = i;
		}
	}
	cout << s[imax] << " " << lenmax;
}