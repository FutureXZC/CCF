/**
* 201604-2 ����˹���� 
*/ 
#include<iostream>
using namespace std;
int main(){
	// map�����������pos���¿��ƫ������block���¿����״ ��last��block�������Ч�� 
	int map[15][10], pos, block[4][4], last = 4;
	// ��ʼ�� 
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 10; j++)
			cin >> map[i][j];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> block[i][j];
	cin >> pos;
	// ��last����block�ڵ���Чλ�� 
	for (int i = 3; i >= 0; i--){
		bool isOne = false;
		for (int j = 0; j < 4; j++){
			if (block[i][j] == 1) {
				isOne = true;
				break;
			}
		}
		if (isOne)
			break;
		last --;
	} 
	int bottom = 3;
	bool isGoDown = true;  // �ж��Ƿ�Ҫ��block�������� 
	// �ӵ����п�ʼ�� 
	while(isGoDown && bottom < 15){
		bottom ++;
		for (int i = bottom, q = last - 1; i > bottom - 4 && q >= 0; i--, q --){
			for (int j = pos - 1, p = 0; j < pos + 3 && p < 4; j ++, p++) {
				if (map[i][j] == 1 && block[q][p] == 1){
					isGoDown = false;
					break;
				}
			}
			if (!isGoDown)
				break;
		}
	};
	// ����map 
	for (int i = bottom - 1, q = last - 1; i > bottom - 5 && q >= 0; i--, q--)
		for (int j = pos - 1, p = 0; j < pos + 3 && p < 4; j ++, p++)
			if (block[q][p] == 1)
				map[i][j] = 1;	
	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 10; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
	return 0;
}
