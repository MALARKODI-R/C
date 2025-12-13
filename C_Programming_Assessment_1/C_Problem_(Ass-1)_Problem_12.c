#include <stdio.h>
int main() {
    int x;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    printf("%d%d",x%10,x/10);
}
