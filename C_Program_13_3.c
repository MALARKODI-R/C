#include<stdio.h>
#include<stdlib.h>
struct student{
	int id;
	struct student *next;
};
int main(){
	struct student *head=NULL,*t,*n,*p;
	int i,ref,del;
	for(i=1;i<=5;i++){
		n=malloc(sizeof(struct student));
		n->id=i;
		n->next=NULL;
		if(head==NULL)
			head=t=n;
		else{
			t->next=n;
			t=n;
		}
	}
	scanf("%d",&ref);
	n=malloc(sizeof(struct student));
	scanf("%d",&n->id);
	t=head;
	while(t&&t->id!=ref)
		t=t->next;
	if(t){
		n->next=t->next;
		t->next=n;
	}
	scanf("%d",&del);
	t=head;
	p=NULL;
	while(t&&t->id!=del){
		p=t;
		t=t->next;
	}
	if(t){
		if(t==head)
			head=t->next;
		else
			p->next=t->next;
		free(t);
	}
	for(t=head;t;t=t->next)
		printf("%d ",t->id);
}
