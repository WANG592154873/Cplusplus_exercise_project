#include<iostream>
#include"List.h"
#include"People.h"
using namespace std;
int main()
{
	int input;
	List mybook;
	cout << "�����빦����ţ�" << endl;
	cout << "1�����" << endl;
	cout << "2��ɾ��" << endl;
	cout << "3������" << endl;
	cout << "4����ʾ����" << endl;
	cout << "5���˳�����" << endl;
	cin >> input;
	switch (input) {
	case 1:
		mybook.add();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		break;
	}
	return 0;
}