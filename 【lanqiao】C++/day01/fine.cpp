// 3、字符串查找--find
#include <bits/stdc++.h>
using namespace std;

int main(){
	std::string str1 = "Hello World！";
	size_t pos = str1.find("World"); // 查找字符串的位置
	if (pos != std::string::npos){
		std::cout << "Substring found at position：" << pos << std::endl;
	} 
	else{
		std::cout << "Substring not found." << std::endl;
	}
	
	return 0;
} 
