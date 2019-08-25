/**
* 201809-2 ���
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
//		H < W ���޽��� ,H++
		if (time_h[i][1] <= time_w[j][0]){
			i ++;	
		}
//		H > W ���޽��棬W++ 
		else if	(time_h[i][0] >= time_w[j][1]) {
			j ++;
		}
//		H < W ���н���
		else if (time_h[i][0] < time_w[j][0] && time_h[i][1] > time_w[j][0]
				 && time_h[i][1] < time_w[j][1]) {
			sum += 	(time_h[i][1] - time_w[j][0]);
			i ++;
		}
//		W < H ���н���		
		else if (time_w[j][0] < time_h[i][0] && time_w[j][1] > time_h[i][0]
				&& time_w[j][1] < time_h[i][1]) {
			sum += 	(time_w[j][1] - time_h[i][0]);
			j ++;
		}
//		W����H
		else if (time_w[j][0] <= time_h[i][0] && time_w[j][1] >= time_h[i][1]) {
			sum += (time_h[i][1] - time_h[i][0]);
			i ++;
		}
//		H����W
		else if (time_w[j][0] >= time_h[i][0] && time_w[j][1] <= time_h[i][1]) {
			sum += (time_w[j][1] - time_w[j][0]);
			j ++;
		}  
	}
	cout << sum;
	return 0;
} 
