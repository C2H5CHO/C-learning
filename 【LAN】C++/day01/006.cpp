// 4、交换变量
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 5, b = 3; // 初始化变量a，b
	int temp = b; // 临时变量temp
	b = a;
	a = temp;
	cout << a << ' ' << b << '\n'; //输出a，b 
	
	return 0;
} 
