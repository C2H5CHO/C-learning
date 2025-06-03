// 取消同步流
/*
	由于cin和cout需要自动判断变量类型等内部原因，读写效率比scanf和printf更低
	当数据量较大时，可能导致程序运行超时
	通过取消同步流来加速cin和cout，加速后效率相差无几 
*/ 

#include <bits/stdc++.h> 
using namespace std;

int main(){
	// 取消同步流
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int x;
	cin >> x;
	cout << x << '\n'; 
	
	return 0;
}
