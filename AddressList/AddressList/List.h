#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "People.h"
class List {
public:
	List();
	~List();
	void add();
	void del();
	int search();
	int readfile();
	void showall();
	void flash();//ˢ���ļ�
	int removefile();

private:
	std::vector<Person> myfile;//����һ��myfile�����������֪ʶ��Ҫ��ϸ����
};

inline void setout();//�����ʽ����