#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};

class List
{
private:
    Node *head = nullptr;

public:
    void Insert(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *currnode = head;
            while (1)
            {
                if (currnode->next == NULL)
                {
                    currnode->next = newnode;
                    break;
                }
                currnode = currnode->next;
            }
        }
    }
    void Find(int data)
    {
        Node *currnode;
        cout << "Path : ";
        if (head == NULL)
        {
        }
        else
        {
            currnode = head;
            while (1)
            {
                if (currnode->data == data)
                {
                    cout << currnode->data;
                    break;
                }
                else
                {
                    cout << currnode->data;
                    currnode = currnode->next;
                    if (currnode == NULL)
                    {
                        break;
                    }
                    cout << "->";
                }
            }
            cout << endl;
        }
    }
};

int main(void)
{
    int command = 0, num;

	List tree;

	while (command != 4)
	{
		cout << "Enter Any Command(1:Insert, 2:Delete, 3:Find, 4:Exit): ";
		cin >> command;
		if (command == 1)
		{
			cin >> num;
			tree.Insert(num);
		}
		else if (command == 3)
		{
			cin >> num;
			tree.Find(num);
		}
		else
		{
			continue;
		}
	}

    return 0;
}