#include <iostream>
#include <string.h>

using namespace std;

struct ELEM {
	string value;
	ELEM *pNext;
}*head; //ELEM *head;

void AddItem(string m_val)
{
	ELEM *pElem = new ELEM;
	pElem->value = m_val;
	pElem->pNext = head;
	head = pElem;
}


void PrintList()
{
	ELEM *elem = head;
	cout<<"ostavshiesya elementi:"<<endl;
	while (elem)
	{
		cout<<elem->value<<endl;
		elem = elem->pNext;
	}
}


void DeleteItems(string DataItem)
{
	ELEM *elem = head; //текущий
	ELEM *prev = NULL; //предыдущий

 while (elem)
 {//пока не конец списка
    if (DataItem == elem->value)
    {
        if (elem==head)
            head=elem->pNext;
        else
        prev->pNext = elem->pNext;

        return;
    }

    prev = elem; //предыдущий стал 5-ый
    elem = elem->pNext; //текущий стал 4-ый
  }

}




int main()
{
string i;
int q;
for (q=1;q<5;q++)
{
    cout<<"vvedite element:\n";
    cin>>i;
		AddItem(i);

}
	//DeleteItems();


    cout<<"vvedite udalyaemii element:\n";
    cin>>i;
    DeleteItems(i);


	PrintList();


	return 0;
}
