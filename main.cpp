#include <iostream>
#include "class.h"
using namespace std;

int main() {
	List list;
	int num;
	while (1) {
		system("cls");
		cout << "1.����߰�, 2.������, 0.����:";
			cin >> num;
			if (num == 0)
				break;
			else if (num < 0 || num>2)
				continue;
			switch (num)
			{
			case 1:
				list.SetNode();//����߰�
				break;
			case 2:
				list.ViewNode();//������
				break;
			}
	}
}