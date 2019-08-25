#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
	{
        cin >> a;
        if (i == 0)
            v.push_back(a);
        if((n%2 == 1 && i == n/2)||(n%2 == 0 && i == n/2-1))
            v.push_back(a);
        if(n%2 == 0 && i == n/2)
            v.push_back(a);
        if(i == n-1)
            v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    cout << v.back() << " ";
    
    if (v.size() == 3)
        cout << v[1] << " ";
    else if((v[1] + v[2]) % 2 == 0)
        cout << (v[1]+v[2])/2 << " ";
    else
        cout << fixed << setprecision(1) << (v[1]*1.0+v[2])/2 << " " << endl;
    cout << v.front();
    return 0;
}
