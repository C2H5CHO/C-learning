// string 
/*
	string是C++标准库的重要组成部分，主要用于字符串处理
	前提：#include <string>
	string和char[]不同，string实现了高度的封装，可以更方便完成字符串的操作（拼接、截取、匹配） 
*/

/*
	（1）字符串管理：string封装了字符串的存储和管理
	（2）动态大小调整：string可根据需要自动调整字符串的大小
	（3）安全性：string提供了一些方法来确保字符串的安全性
	（4）迭代器支持：string支持迭代器，可使用迭代器遍历字符串中的字符，并进行字符级别的操作
	（5）兼容性：string是C++标准库的一部分，因此在C++中广泛使用，并与其他标准库组件和C++语言特性兼容 
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	// 声明并初始化一个空字符串
	std::string str1;
	
	// 使用字符串字面量初始化字符串
	std::string str2 = "Hello World";
	
	// 使用另一个 std::string 对象初始化字符串
	std::string str3 = str2;
	
	// 使用部分字符串初始化字符串
	std::string str4 = str2.substr(0, 5); // substr(开始位置, 长度)
	
	// 使用字符数组初始化字符串
	const char* charArray = "Hello";
	std::string str5(charArray);
	
	// 使用重复的字符初始化字符串 
	std::string str6(5, 'A'); // str(个数, 字符)
	
	// 输出
	std::cout << "str1：" << str1 << std::endl;
	std::cout << "str2：" << str2 << std::endl;
	std::cout << "str3：" << str3 << std::endl;
	std::cout << "str4：" << str4 << std::endl;
	std::cout << "str5：" << str5 << std::endl;
	std::cout << "str6：" << str6 << std::endl;
	
	return 0;
} 
 
