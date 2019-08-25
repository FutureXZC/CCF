/**
* 2018-1 小明上学 
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int r, y, g, n, k, t, sum = 0;
	vector< vector<int> > road;
	cin >> r >> y >> g;
	cin >> n;
	road.resize(n);
	for (int i = 0; i < n; i++){
		road[i].resize(2);
		cin >> road[i][0] >> road[i][1];
//		通过道路 
		if (road[i][0] == 0)
			sum += road[i][1];
//		遇到红灯需等待 
		else if (road[i][0] == 1)
			sum += road[i][1];	
//		遇到黄灯需等待 
		else if (road[i][0] == 2)
			sum += (road[i][1] + r);
//		遇到绿灯直接通过 
	}
	cout << sum;
	return 0;	
}
