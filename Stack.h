#ifndef __STACK__
#define __STACK__
#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음

template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T& element);
};

template <typename T>
bool Stack<T>::Delete(T& element) {
	//first가 0이면 false반환
	if (this->first == 0) { //Trying to delete null,
		return false;
	}
	// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
	element = this->first->data; 
	Node <T>* firstPointer = this->first; //value you are trying to remove
	this->first = this->first->link; //connect the node to the 2nd node 
	delete firstPointer; // remove the original pointer
	this->current_size--; //reduce the size by 1
	return true;
}

#endif
