#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
class TStack
{
private:
	T* stackPtr;                      // указатель на стек
	const int size;                   // максимальное количество элементов в стеке
	int num;                          // номер текущего элемента стека
public:
	TStack(int = 25);                  // по умолчанию размер стека равен 25 элементам
	TStack(const TStack<T>&);          // конструктор копировани€
	~TStack();                         // деструктор


	inline int IsEmpty(void) const; // контроль пустоты
	inline int IsFull(void) const; // контроль переполнени€
	inline void put(const T&);     // поместить элемент в вершину стека
	inline T deleteElem();          // удалить элемент из вершины стека и вернуть его
	inline const T& Peek(int) const; // n-й элемент от вершины стека
	inline int getStackSize() const;  // получить размер стека
	inline T* getPtr() const;         // получить указатель на стек
	inline int getNum() const;        // получить номер текущего элемента в стеке

	//ƒоп задани€
	inline int min_elem(); //ѕоиск минимального элемента
	inline int max_elem(); //ѕоиск максимального элемента


	friend ostream& operator<<(ostream& out, const TStack& st)
	{
		for (int ix = st.num - 1; ix >= 0; ix--)
			cout << st.stackPtr[ix] << endl;
		return out;
	}

	
};

#endif
