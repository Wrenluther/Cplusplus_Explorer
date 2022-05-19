#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//1.进制打印
	int n = 21;
	cout << hex << "十六进制：" << n << endl;
	cout << dec << "十进制：" << n << endl;
	cout << oct << "八进制：" << n << endl;
	//设置指定进制（头文件iomanip），值只能为8，10，16
	cout << setbase(16) << "十六进制：" << n << endl;
	//2.数字打印
	double d = 3.1415926;
	cout << fixed << "普通小数：" << d << endl;					//以普通小数形式输出浮点数
	cout << scientific << "科学计数法：" << d << endl;			//以科学计数法形式输出浮点数
	cout << setprecision(4) << "精度4的小数：" << d << endl;	//设置输出浮点数的精度
	cout << showbase << "前缀：" << n << endl;					//输出表示数值的进制的前缀
	//3.字符


	return 0;
}
