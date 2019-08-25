#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++){
		cin >> m;
		a.push_back(m);
	}
	sort(a.begin(), a.end());
	int k = n / 2, t = n / 2, p = 0, q = 0;
	int temp = a[k];
	for(;temp == a[k-1];k--)
		p++;
	for(;temp == a[t+1]; t++)
		q++;
	if((n - p - q - 1) % 2 == 0)
		cout << temp;
	else
		cout << -1;
	return 0;
}
