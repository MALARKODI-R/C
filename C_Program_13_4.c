#include<stdio.h>
#include<stdlib.h>
struct student{
	int id;
	int maths;
	int science;
	struct student *next;
};
int main(){
	struct student *top=NULL,*n,*t;
	int ch;
	do{
		scanf("%d",&ch);
		if(ch==1){
			n=malloc(sizeof(struct student));
			scanf("%d%d%d",&n->id,&n->maths,&n->science);
			n->next=top;
			top=n;
		}
		else if(ch==2){
			if(top){
				t=top;
				printf("%d %d %d\n",t->id,t->maths,t->science);
				top=top->next;
				free(t);}
		}
		else if(ch==3){
			for(t=top;t;t=t->next)
				printf("%d %d %d\n",t->id,t->maths,t->science);
		}}while(ch!=4);
}
