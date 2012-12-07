#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
struct Node {char *Name;
             int Value;
             Node *Next;
            };
Node *PNode; //объ€вл€етс€ указатель

PNode = new Node; //выдел€етс€ пам€ть

PNode->Name = "STO"; //присваиваютс€ значени€
PNode->Value = 28;
PNode->Next = NULL;

delete PNode; // освобождение пам€ти
}
