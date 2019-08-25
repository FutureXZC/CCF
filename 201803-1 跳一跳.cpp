/**
* 201803-1 ÌøÒ»Ìø 
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, count, sum = 0;
	bool first = true;
	while (cin >> n && n != 0) {
		if (n == 1) {
			count = 1;	
			sum += count;
		}
		else if (n == 0)
			break;
		else {
			if (first){
				count = 2;
				first = false;	
			}
			else if (count == 1)
				count = 2;
			else 
				count += 2;
			sum += count;
		}
	};
	cout << sum;
	return 0;
}
