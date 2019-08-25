#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, k, m, count = 0, sum = 0;
	cin >> n >> k;
	vector<int> a;
	for(int i = 0; i < n; i++){
		cin >> m;
		a.push_back(m);
	}
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(sum >= k){
			count ++;
			sum = 0;
		}
	}
	if(sum){
		count ++;	
	}
	cout << count;
	return 0;
}
