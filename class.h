#pragma once
#include <iostream>
using namespace std;

class Node {//��� Ŭ����
private:
	int data;//�����ͺκ�
	Node* pNext;//�������������
	Node* pPrev;//�������������
public:
	Node() {//������ȣ��� �ʱ⼼��
		pNext = NULL;
		pPrev = NULL;
	}
	virtual ~Node(){}
	friend class List;//private������� ������������ϱ�����
};

class List {//����Ʈ Ŭ����
private:
	Node* begin;//�Ӹ�
	Node* end;//����
	int size;
public:
	List() {//������ȣ��� ����Ʈ �ʱ⼼��
		begin = new Node;
		end = new Node;
		begin->pNext = end;
		end->pPrev = begin;
		size = 0;
   }
	~List(){//�Ҹ���ȣ���
		ClearNode();//�߰��� ��带 �������
		delete begin;
		delete end;
	}
	void SetNode();//����߰�
	void ClearNode();//�������
	void ViewNode();//������
};


