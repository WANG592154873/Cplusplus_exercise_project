#include<iostream>
#include"List.h"
#include"People.h"
using namespace std;
int main()
{
	int input;
	List mybook;
	mybook.readfile();
	cout << "�����빦����ţ�" << endl;
	cout << "1�����" << endl;
	cout << "2��ɾ��" << endl;
	cout << "3������" << endl;
	cout << "4����ʾ����" << endl;
	cout << "5���˳�����" << endl;
	cout << "6��ɾ���ļ�" << endl;
	cin >> input;
	bool state = true;
	while (state)
	{
		switch (input) {
		case 1:
			std::cerr << "���" << std::endl;
			mybook.add();
			break;
		case 2:
			std::cerr << "ɾ��" << std::endl;
			mybook.del();
			break;
		case 3:
			std::cerr << "����" << std::endl;
			mybook.search();
			break;
		case 4:
			std::cerr << "��ʾ����" << std::endl;
			mybook.showall();
			break;
		case 5:
			std::cerr << "�˳�����" << std::endl;
			state = false;
			break;
		case 6:
			std::cerr << "ɾ���ļ�" << std::endl;
			mybook.removefile();
			mybook.readfile();
			break;
		default:
			std::cerr << "�������" << std::endl;
			break;
		}
		cout << "�����빦����ţ�" << endl;
		cin >> input;
	}
	
	return 0;
}