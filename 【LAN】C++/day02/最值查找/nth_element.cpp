// 3、nth_element函数
/*
	nth_element(st, k, ed)--部分排序，返回值为void()
	传入参数为三个地址或迭代器，其中第二个参数位置的元素将处于正确位置，其他位置元素的顺序可能是任意的，但前面的都比它小，后面的都比它大 
	时间复杂度O(n) 
*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {5, 1, 7, 3, 10, 18, 9};
	nth_element(v.begin(), v.begin() + 3, v.end());
	for(auto &i : v) cout << i << ' ';
	
	return 0;
} 


