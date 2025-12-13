#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a 3 digit number: ");
    scanf("%d",&x);
    y=x%100;
    printf("%d",100*(x/100)+(y%10));
}
