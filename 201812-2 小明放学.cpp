/**
* 2018-2 小明放学 
*/
#include<iostream>
using namespace std;
int main()
{
	long long light[3], n, k, t, sum = 0;
	cin >> light[0] >> light[2] >> light[1];//r, y, g
	cin >> n;
	long long loop = light[0] + light[1] + light[2];
	for (long long i = 0; i < n; i++){
		long long a, b;
		cin >> a >> b;
		if (a == 0)
			sum += b;
		else {
			long long sum_tmp = sum;
			if (a == 1)
				a = 0;
			else if (a == 3)
				a = 1;
			if (sum_tmp + light[a] - b > 0)
				sum_tmp = sum_tmp + light[a] - b;
			sum_tmp = (sum_tmp % loop);
			while(sum_tmp - light[a] > 0){
				sum_tmp -= light[a];
				a = (a + 1) % 3;
			};
			if (a == 0)
				sum += (light[0] - sum_tmp);
			else if (a == 2)
				sum += (light[2] - sum_tmp + light[0]);
		}
	}
	cout << sum;
	return 0;
}
