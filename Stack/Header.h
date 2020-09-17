#include<iostream>
using namespace std;

struct Node
{
    int iData;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;

class Stack
{
    private:
            PNODE Head;
            int iSize;
    public:
            Stack();
            void Push(int);
            int Pop();
            int Peep();
            void Display();
            int Count();
};
