#include <stdio.h>
int main() {
    int x;
    printf("Enter a 2 digit number: ");
    scanf("%d",&x);
    printf("%d",(x/10)+(x%10));
}
