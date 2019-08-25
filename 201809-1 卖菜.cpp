/*
*  201809-1 Âô²Ë 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[1005] = {0}, b[1005] = {0}, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	b[1] = (a[1] + a[2]) / 2;
	for (int i = 2; i < n; i++)
	{
		b[i] = (a[i-1] + a[i+1] + a[i]) / 3;
	}
	b[n] = (a[n] + a[n-1]) / 2;
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
