#include <iostream>
#include "class.h"
using namespace std;


void List::SetNode() {//����߰�
	system("cls");
	cout << "�����忡 �����Ҽ��ڸ� �־��:";
	int num;
	cin >> num;//���ڸ��Է¹޾�
	Node *pNode = new Node;//����� ����
	pNode->data = num;//���ڸ� ����� �����ͺκп� �־��ش�

	Node *pPrev = end->pPrev;//������ ������带 ����

	pPrev->pNext = pNode;//��������� ������ ������
	pNode->pPrev = pPrev;//��������� ������ ������
	pNode->pNext = end;//�������� ������ ����
	end->pPrev = pNode;//������ ������ ������

	++size;
}

void List::ClearNode() {//�������
	Node* pNode = begin->pNext;//������� �Ӹ��� ����
	while (pNode != end) {//�����尡 ������ �ƴҶ������ݺ�
		Node* pNext = pNode->pNext;//�������� ������带 ����
		delete pNode;//���������
		pNode = pNext;//�����忡 ������带 ����,�������� �Ѿ��
	}//�߰��ȳ�尡 ���λ�������
	begin->pNext = end;//�Ӹ������� ����
	end->pPrev = begin;//���������� �Ӹ�
	size=0;//����� �ʱ�ȭ����
}

void List::ViewNode() {//������
	system("cls");
	Node* pNode = begin->pNext;//������� �Ӹ��� ����
	int i = 1;
	while (pNode != end) {
		cout << i << "��°��忡 ����ִ� ������:" << pNode->data << endl;
		pNode = pNode->pNext;//�����忡 ������带 ����,�������� �Ѿ��
		++i;
	}
	system("pause");
	return;
}

