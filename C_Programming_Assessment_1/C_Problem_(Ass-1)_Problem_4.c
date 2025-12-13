#include <stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x%=8;
    printf("Result=%d",x);
}
