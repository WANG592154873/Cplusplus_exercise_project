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
	int all();
	void flash();//ˢ���ļ�

private:
	std::vector<Person> myfile;//����һ��myfile�����������֪ʶ��Ҫ��ϸ����
};