#include<bits/stdc++.h>
using namespace std;

int caculate(int a, int b, char op)
{
	if (op == '+')
		return a + b;
	if (op == '-')
		return a - b;
	if (op == 'x')
		return a * b;
	if (op == '/')
		return a / b;
}

int main()
{
	stack<int> num;
	stack<char> op;
	int n = 0;
	string str;
	char last_op = ' ';
	
	cin >> n;
	bool *res = new bool[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < 7; j++)
		{
			switch(str[j])
			{
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					num.push(int(str[j]) - 48);
					break;		
				case '+':
				case '-':
					if (last_op == ' ' || last_op == 'x' || last_op == '/')
					{
						last_op = str[j];
						op.push(str[j]);
						break;
					} else {
						int x = num.top();
						num.pop();
						int y = num.top();
						num.pop();
						num.push(caculate(y, x, last_op));
						op.pop();
						op.push(str[j]);
						last_op = str[j];
						break;
					}
				case 'x':
				case '/':
					int x = num.top();
					num.pop();
					int y = int(str[j+1]) - 48;
					num.push(caculate(x, y, str[j]));
					last_op = str[j];
					j++;
					break;
			}
		}
		while(!op.empty())
		{
			int x = num.top();
			num.pop();
			int y = num.top();
			num.pop();
			num.push(caculate(y, x, op.top()));
			op.pop();
		}
		if (num.top() == 24)
			res[i] = true;
		else
			res[i] = false;
		num.pop();
		last_op = ' ';
	}
	
	for (int i = 0; i < n; i++)
	{
		if (res[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	
	return 0;
}
