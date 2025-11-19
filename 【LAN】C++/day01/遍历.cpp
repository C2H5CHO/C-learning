// 7、遍历
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "Hello";
	
	for(int i = 0; i < s.length(); i++) cout << s[i];
	cout << '\n';
	for(auto i : s){
		cout << i;
		i = 'a'; //此处修改无效，因为i是拷贝出来的，而不是直接引用 
	}
	cout << '\n';
	for(auto &i : s){
		cout << i;
		i = 'a'; //此处修改有效 
	} 
	cout << '\n';
	cout << s << '\n';
	
	return 0;
} 

/*
	遍历的方法：
	（1）循环枚举下标
	（2）auto枚举（若用&表示取引用类型，则修改i会改变原来的值） 
*/
