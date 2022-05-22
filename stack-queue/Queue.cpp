#include <stdio.h>
#include <stdlib.h>

strcut Node * f = NULL;
strcut Node * r = NULL;

struct Node{
	int data;
	struct Node * next;
};
void linkedListTraversal(struct Node *ptr)
{
	printf("Printing the element of this linked list\n");
	while (ptr! = NULL){
		printf("Element: %d\n",ptr->data);
		ptr= ptr->next;

	}
}

void enqueue(int val){
	
	strcut Node * n=(strcut Node * )malloc(sizeof(strcut Node ));
	if(n==NULL){
		printf("Queue is Full");
	}
	else {
		n->data = val;
		n->next =NULL;
		if(f==NULL){
			f=r=NULL;
		}
		else{
			r->next = n;
			r=n;
		}
		
		
	}
}
int dequeue(){
	
	int val=-1;
	strcut Node * ;
	if(f==NULL){
		printf("Queue is Empty\n");
	}
	else {
		f = f->next;
		val = ptr->data;
		free(ptr);
		
		}
	return val;

		
		
	}
}

int main(){
	

	linkedListTraversal(f);
	printf("Dequeuing element %d\n",dequeue());
	enqueue(34);
	enqueue(4);
	enqueue(7);
	enqueue(17);
	printf("Dequeuing element %d\n",dequeue());
	printf("Dequeuing element %d\n",dequeue());
	printf("Dequeuing element %d\n",dequeue());
	linkedListTraversal(f;)
	
	return 0;
	
	
}
