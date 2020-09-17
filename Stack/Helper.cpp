#include "Header.h"

Stack::Stack()
{
    Head = NULL;
    iSize = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Push
// Parameters    : Address of first node , Integer
// Return Value  : None
// Description   : It takes address of first node and Integer and add that element into stack frame
// Author        : Swapnil Ramesh Adhav
// Date          : 16th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Stack::Push(int iNo)
{
    PNODE NewNode = NULL;
    NewNode = new NODE;
    NewNode->iData = iNo;
    NewNode->next = NULL;
                
    if(Head==NULL)
    {
        Head = NewNode;
    }
    else
    {
        NewNode->next = Head;
        Head = NewNode;
    }
    iSize++; 
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pop
// Parameters    : Address of first node
// Return Value  : Integer
// Description   : It takes address of first node and remove upper most element from the stack frame and return that element.
// Author        : Swapnil Ramesh Adhav
// Date          : 16th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Stack::Pop()
{
PNODE Temp = NULL;
    int iNo = 0;

    if(Head==NULL)
    {
        return -1;
    }
    else if(Head->next==NULL)
    {
        iNo = Head->iData;
        free(Head);
        Head = NULL;
    }
    else
    {
        Temp = Head;
        iNo = Head->iData;
        Head = Head->next;
        delete Temp;
    }
    iSize--;
    return iNo;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Peep
// Parameters    : Address of first node
// Return Value  : Integer
// Description   : It takes address of first node and return the upper most element from the stack.
// Author        : Swapnil Ramesh Adhav
// Date          : 15th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Stack::Peep()
{
    if(Head==NULL)
    {
        return -1;
    }
    int iNo = Head->iData;
    return iNo;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : first node
// Return Value  : None
// Description   : It takes first node and display the elements of stack 
// Author        : Swapnil Ramesh Adhav
// Date          : 16th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Stack::Display()
{
    PNODE Temp = Head;
    while(Temp != NULL)
    {
        cout<<"| "<<Temp->iData<<" |->";
        Temp = Temp->next;
    }
    cout<<"| NULL |\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Parameters    : first node
// Return Value  : None
// Description   : It takes first node and count the number element in the stack
// Author        : Swapnil Ramesh Adhav
// Date          : 16th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Stack::Count()
{
    return iSize;
}