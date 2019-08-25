/**
* 201312-1 出现次数最多的数
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, k, min[2] = {10001, 0};
	cin >> n;
	int a[10001] = {0}, *b = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		a[b[i]] ++;
	}
	for (int i = 0; i < n; i++) {
		if (a[b[i]] > min[1]) {
			min[1] = a[b[i]];
			min[0] = b[i];
		} else if (a[b[i]] == min[1] && b[i] < min[0]) {
			min[0] = b[i];
		}
	}
	cout << min[0];
	return 0;
}
