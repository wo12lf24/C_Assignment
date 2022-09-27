#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

class Loaded_LIST_Node
{
public:
	string data;
	string name;
	Loaded_LIST_Node *next;
	Loaded_LIST_Node()
	{
		
	}
	Loaded_LIST_Node(string data, string name)
	{
		this->next = NULL;
		this->data = data;
		this->name = name;
	}
};

class Loaded_LIST
{
private:
	Loaded_LIST_Node *head = nullptr;

public:
	void Insert(string data, string name)
	{
		Loaded_LIST_Node *newnode = new Loaded_LIST_Node(data, name);
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			Loaded_LIST_Node *currnode = head;
			while (currnode->next != NULL)
			{
				currnode = currnode->next;
			}
			currnode->next = newnode;
		}
	}
	void Find(string data, string name)
	{
		Loaded_LIST_Node *currnode;
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
	void Delete(string data, string name)
	{
		Loaded_LIST_Node *currnode;
		Loaded_LIST_Node *prevnode;

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
	Loaded_LIST list;
	cout << "명령어를 입력하세요:";
	char cmd[10];
	cin >> cmd;
	string name_buf;
	string data_buf;
	int count = 0;
	if (strcmp(cmd, "LOAD") == 0)
	{
		fstream gs;
		gs.open("C++\\Linked_List\\filesnumbers.csv", ios::in);
		gs.seekp(3, ios::beg);
		if (gs.fail())
		{
			cout << "========ERROR========" << endl;
			cout << "100" << endl;
			cout << "=====================" << endl;
		}
		else
		{
			cout << "=======LOAD========" << endl;
			string temp = "0";

			while (!gs.eof())
			{
				getline(gs, data_buf, ',');
				getline(gs, name_buf, '\n');
				if (data_buf.empty())
					break;

				cout << name_buf << "/" << data_buf << endl;
				list.Insert(data_buf, name_buf);
				count++;
			}
			gs.close();
			cout << "===================" << endl;
		}
	}
	else if (strcmp(cmd, "ADD") == 0)
	{




	}
	list.Find("555", name_buf);
	cout << "count개수: " << count << endl;

	return 0;
}