#define STACK_H

#include <iostream>
#include <fstream>

using namespace std;

const int MaxMemSize = 25;   // ������������ ������ ������ ��� �����
typedef int TELEM;          // ��� �������� ��
typedef TELEM* PTElem;     // ��� ��������� �� ��

class TStack {
protected:                                 // ����
PTElem pMem;                              // ��������� �� ������ ���������
int MemSize;                             // ������ ������ ��� ��
int DataCount;                          // ���������� ��������� � ��
int Hi;                                // ������ ������� �����
virtual int GetNextIndex (int index); // �������� ��������� ������
public:

 TStack (int Size = MaxMemSize);           //�����������
 ~TStack();                               //����������
 int IsEmpty ( void ) const ;            // �������� �������
 int IsFull ( void ) const ;            // �������� ������������
 void Put ( const TELEM &Val );        // �������� ��������
 virtual TELEM Get ( void ) ;         // ������� ��������
};
