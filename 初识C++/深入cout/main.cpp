#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//1.���ƴ�ӡ
	int n = 21;
	cout << hex << "ʮ�����ƣ�" << n << endl;
	cout << dec << "ʮ���ƣ�" << n << endl;
	cout << oct << "�˽��ƣ�" << n << endl;
	//����ָ�����ƣ�ͷ�ļ�iomanip����ֵֻ��Ϊ8��10��16
	cout << setbase(16) << "ʮ�����ƣ�" << n << endl;
	//2.���ִ�ӡ
	double d = 3.1415926;
	cout << fixed << "��ͨС����" << d << endl;					//����ͨС����ʽ���������
	cout << scientific << "��ѧ��������" << d << endl;			//�Կ�ѧ��������ʽ���������
	cout << setprecision(4) << "����4��С����" << d << endl;	//��������������ľ���
	cout << showbase << "ǰ׺��" << n << endl;					//�����ʾ��ֵ�Ľ��Ƶ�ǰ׺
	//3.�ַ�


	return 0;
}
