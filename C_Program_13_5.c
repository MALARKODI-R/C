#include<stdio.h>
#include<stdlib.h>
struct student{
	int id;
	int maths;
	int science;
	struct student *next;
};
int main(){
	struct student *front=NULL,*rear=NULL,*n,*t,*p;
	int ch;
	do{
		scanf("%d",&ch);
		if(ch==1){
			n=malloc(sizeof(struct student));
			scanf("%d%d%d",&n->id,&n->maths,&n->science);
			n->next=NULL;
			if(front==NULL)
				front=rear=n;
			else{
				rear->next=n;
				rear=n;
			}}
		else if(ch==2){
			if(front){
				t=front;
				printf("%d %d %d\n",t->id,t->maths,t->science);
				front=front->next;
				if(front==NULL)
					rear=NULL;
				free(t);
			}}
		else if(ch==3){
			for(t=front;t;t=t->next)
				printf("%d %d %d\n",t->id,t->maths,t->science);
		}}while(ch!=4);
}
