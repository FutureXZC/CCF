#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector< vector<int> > map(n), del(n);
	for (int i = 0; i < n; i ++) {
		map[i].resize(m);
		del[i].resize(m);
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];
	// 检查行
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int range_col = j, count = 1;
			while(range_col + 1 < m && map[i][range_col] == map[i][range_col+1]) {
				count ++;
				range_col ++;
			};
			if (count >= 3) {
				for (int k = j; k < j + count; k++) {
					del[i][k] = 1;
				}
				j += count - 1;
			}
		}
	}
	// 检查列
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			int range_row = i, count = 1;
			while(range_row + 1 < n && map[range_row][j] == map[range_row+1][j]) {
				count ++;
				range_row ++;
			};
			if (count >= 3) {
				for (int k = i; k < i + count; k++) {
					del[k][j] = 1;
				}
				i += count - 1;
			}
		}
	}
	// 输出
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (del[i][j] == 1)
				map[i][j] = 0;
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
