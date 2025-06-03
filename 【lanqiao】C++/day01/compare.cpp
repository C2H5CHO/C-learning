// 6、字符串比较--compare
#include <bits/stdc++.h> 
using namespace std;

int main(){
	std::string str1 = "Hello";
	std::string str2 = "World";
	int result = str1.compare(str2); //比较字符串
	if(result == 0){
		std::cout << "String are equal." << std::endl;
	} 
	else if(result < 0){
		std::cout << "String 1 is less than String 2." << std::endl;
	}
	else {
		std::cout << "String 1 is greater than String 2." << std::endl;
	}
	
	return 0;
}

/*
	string重载了不等号，因此可以使用 s1<s2 的方式直接比较String的大小
	比较的规则：字典序大小 
*/
