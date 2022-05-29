#include <iostream>

using namespace std;

int main()
{
	//整型
	/*
	char:一般1字节，8位
	short:至少2字节，16位
	int:至少与short一样长，一般为4字节，32位
	long:至少4字节，32位，至少与int一样长
	long long:至少8字节，64位，至少与long一样长
	*/
	//无符号和有符号类型
	/*
	无符号类型是基本类型前加关键字unsigned的类型
	有符号类型是基本类型前加关键字signed的类型
	*/
	//浮点型
	/*
	float:一般4字节，32位
	double:一般8字节，64位
	*/

	//Windows 64位编译器 Microsoft Visdual Studio 2022
	cout << sizeof(char) << endl;		//1
	cout << sizeof(short) << endl;		//2
	cout << sizeof(int) << endl;		//4
	cout << sizeof(long) << endl;		//4
	cout << sizeof(long long) << endl;	//8

	cout << sizeof(float) << endl;		//4
	cout << sizeof(double) <<endl;		//8


	return 0;
}