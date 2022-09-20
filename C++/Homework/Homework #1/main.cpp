#include <iostream>
using namespace std;

template <typename T>
class Circular_Queue
{
private:
    T *arr;
    int front;
    int rear;
    bool LastOperationIsPush = false;

public:
    Circular_Queue()
    {
        arr = new T[5];
        front = 0;
        rear = 0;
    }

    bool IsEmpty()
    {
        if (front == rear && !LastOperationIsPush)
            return true;
    }
    bool IsFull()
    {
        if (front == rear && LastOperationIsPush)
            return true;
    }
    void push(T elem)
    {
        if (IsFull() && !rear)
        {
            rear = 0;
        }
        else
        {
        }
        arr[rear] = elem;
        rear++;

        LastOperationIsPush = true;
    }
    void pop()
    {
        if (IsEmpty() && !front)
        {
            front = 1;
        }
        else
        {
            arr[front] = 0;
            front++;
        }

        LastOperationIsPush = false;
    }
    void Front()
    {
        if (!IsEmpty())
            printf("%c\n", arr[front]);
    }
    void Rear()
    {
        if (!IsEmpty())
            printf("%c\n", arr[rear - 1]);
    }
};

int main(void)
{
    Circular_Queue<char> ex;
    ex.push('a');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.push('b');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.push('c');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.push('d');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.push('e');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.push('f');
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();
    printf("\n");
    ex.pop();
    ex.Front();
    ex.Rear();

    return 0;
}