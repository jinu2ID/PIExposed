/* list.c
 * a simple singly linked list implemented in C
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
	struct node *next;
	int data;

};

bool insertInFront(int _data, node **head)
{

	node newNode = malloc(sizeof (struct node));
	if (!newNode)	// memory allocation error
	{
		printf("Unable to allocate memory\n");
		exit(1);
	}
	
	newNode->data = _data;
	newNode->next = *head;
	*head = newNode
	

}

// Testing linked list
int main()
{
	// Create root node
	struct node *root  = malloc(sizeof (struct node));

	// Create a list
	struct node *current = root;
	int i;
	for (i = 0; i < 10; i++){
		current->data = i;
		current->next = malloc(sizeof (struct node));
		current = current->next;
	}	 
	
	// Print list elements
	current = root;
	while (current->next != NULL){
		printf("%d\n", current->data);
		current = current->next;
	}
	
}
