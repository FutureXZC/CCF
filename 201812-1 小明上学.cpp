/**
* 2018-1 С����ѧ 
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
//		ͨ����· 
		if (road[i][0] == 0)
			sum += road[i][1];
//		���������ȴ� 
		else if (road[i][0] == 1)
			sum += road[i][1];	
//		�����Ƶ���ȴ� 
		else if (road[i][0] == 2)
			sum += (road[i][1] + r);
//		�����̵�ֱ��ͨ�� 
	}
	cout << sum;
	return 0;	
}
