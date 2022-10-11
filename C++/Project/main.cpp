#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Loaded_LIST_Node
{
public:
	string data;
	string name;
	string directory;

	Loaded_LIST_Node *next;
	Loaded_LIST_Node *front;

	Loaded_LIST_Node(string directory)
	{
		this->next = NULL;
		this->front = NULL;
		this->directory = directory;
	}
	Loaded_LIST_Node(string data, string name, string directory)
	{
		this->next = NULL;
		this->front = NULL;
		this->data = data;
		this->name = name;
		this->directory = directory;
	}
};

class Loaded_LIST
{
private:
	Loaded_LIST_Node *head = nullptr;

public:
	void Insert(string directory)
	{
		Loaded_LIST_Node *newnode = new Loaded_LIST_Node(directory);
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			Loaded_LIST_Node *currnode = head;
			while (currnode->front != NULL)
			{
				currnode = currnode->next;
			}
			currnode->front = newnode;
		}
	}
	void Insert(string data, string name, string directory)
	{
		Loaded_LIST_Node *newnode = new Loaded_LIST_Node(data, name, directory);
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
	void Find(string name)
	{
		Loaded_LIST_Node *currnode;

		currnode = head;
		while (currnode->name != name)
		{
			currnode = currnode->next;
		}
		cout << currnode->name << currnode->data << endl;
	}
	void MODIFY(string data, string name, string directory)
	{
		Loaded_LIST_Node *currnode;
		Loaded_LIST_Node *prevnode;
		Loaded_LIST_Node *newnode = new Loaded_LIST_Node(data, name, directory);
		if (head == NULL)
		{
		}
		else
		{
			currnode = head;
			while (currnode->name != name)
			{
				prevnode = currnode;
				currnode = currnode->next;
			}
			prevnode->next = newnode;
			newnode->next = currnode->next;
		}
	}
	void Delete(string data, string name, string directory)
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

	string name;
	string data;
	string directory;
	string command[100];
	int count = 0;
	int len = 0;
	fstream tx;
	tx.open("C:\\Users\\wo12l\\VScode\\C++\\Project\\command.txt");
	

	while (1)
	{
		cout << "명령어를 입력하세요:";
		char cmd[10];
		cin >> cmd;
		if (strcmp(cmd, "LOAD") == 0)
		{
			list.Insert("img_files");

			fstream fs;
			fs.open("C:\\Users\\wo12l\\VScode\\C++\\Project\\img_files\\filesnumbers.csv", ios::in);
			fs.seekp(3, ios::beg);
			if (fs.fail())
			{
				cout << "========ERROR========" << endl;
				cout << "100" << endl;
				cout << "=====================" << endl;
			}
			else
			{
				cout << "=======LOAD========" << endl;
				string temp = "0";

				while (!fs.eof())
				{
					getline(fs, data, ',');
					getline(fs, name, '\n');
					len = name.length();
					name = name.substr(0, len - 4);
					if (data.empty())
						break;

					cout << name << " / " << data << endl;
					list.Insert(data, name, "img_files");
					count++;
				}
				fs.close();
				cout << "===================" << endl;
			}
		}
		else if(strcmp(cmd, "ADD") == 0)
		{

		}
		else if (strcmp(cmd, "MODIFY") == 0)
		{
			cin >> directory;
			getline(cin, name);
			data = name.substr(name.length() - 3);
			name = name.substr(2, name.length() - 7);
			if (directory == "\0" || data == "\0" || name == "\0")
			{
				cout << "========ERROR========" << endl;
				cout << "300" << endl;
				cout << "====================" << endl;
			}
			else
			{
				list.MODIFY(data, name, directory);
				cout << "=======MODIFY========" << endl;
				cout << "SUCCESS" << endl;
				cout << "====================" << endl;
			}
		}
		else if (strcmp(cmd, "EXIT") == 0)
		{
			cout << "=======EXIT========" << endl;
			cout << "SUCCESS" << endl;
			cout << "===================" << endl;
			break;
		}
		else
		{
			continue;
		}
	}
	list.Find(name);
	cout << "count개수: " << count << endl;

	return 0;
}