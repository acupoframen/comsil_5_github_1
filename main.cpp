#include <stdio.h>
#include "LinkedList.h"
#include "Stack.h"

void prnMenu() {
	cout << "*******************************************" << endl;
	cout << "* 1. ����    2. ����    3. ���   4. ���� *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "���Ͻô� �޴��� ����ּ���: ";
}

int main() {
	int mode, selectNumber, tmpItem;
	LinkedList<int>* p;
	bool flag = false;

	cout << "�ڷᱸ�� ����(1: Stack, Other: Linked List): ";
	cin >> mode;

	if (mode == 1)
		p = new Stack<int>();    // ������ �����ϴ� ����

	else
		p = new LinkedList<int>();


	do {
		prnMenu();
		cin >> selectNumber;

		switch (selectNumber) {
		case 1:
			cout << "���Ͻô� ���� �Է����ּ���: ";
			cin >> tmpItem;    p->Insert(tmpItem);
			cout << tmpItem << "�� ���ԵǾ����ϴ�." << endl;
			break;

		case 2:
			if (p->Delete(tmpItem) == true)
				cout << tmpItem << "�� �����Ǿ����ϴ�." << endl;

			else cout << "����ֽ��ϴ�. ���� ����" << endl;
			break;

		case 3:
			cout << "ũ��: " << p->GetSize() << endl;
			p->Print();
			break;

		case 4:
			flag = true;     
			break;

		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			break;

		}
		if (flag) break;

	} while (1);

	return 0;
	/*
	double dVal;
	string strVal;
	LinkedList<double> dList;
	LinkedList<string> strList;

	dList.Insert(3.14);
	dList.Insert(123456);
	dList.Insert(-0.987654);
	dList.Print();
	dList.Delete(dVal);
	cout << "������ ������ ����: " << dVal << endl;
	dList.Print();
	dList.Insert(777.777);
	dList.Print();
	dList.Delete(dVal);
	cout << "������ ������ ����: " << dVal << endl;
	dList.Delete(dVal);
	cout << "������ ������ ����: " << dVal << endl;
	dList.Print();
	dList.Delete(dVal);
	cout << "������ ������ ����: " << dVal << endl;
	dList.Print();

	strList.Insert("This");
	strList.Insert("is a");
	strList.Insert("Template");
	strList.Insert("Example");
	strList.Print();
	strList.Delete(strVal);
	cout << "������ ������ ����: " << strVal << endl;
	strList.Insert("Class");
	strList.Print();

	return 0;
	*/

}

