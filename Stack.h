#ifndef __STACK__
#define __STACK__
#include "LinkedList.h"


//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

//LinkedList class�� ��ӹ���

template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T& element);
};

template <typename T>
bool Stack<T>::Delete(T& element) {
	//first�� 0�̸� false��ȯ
	if (this->first == 0) { //Trying to delete null,
		return false;
	}
	// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����
	element = this->first->data; 
	Node <T>* firstPointer = this->first; //value you are trying to remove
	this->first = this->first->link; //connect the node to the 2nd node 
	delete firstPointer; // remove the original pointer
	this->current_size--; //reduce the size by 1
	return true;
}

#endif
