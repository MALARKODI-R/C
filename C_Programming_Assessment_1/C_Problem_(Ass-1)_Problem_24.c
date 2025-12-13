#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter a 3 digit number: ");
    scanf("%d",&x);
    z=x%100;
    y=(x/100)+(z/10)+(z%10);
    printf("%d",(y%10)+(y/10));
}
