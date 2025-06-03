/*
	默认：sort默认使用 < 进行排序
	自定义：传入第三个参数，可以是函数或lambda表达式 
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(const int &u, const int &v){
	return u > v;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	vector<int> v = {5, 1, 3, 9, 11};
	
	sort(v.begin(), v.end(), cmp); // 降序排列
	for(int i = 0; i < v.size(); i++) cout << v[i] << ' '; 
	
	return 0;
}



