#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	char s[100]; // 临时变量，用于输入 
	scanf("%s", s); 
	string str(s); // 用s构造str
	printf("str = %s\n", str.c_str()); // 输出str 
	
	return 0;
}

/*
	std::string类提供了一个成员变量c_str()，用于返回一个指向以空字符结尾的C风格字符串（即 const char* 类型）
	printf输出时，需要将string转换为 const char* 类型 
*/ 
