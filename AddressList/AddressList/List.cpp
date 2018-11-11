#include <fstream>
#include "List.h"
List::List()
{
}

List::~List()
{
}
void setout()//�����ʽ���ƣ��������
{
	std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
}
int List::readfile()//��ȡ�ļ�
{
	std::ifstream readfile("book.txt");
	if (readfile)
	{
		Person p;
		std::cout << "***********�绰��***********" << std::endl;
		std::cout << "����" << "\t\t" << "�绰" << std::endl;
		if (readfile >> p.name >> p.telnumber)//��ȡ��һ����Ϊ�ա�
		{
			std::cout << "\tNULL\n" << std::endl;
		}
		myfile.push_back(p);
		while (readfile >> p.name >> p.telnumber)
		{
			myfile.push_back(p);
		}
		readfile.close();
	}
	else
	{
		std::ofstream file;
		file.open("book.txt");//����������򴴽��ļ�
		if (!file.is_open())
		{
			std::cout << "�ļ�����ʧ�ܣ�" << std::endl;
		}
	}
	return 0;
}
void List::showall()//��ʾ�ļ�  [����ͨ��]
{
	std::vector<Person>::iterator iter;
	setout();//�����ʽ����
	for (iter = this->myfile.begin(); iter != this->myfile.end(); iter++)
	{
		std::cout.width(15);//������Ϊ15
		std::cout << iter->name;
		std::cout.width(15);
		std::cout << iter->telnumber << "\n";
	}
}
void List::add()//���  [����ͨ��]
{
	Person p;
	std::cout << "������������\n" << std::endl;
	std::cin >> p.name;
	std::cout << "��������룺\n" << std::endl;
	std::cin >> p.telnumber;
	myfile.push_back(p);//������ĺ�����ӵ�myfile����
	this->flash();
}
void List::flash()//ˢ���ļ�����
{
	std::ofstream outfile("book.txt");
	std::vector<Person>::iterator iter;
	setout();
	for (iter = this->myfile.begin(); iter != this->myfile.end(); iter++)
	{
		outfile << iter->name;
		outfile << iter->telnumber << "\n";
	}
	outfile.close(); //�ر��ļ�
}
void List::del()
{
	if (myfile.empty())
	{
		std::cout << "ͨѶ¼��û�м�¼��"<< std::endl;
		//return;
	}
	std::string name;
	std::cout << "������Ҫɾ��������" << std::endl;
	std::cin >> name;
	std::vector<Person>::iterator iter;
	for (iter = myfile.begin(); iter != myfile.end(); )
	{
		if (iter->name == name)
		{
			myfile.erase(iter);//ɾ����Ӧ��Ŀ��iter������
			std::cout << "ɾ���ɹ���" << std::endl;
			this->flash();
			return;
		}
		else
			iter++;
	}
	std::cout << "δ�ҵ�Ҫɾ����������" << std::endl;
}

int List::search()
{
	std::string name;
	std::cout << "������Ҫ���ҵ���ϵ��������" << std::endl;
	std::cin >> name;
	std::vector<Person>::iterator iter;
	for (iter = this->myfile.begin(); iter != this->myfile.end(); iter++)
	{
		if (name == iter->name)
		{
			std::cout<< iter->name << "\t\t" << iter->telnumber << "\n";
		}
		std::cout << "δ�ҵ�����Ҫ�Ľ����";
	}
	
	return 0;
}
