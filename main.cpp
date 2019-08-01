#include <iostream>
#include "class.h"
using namespace std;

int main() {
	List list;
	int num;
	while (1) {
		system("cls");
		cout << "1.노드추가, 2.노드출력, 0.종료:";
			cin >> num;
			if (num == 0)
				break;
			else if (num < 0 || num>2)
				continue;
			switch (num)
			{
			case 1:
				list.SetNode();//노드추가
				break;
			case 2:
				list.ViewNode();//노드출력
				break;
			}
	}
}