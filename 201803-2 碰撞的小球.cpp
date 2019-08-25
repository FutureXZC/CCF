/**
* 201803-2 ��ײ��С�� 
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, L, t;
	cin >> n >> L >> t;
	vector<int> line(L+2, -1), pos(n), ball(n);
	for (int i = 0; i < n; i++) {
		cin >> pos[i];
		ball[i] = 1;
		line[pos[i]] = i;
	}
	while (t--){
		for (int i = 0; i < n; i++) {
			line[pos[i]] = -1;
			pos[i] += ball[i];
			line[pos[i]] = i;
		}
		for (int i = 0; i < n; i++) {
//			��һ�뵽�߽�������ײ 
			if ((pos[i] == 0 || pos[i] == L) && line[pos[i]] == i) {
				ball[i] = -ball[i];
//			һ��ʼ���ڱ߽� 
			} else if (pos[i] > L) {
				pos[i] -= 2;
				ball[i] = -ball[i];
				line[pos[i]] = i;
//			��ײ 
			} else if (line[pos[i]] != i) {
				ball[i] = -ball[i];
				line[pos[i]] = i;
			}
		}
	};
	for (int i = 0; i < n; i++){
		cout << pos[i] << " ";
	}
	return 0;
}
