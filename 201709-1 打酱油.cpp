#include<iostream>
using namespace std;

int main(){
	int n, count = 0;
	cin >> n;
	count += n / 10;
	if (n >= 50){
		int k = (n / 50) * 2;
		n = n % 50;
		count += k;
	}
	if (n >= 30){
		count += 1;
	}
	cout << count;
	return 0;
}
