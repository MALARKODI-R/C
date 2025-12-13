#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter a  digit number: ");
    scanf("%d",&x);
    y=x-5;
    z=x%10;
    printf("%d",(z*(z%2))+y);
}
