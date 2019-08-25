#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, p, q;
	cin >> n >> m;
	vector<int> s;
	vector<int>::iterator iter;
	for (int i = 0; i < n; i++){
		s.push_back(i+1);
	}
	for (int i = 0; i < m; i++){
		cin >> p >> q;
		iter = find(s.begin(), s.end(), p);
		int index = iter - s.begin();
		s.erase(s.begin() + index, s.begin() + index + 1);
		s.insert(s.begin() + index + q, p);
	}
	for (int i = 0; i < n; i++){
		cout << s[i] << " ";
	}
	return 0;
} 
