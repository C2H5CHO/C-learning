/*
	sort函数
	前提：包含头文件 #include <algorithm>
	功能：对指定范围内的元素进行排序
	使用：快速排序或类似快速排序的改进算法，具有较好的平均时间复杂度，一般为O(nlogn) 
	 
*/ 
# include <bits/stdc++.h>
using namespace std;

int main(){
	// sort(开始地址, 终止地址下一位, *比较函数);
	int a[1000];
	int n;
	cin >> n; // 读取数组大小
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a+1, a+n+1); // 排序区间：[1, n+1)
	for(int i = 1; i <= n; i++) cout << a[i] << ' '; 
	
	return 0;
} 
