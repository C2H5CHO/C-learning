// 3、字符串
#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[] = "Hello"; // 长度为5的数组，下标区间[0, 4]
	for(int i = 0; i < 4; i++){
		cout << s[i]; // 输出字符串中下标为i的元素 
	} 
	cout << '\n';
	cout << s << '\n'; // 输出s，遇到'\0'就终止，并换行 
	
	return 0;
} 

