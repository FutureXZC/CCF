#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> keys(n+1);
	vector< vector<int> > teacher(k);
	for (int i = 1; i < n + 1; i++)
		keys[i] = i;
	for (int i = 0; i < k; i++){
		teacher[i].resize(3);
		for (int j = 0; j < 3; j++)
			cin >> teacher[i][j];
	}
	
	return 0;
}
