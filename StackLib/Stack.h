#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
class TStack
{
private:
	T* stackPtr;                      // ��������� �� ����
	const int size;                   // ������������ ���������� ��������� � �����
	int num;                          // ����� �������� �������� �����
public:
	TStack(int = 25);                  // �� ��������� ������ ����� ����� 25 ���������
	TStack(const TStack<T>&);          // ����������� �����������
	~TStack();                         // ����������


	inline int IsEmpty(void) const; // �������� �������
	inline int IsFull(void) const; // �������� ������������
	inline void put(const T&);     // ��������� ������� � ������� �����
	inline T deleteElem();          // ������� ������� �� ������� ����� � ������� ���
	inline const T& Peek(int) const; // n-� ������� �� ������� �����
	inline int getStackSize() const;  // �������� ������ �����
	inline T* getPtr() const;         // �������� ��������� �� ����
	inline int getNum() const;        // �������� ����� �������� �������� � �����

	//��� �������
	inline int min_elem(); //����� ������������ ��������
	inline int max_elem(); //����� ������������� ��������


	friend ostream& operator<<(ostream& out, const TStack& st)
	{
		for (int ix = st.num - 1; ix >= 0; ix--)
			cout << st.stackPtr[ix] << endl;
		return out;
	}

	
};

#endif
