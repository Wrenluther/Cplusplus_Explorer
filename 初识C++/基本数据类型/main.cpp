#include <iostream>

using namespace std;

int main()
{
	//����
	/*
	char:һ��1�ֽڣ�8λ
	short:����2�ֽڣ�16λ
	int:������shortһ������һ��Ϊ4�ֽڣ�32λ
	long:����4�ֽڣ�32λ��������intһ����
	long long:����8�ֽڣ�64λ��������longһ����
	*/
	//�޷��ź��з�������
	/*
	�޷��������ǻ�������ǰ�ӹؼ���unsigned������
	�з��������ǻ�������ǰ�ӹؼ���signed������
	*/
	//������
	/*
	float:һ��4�ֽڣ�32λ
	double:һ��8�ֽڣ�64λ
	*/

	//Windows 64λ������ Microsoft Visdual Studio 2022
	cout << sizeof(char) << endl;		//1
	cout << sizeof(short) << endl;		//2
	cout << sizeof(int) << endl;		//4
	cout << sizeof(long) << endl;		//4
	cout << sizeof(long long) << endl;	//8

	cout << sizeof(float) << endl;		//4
	cout << sizeof(double) <<endl;		//8


	return 0;
}