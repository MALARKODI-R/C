#include<stdio.h>
void arrange_ascend(void);
int main(){
arrange_ascend();
return 0;
}
void arrange_ascend(void){
    int y[5]={0};
    int *x=y;
    for(int i=0;i<5;i++){
        scanf("%d",&y[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(*(x+i)>*(x+j)){
                int temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
        }
    }
}
    for(int i=0;i<5;i++){
         printf("%d ",*(x+i));
    }
}
