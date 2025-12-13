#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter a  digit number: ");
    scanf("%d",&x);
    y=x-5;
    z=y%100;
    printf("%d",(5*(z%2))+y);
}
