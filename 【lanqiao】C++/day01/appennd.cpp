// 2¡¢Æ´½Ó×Ö·û´®--+/append
#include <bits/stdc++.h>
using namespace std;

int main(){
	std::string str1 = "Hello";
	std::string str2 = "World";
	std::string rel1 = str1 + "£¬" + str2;
	std::string rel2 = str1.append("£¬").append(str2);
	
	std::cout << "result 1£º" << rel1 << std::endl;
	std::cout << "result 2£º" << rel2 << std::endl;
	
	return 0;
} 
