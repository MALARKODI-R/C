#include <stdio.h>
void strcon(char src1[], char src2[], char dst[]) {
    int i = 0, j = 0;
    while(src1[i] != '\0') {
        dst[i] = src1[i];
        i++;
    }
    while(src2[j] != '\0') {
        dst[i] = src2[j];
        i++;
        j++;
    }
    dst[i] = '\0';
}
int main() {
    char str1[50], str2[50], result[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcon(str1, str2, result);
    printf("Concatenated string: %s\n", result);
}
