#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
	Node* prev;
	Node(int data)
	{
		this->left = NULL;
		this->right = NULL;
		this->prev = NULL;
		this->data = data;
	}
};

class List
{
private:
	Node* root = nullptr;
public:
	void Insert(int data)
	{
		Node* CurrNode;
		Node* PrevNode;
		Node* NewNode = new Node(data);

		if (root == NULL)
		{
			root = NewNode;
		}
		else
		{
			CurrNode = root;
			while (1)
			{
				if ((CurrNode->data) < (NewNode->data))
				{
					if (CurrNode->right == NULL)
					{
						CurrNode->right = NewNode;
						NewNode->prev = CurrNode;
						PrevNode = CurrNode;
						break;
					}
					CurrNode = CurrNode->right;
				}
				else if ((CurrNode->data) > (NewNode->data))
				{
					if (CurrNode->left == NULL)
					{
						CurrNode->left = NewNode;
						NewNode->prev = CurrNode;
						PrevNode = CurrNode;
						break;
					}
					CurrNode = CurrNode->left;
				}
				else
				{
					break;
				}
			}
		}
	}
	void Delete(int data)
	{
		Node* CurrNode;
		Node* PrevNode;

		if (root == NULL)
		{

		}
		else
		{
			CurrNode = root;
			while (1)
			{
				if (CurrNode->data == data)
				{
					PrevNode = CurrNode->prev;
					break;
				}
				else
				{
					if (CurrNode->data < data)
					{
						CurrNode = CurrNode->right;
					}
					else if (CurrNode->data > data)
					{
						CurrNode = CurrNode->left;
					}
				}
			}

			if (CurrNode->left == NULL && CurrNode->right == NULL)
			{
				if (PrevNode->right == CurrNode)
				{
					PrevNode->right = NULL;
				}
				else if (PrevNode->left == CurrNode)
				{
					PrevNode->left = NULL;
				}
			}
			else if (CurrNode->left != NULL && CurrNode->right == NULL)
			{
				if (CurrNode->data < PrevNode->data)
				{
					PrevNode->left = CurrNode->left;
				}
				else
				{
					PrevNode->right = CurrNode->left;
				}

			}
			else if (CurrNode->right != NULL && CurrNode->left == NULL)
			{
				if (CurrNode->data < PrevNode->data)
				{
					PrevNode->left = CurrNode->right;
				}
				else
				{
					PrevNode->right = CurrNode->right;
				}
			}
			else if (CurrNode->left != NULL && CurrNode->right != NULL)
			{
				Node* TempNode = CurrNode;

				CurrNode = CurrNode->right;
				while (CurrNode->left != NULL)
				{
					CurrNode = CurrNode->left;
				}
				TempNode->data = CurrNode->data;
				CurrNode->prev->left = NULL;

			}
		}
	}
	void Find(int data)
	{
		Node* CurrNode;

		if (root == NULL)
		{
			
		}
		else
		{
			CurrNode = root;
			while (1)
			{
				if (CurrNode == root)
				{
					cout << "Path : ";
				}
				if (CurrNode->data == data)
				{
					cout << CurrNode->data;
					break;
				}
				else
				{
					if (CurrNode->data < data)
					{
						cout << CurrNode->data;
						CurrNode = CurrNode->right;
						if (CurrNode == NULL)
						{
							break;
						}
						cout << "->";
					}
					else if (CurrNode->data > data)
					{
						cout << CurrNode->data;
						CurrNode = CurrNode->left;
						if (CurrNode == NULL)
						{
							break;
						}
						cout << "->";
					}
					else
					{
						continue;
					}
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
		else if (command == 2)
		{
			cin >> num;
			tree.Delete(num);
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