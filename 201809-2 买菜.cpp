/**
* 201809-2 买菜
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, sum = 0;
	vector< vector<int> > time_h;
	vector< vector<int> > time_w;
	cin >> n;
	time_h.resize(n);
	time_w.resize(n);
	for (int i = 0; i < n; i++) {
		time_h[i].resize(2);
		time_w[i].resize(2);
	}
	for (int i = 0; i < n; i++)
		cin >> time_h[i][0] >> time_h[i][1];
	for (int i = 0; i < n; i++)
		cin >> time_w[i][0] >> time_w[i][1];
	for (int i = 0, j = 0; i < n && j < n;) {
//		H < W 且无交叉 ,H++
		if (time_h[i][1] <= time_w[j][0]){
			i ++;	
		}
//		H > W 且无交叉，W++ 
		else if	(time_h[i][0] >= time_w[j][1]) {
			j ++;
		}
//		H < W 且有交叉
		else if (time_h[i][0] < time_w[j][0] && time_h[i][1] > time_w[j][0]
				 && time_h[i][1] < time_w[j][1]) {
			sum += 	(time_h[i][1] - time_w[j][0]);
			i ++;
		}
//		W < H 且有交叉		
		else if (time_w[j][0] < time_h[i][0] && time_w[j][1] > time_h[i][0]
				&& time_w[j][1] < time_h[i][1]) {
			sum += 	(time_w[j][1] - time_h[i][0]);
			j ++;
		}
//		W包含H
		else if (time_w[j][0] <= time_h[i][0] && time_w[j][1] >= time_h[i][1]) {
			sum += (time_h[i][1] - time_h[i][0]);
			i ++;
		}
//		H包含W
		else if (time_w[j][0] >= time_h[i][0] && time_w[j][1] <= time_h[i][1]) {
			sum += (time_w[j][1] - time_w[j][0]);
			j ++;
		}  
	}
	cout << sum;
	return 0;
} 
