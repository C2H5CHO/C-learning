// 5、提取子字符串--substr 
#include <bits/stdc++.h>
using namespace std;

int main(){
	std::string str = "Hello，World！";
	std::string substr = str.substr(7, 5); //提取字符串
	std::cout << "Substring：" << substr << std::endl; 
	
	return 0;
}

