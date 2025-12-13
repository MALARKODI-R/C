#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    y=x%1000;
    printf("%d",1000*(y/100)+100*(x/1000)+(y%100));
}
