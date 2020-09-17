/*
    Problem Statement : create a stack and impliment following functions.
                        1.Push
                        2.Pop
                        3.Peep
                        4.Display stack
                        5.Count the number of elements
                        0.Exit
*/

#include "Header.h"

int main()
{
    int iNo = 0,iRet = 0;
    Stack obj;
    int iChoice = 1;

    while(iChoice != 0)
    {
        cout<<"1.Push\n2.Pop\n3.Peep\n4.Display stack\n5.Count the number of elements\n0.Exit\n";
        cout<<"---------------------------------------\n";
        cout<<"Enter your choice\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1 : cout<<"Enter a number\n";
                     cin>>iNo;
                     obj.Push(iNo);
                     break; 
            
            case 2 : iRet = obj.Pop();
                     cout<<"Popped element is : "<<iRet<<endl;
                     break;

            case 3 : iRet = obj.Peep();
                     cout<<"Peeped element is : "<<iRet<<endl;
                     break;

            case 4 : obj.Display();
                     break;

            case 5 : iRet = obj.Count();
                     cout<<"No of elements in stack are : "<<iRet<<endl;
                     break;

            case 0 : break;

            default : cout<<"Error : invalid choice\n";
        }

    }

    return 0;
}
