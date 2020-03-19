//tliststack.h
#ifndef _tliststack_h
#define _tliststack_h
#include <iostream>
template <class T>
struct TNode {
	T val;
	TNode<T> *pNext;
};


template <class T>
class TStack {
	TNode<T> *pFirst;
public:

	//constructor
	TStack() {
		pFirst = NULL;
	}

	//destructor
	~TStack() {
		TNode<T> *tmp = pFirst;
		if (tmp == NULL)
			delete tmp;
		while (pFirst != NULL) {
			pFirst = pFirst->pNext;
			delete tmp;
			tmp = pFirst;
		}
	}

	//copy constructor
	TStack(const TStack<T>& st) {
		TNode<T> *tmp = st.pFirst;
		if (tmp == NULL)
			pFirst = tmp;
		while (tmp != NULL) {
			Push(tmp->val);
			tmp = tmp->pNext;
		}
		delete tmp;
	}

	//assignment operator
	TStack<T> operator=(const TStack<T>& st) {
		if (this != &st) {
			if (!IsEmpty())
				Clear();
			else {
				TNode<T> *tmp = st.pFirst;
				if (tmp == NULL)
					pFirst = tmp;
				while (tmp != NULL) {
					Push(tmp->val);
					tmp = tmp->pNext;
				}
				delete tmp;
			}
		}
		return *this;
	}

	//check for emptiness
	bool IsEmpty() const {
		return pFirst == NULL;
	}

	//full check
	bool IsFull() const {
		TNode<T> *tmp;
		tmp = new TNode<T>;
		if (tmp == NULL)
			return 1;
		else {
			delete tmp;
			return 0;
		}
	}

	//insert into stack
	void Push(const T& a) {
		if (IsFull())
			throw - 1;
		else {
			TNode<T> *tmp;
			tmp = new TNode<T>;
			tmp->pNext = pFirst;
			tmp->val = a;
			pFirst = tmp;
		}
	}

	//extract from stack 
	T Pop() {
		if (IsEmpty())
			throw - 1;
		else {
			T res = pFirst->val;
			TNode<T> *tmp;
			tmp = pFirst;
			pFirst = pFirst->pNext;
			delete tmp;
			return res;
		}
	}

	//see what's on top of the stack
	T Top() {
		if (IsEmpty())
			throw - 1;
		else
			return pFirst->val;
	}

	//clean stack
	void Clear() {
		TNode<T> *tmp = pFirst;
		while (pFirst != NULL) {
			pFirst = pFirst->pNext;
			delete tmp;
			tmp = pFirst;
		}
	}
};
#endif

