#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Node
{
public:
    int data;
    string name;
    Node *next;
    Node(int data, string name)
    {
        this->next = NULL;
        this->data = data;
        this->name = name;
    }
};

class Loaded_LIST
{
private:
    Node *head = nullptr;

public:
    void Insert(int data, string name)
    {
        Node *newnode = new Node(data, name);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *currnode = head;
            while (currnode->next != NULL)
            {
                currnode = currnode->next;
            }
            currnode->next = newnode;
        }
    }
    void Find(int data, string name)
    {
        Node *currnode;
        cout << "Path : ";
        if (head == NULL)
        {
        }
        else
        {
            currnode = head;
            while (currnode->data != data)
            {
                cout << currnode->data << "->";
                currnode = currnode->next;
            }
            cout << currnode->data << endl;
        }
    }
    void Delete(int data, string name)
    {
        Node *currnode;
        Node *prevnode;

        if (head == NULL)
        {
        }
        else
        {
            currnode = head;
            while (currnode->data != data)
            {
                prevnode = currnode;
                currnode = currnode->next;
            }
            prevnode->next = currnode->next;
        }
    }
};

int main(int argc, char **argv)
{
    string str_buf;
    fstream fs;

    fs.open("C++\\Linked_List\\filesnumbers.csv", ios::in);
    fs.seekp(3, ios::beg);

    while (!fs.eof())
    {
        getline(fs, str_buf, ',');
        cout << str_buf << endl;
    }
    fs.close();

    int command = 0, num;
    Loaded_LIST list;

    while (command != 4)
    {
        cout << "Enter Any Command(1:Insert, 2:Delete, 3:Find, 4:Exit): ";
        cin >> command;
        if (command == 1)
        {
            cin >> num;
            list.Insert(num, str_buf);
        }
        else if (command == 2)
        {
            cin >> num;
            list.Delete(num, str_buf);
        }
        else if (command == 3)
        {
            cin >> num;
            list.Find(num, str_buf);
        }
        else
        {
            continue;
        }
    }

    return 0;
}