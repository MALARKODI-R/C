#include <stdio.h>
int main() {
    int x;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    x%=100;
    x/=10;
    printf("Result=%d",x);
}
