#include <iostream>
#include "class.h"
using namespace std;


void List::SetNode() {//노드추가
	system("cls");
	cout << "현재노드에 저장할숫자를 넣어보자:";
	int num;
	cin >> num;//숫자를입력받아
	Node *pNode = new Node;//새노드 생성
	pNode->data = num;//숫자를 노드의 데이터부분에 넣어준다

	Node *pPrev = end->pPrev;//꼬리의 이전노드를 저장

	pPrev->pNext = pNode;//이전노드의 다음은 현재노드
	pNode->pPrev = pPrev;//다음노드의 이전은 현재노드
	pNode->pNext = end;//현재노드의 다음은 꼬리
	end->pPrev = pNode;//꼬리의 이전은 현재노드

	++size;
}

void List::ClearNode() {//노드제거
	Node* pNode = begin->pNext;//현재노드는 머리의 다음
	while (pNode != end) {//현재노드가 꼬리가 아닐때까지반복
		Node* pNext = pNode->pNext;//현재노드의 다음노드를 저장
		delete pNode;//현재노드삭제
		pNode = pNext;//현재노드에 다음노드를 저장,다음노드로 넘어간셈
	}//추가된노드가 전부삭제된후
	begin->pNext = end;//머리다음은 꼬리
	end->pPrev = begin;//꼬리이전은 머리
	size=0;//사이즈도 초기화해줌
}

void List::ViewNode() {//노드출력
	system("cls");
	Node* pNode = begin->pNext;//현재노드는 머리의 다음
	int i = 1;
	while (pNode != end) {
		cout << i << "번째노드에 담겨있는 데이터:" << pNode->data << endl;
		pNode = pNode->pNext;//현재노드에 다음노드를 저장,다음노드로 넘어간셈
		++i;
	}
	system("pause");
	return;
}

