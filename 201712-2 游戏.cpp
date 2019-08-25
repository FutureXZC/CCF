/**
* 201712-2 сно╥ 
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, k, num = 1, i = 1, sum;
	cin >> n >> k;
	vector<bool> loop(n+1, true);
	sum = n;
	while(sum > 1) {
		if(num % k == 0 || num % 10 == k) {
			loop[i] = false;
			sum --;
		}
		bool change = false;
		for (int j = i + 1; j < n + 1; j++) {
			if (loop[j]) {
				i = j;
				change = true;
				break;			
			}
		}
		if (!change){
			for (int j = 1; j < n + 1; j++) {
				if (loop[j]) {
					i = j;
					break;
				}
			}
		}
		num ++;
	}
	cout << i;
	return 0;
}
