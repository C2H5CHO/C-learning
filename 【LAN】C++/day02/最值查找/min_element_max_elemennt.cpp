// 2、min_element和max_element
/*
	min_element(st, ed)--返回地址[st, ed)中最小的那个值的下标（迭代器），传入参数为两个地址或迭代器
	max_element(st, ed)--返回地址[st, ed)中最大的那个值的下标（迭代器），传入参数为两个地址或迭代器 
	时间复杂度：O(n)，n表示数组大小 
*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {5, 1, 3, 9, 11};
	
	cout << *max_element(v.begin(), v.end()) << '\n';
	
	return 0;
} 

