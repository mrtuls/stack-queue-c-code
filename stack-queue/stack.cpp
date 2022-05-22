#include <stdio.h>
#include <stdlib.h>

struct node { 
	int data;
	struct node * NODEPTR;
};

typedef struct node * NODEPTR;
 
NODEPTR getnode (){
	NODEPTR new;
	new= (NODEPTR)malloc(sizeof(struct node));
	return new;
}

NODEPTR push (NODEPTR first, int d){
	NODEPTR temp;
	temp=getnode();
	temp->data=d;
	temp->next=first;
	retunr temp;
	
}

NODEPTR pop(NODEPTR first) {
	NODEPTR temp;
	if (first==NULL){
		printf("stack is empty\ncannot perfom pop\n");
		return first;
	}
	temp=first;
	first=first->next;
	printf("elemnt popped from stack %d\n",temp->data);
	free(temp);
	return first;
	
}

displayStack(NODEPTR first){
	NODEPTR temp;
	if (first==NULL){
		printf("stack is empty\n");
		return;
	}
	temp=first;
	printf("\n\n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;//i++
	}
	printf("\n");
}

int main(int argc, char const *argv[]) {
	NODEPTR first=NULL;
	int choice;
	int e;
	while(1) {
		printf("\n1 push \n2 pop \n3 display \n4 exit\n");
		scanf("%d",&choice);
		switch (choice) {
			case 1:
				printf("enter element to push onto stack\n");
				scanf("%d",&e);
				first=push(first,e);
				break;
				
			case 2:
				first=pop(first);
				break;
			
			case 3:
				displayStack(fisrt);
				break;
				
			case 4:
				exit(1);
						
		}
	}
	
	
	
	return 0;
}
