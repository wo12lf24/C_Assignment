#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
    T *arr;
    int q_size;
    int front;
    int rear;

public:
    Queue()
    {
        q_size=0;
        arr=new T[10];
        front=
    }
    void Push();
    void Pop();
};

int main(void)
{
    Queue<int> a;

    return 0;
}