#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
struct Node {char *Name;
             int Value;
             Node *Next;
            };
Node *PNode; //����������� ���������

PNode = new Node; //���������� ������

PNode->Name = "STO"; //������������� ��������
PNode->Value = 28;
PNode->Next = NULL;

delete PNode; // ������������ ������
}
