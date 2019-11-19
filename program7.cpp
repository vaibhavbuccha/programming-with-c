/*
	7.Code to insert the node at the particular position in the linked list
*/

#include<stdio.h>
struct node *head=NULL;
//Pointer to store the staring node of the linked list
//Always stores the address location of first node
//Declared as global variable since it is accessed by multiple functions

struct node
{
    	//Structure named node to store integer in variable data and a pointer variable which can store address location of next node
    	int data;
    	struct node *next;
};

void insert(int data)
{
    	//This function will insert a new node to the start of the linked list
    	struct node *temp = (struct node*) malloc(sizeof(struct node));
    	temp->data=data;
    	temp->next=head;
    	head=temp;
}

void insert_at_position_n(int data,int position)
{
    	struct node *ptr = (struct node*) malloc(sizeof(struct node));
    	//Creating a new node
    	ptr->data=data;	

    	int i;
    	struct node *temp=head;
    	//Do not use the pointer variable head directly. If we use it, the address location of the first node in the linked list will be lost
    	//Pointer variable temp is used to traverse the linked list

    	if(position==1)
    {
        //Executed only if position is 1
        		//If position is 1, it is a special case because we need to nodify the head  pointer
        		ptr->next=temp;
        		//ptr->next=head is also valid;

        		head=ptr;
        		//Making head point to newly created node ptr
        		return;
    	}

    	//Function to insert node at position n in the linked list
    	//If we have  5nodes in the linked list, we can insert a new a node between any two nodes of the five nodes present in the linked list

    	for(i=1;i<position-1;i++)//Traversing to the (n-1)th position node in the linked list
    	{
        		temp=temp->next;
    	}

    	ptr->next=temp->next;
    	//Making the newly created node point to next node of pointer temp

    	temp->next=ptr;
    	//Making pointer temp point to newly created node in the linked list
}

void print()
{
    	struct node *temp=head;
    	printf("\nList:");
    	while(temp!=NULL)
    	{
		        printf("\n%d ",temp->data);
        		temp=temp->next;		
	    }
}

int main()
{

    	insert(1);
    	print();

    	insert(2);
    	print();

    	insert(3);
    	print();

	    insert_at_position_n(8,2);
    	//Function to insert node at positio n in the linked list with data
    	//Example : data-8 and position-2
    	print();

    	return 0;
}