#include <stdio.h>
int main() {
    int x;
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    x%=10;
    printf("Result=%d",x);
}
