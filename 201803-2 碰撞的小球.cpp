/**
* 201803-2 碰撞的小球 
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
//			下一秒到边界且无碰撞 
			if ((pos[i] == 0 || pos[i] == L) && line[pos[i]] == i) {
				ball[i] = -ball[i];
//			一开始就在边界 
			} else if (pos[i] > L) {
				pos[i] -= 2;
				ball[i] = -ball[i];
				line[pos[i]] = i;
//			碰撞 
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
