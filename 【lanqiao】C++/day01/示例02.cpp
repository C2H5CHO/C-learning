#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 150;
char s[N];

int main(){
	// 取消同步流
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> s + 1; // 从s[1]开始输入 
	for(int i = 1; s[i]; i++) cout << s[i]; 
	
	return 0;
}
