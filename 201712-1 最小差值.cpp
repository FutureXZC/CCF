/**
* 201712-1 ×îĞ¡²îÖµ
*/

#include<iostream>
using namespace std;
int main(){
	int n, min = 10000, diff;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			diff = p[i] - p[j];
			if (i == j)
				continue;
			if (diff > 0 && diff < min)
				min = diff;
			else if (diff == 0) {
				min = diff;
				break;
			}				
		}
		if (diff == 0)
			break;
	}
	cout << min;
	return 0;
}
