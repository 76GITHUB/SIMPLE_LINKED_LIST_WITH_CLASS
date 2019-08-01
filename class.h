#pragma once
#include <iostream>
using namespace std;

class Node {//노드 클래스
private:
	int data;//데이터부분
	Node* pNext;//다음노드포인터
	Node* pPrev;//이전노드포인터
public:
	Node() {//생성자호출시 초기세팅
		pNext = NULL;
		pPrev = NULL;
	}
	virtual ~Node(){}
	friend class List;//private멤버까지 전부접근허용하기위해
};

class List {//리스트 클래스
private:
	Node* begin;//머리
	Node* end;//꼬리
	int size;
public:
	List() {//생성자호출시 리스트 초기세팅
		begin = new Node;
		end = new Node;
		begin->pNext = end;
		end->pPrev = begin;
		size = 0;
   }
	~List(){//소멸자호출시
		ClearNode();//추가된 노드를 모두제거
		delete begin;
		delete end;
	}
	void SetNode();//노드추가
	void ClearNode();//노드제거
	void ViewNode();//노드출력
};


