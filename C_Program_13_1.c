#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};
int main() {
    struct student *head = NULL, *temp = NULL, *n;
    int id;
    while (1) {
        scanf("%d", &id);
        if (id == -1)
            break;
        n = (struct student *)malloc(sizeof(struct student));
        n->id = id;
        scanf("%d %d", &n->maths, &n->science);
        n->next = NULL;
        if (head == NULL)
            head = temp = n;
        else {
            temp->next = n;
            temp = n;
}}
temp = head;
while (temp != NULL) {
    printf("%d %d %d\n", temp->id, temp->maths, temp->science);
    temp = temp->next;
}}
