#include <fstream>
#include "List.h"
List::List()
{
}

List::~List()
{
}
void List::add()
{
	Person p;
	std::cout << "������������\n" << std::endl;
	std::cin >> p.name;
	std::cout << "��������룺\n" << std::endl;
	std::cin >> p.telnumber;
	myfile.push_back(p);//������ĺ�����ӵ�myfile����
	this->flash();
}
void List::flash()
{
	std::ofstream outfile("book.txt");
	std::vector<Person>::iterator iter;
	for (iter = this->myfile.begin(); iter != this->myfile.end(); iter++)
	{
		outfile << iter->name;
		outfile << iter->telnumber;
	}
	outfile.close(); //�ر��ļ�
}
void List::del()
{
	if (myfile.empty())
	{
		std::cout << "ͨѶ¼��û�м�¼��"<< std::endl;
		return;
	}
	std::string name;
	std::cout << "������Ҫɾ��������" << std::endl;
	std::cin >> name;
	std::vector<Person>::iterator iter;
	for (iter = myfile.begin(); iter != myfile.end(); iter++)
	{
		if (iter->name == name)
		{
			myfile.erase(iter);//ɾ����Ӧ��Ŀ��iter������
			std::cout << "ɾ���ɹ���" << std::endl;
		}
	}

}