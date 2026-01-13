#include<stdio.h>
int a[8][8]={0};
int safe(int row, int col){
int i,j;

for(int i=0;i<row;i++){
if(a[i][col]==1)
return 0;
}

for(int i=row,j=col;i>=0,j<8;i--,j++){
if(a[i][j]==1)
return 0;
}

for(int i=row,j=col;i>=0,j>=8;i--,j--){
if(a[i][j]==1)
return 0;
}

return 1;
}

int place(int row){
int col;
if(row==8)
return 1;

for(col=0;col<8;col++){
if(safe(row,col)){
a[row][col]=1;

if(place(row+1))
return 1;
a[row][col]=0;
}}
return 0;
}
void print(){
for(int i=0;i<8;i++){
for(int j=0;j<8;j++){
printf("%d",a[i][j]);
}
printf("\n");
}}

int main(){
  if(place(0)){
  print();
  }else{
  printf("Condition not found");}
  return 0;
}
