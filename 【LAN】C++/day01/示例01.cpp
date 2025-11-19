#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int N = 150;
int a[N];

int main(){
	// 取消同步流
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = n; i >= 1; i--) cout << a[i] << '\n'; 
	
	return 0;
} 
