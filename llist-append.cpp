/*
 *******************************************
 *      * AUTHOR : Nihan_Khan *            *
 *      * NICK : NullByte     *            *
 *      * CREATED:   22.04.2022 02:58:13   *
 *******************************************
*/
#include <bits/stdc++.h>

using namespace std;

struct Node 
{
	int data;
	Node *next;
};

struct linkedlist 
{
	Node *head;
};

Node *createNode(int item, Node *next)
{
	Node *newNode = new Node();

	if (newNode == NULL)
	{
		perror("Error! Could not create new Node !");
		exit(1);
	}

	newNode-> data = item;
	newNode-> next = next;

	return newNode;
}

Node *append(Node *head, int item)
{
	Node *newNode = createNode(item, NULL);

	if (head == NULL)
	{
		return newNode;
	}

	Node *currentNode = head;

	while(currentNode-> next != NULL)
	{
		currentNode = currentNode-> next;
	}

	currentNode-> next = newNode;

	return head;
}

void printll(Node *head)
{
	Node *currentNode = head;

	while(currentNode != NULL)
	{
		cout << currentNode-> data << " ";

		currentNode = currentNode-> next;
	}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    linkedlist *llist = new linkedlist();
    llist-> head = NULL;

    int tt, item;
    
    Node *head;

    cin >> tt;

    for (int i = 0; i < tt; i++)
    {
    	cin >> item;

    	head = append(llist-> head, item);
    	llist-> head = head;
    }

    printll(llist-> head);

    return 0;
}
