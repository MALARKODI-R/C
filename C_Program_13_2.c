#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};
int main() {
    struct student *head, *temp, *newnode;
    int ref_id;
    head = (struct student*)malloc(sizeof(struct student));
    head->id = 1; head->maths = 50; head->science = 60;
    head->next = NULL;
    temp = head;
    for (int i = 2; i <= 5; i++) {
        newnode = (struct student*)malloc(sizeof(struct student));
        newnode->id = i;
        newnode->maths = 50 + i;
        newnode->science = 60 + i;
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
    printf("Enter ID after which to insert: ");
    scanf("%d", &ref_id);
    newnode = (struct student*)malloc(sizeof(struct student));
    printf("Enter id maths science: ");
    scanf("%d %d %d", &newnode->id, &newnode->maths, &newnode->science);
    temp = head;
    while (temp != NULL && temp->id != ref_id)
        temp = temp->next;
    if (temp != NULL) {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    temp = head;
    while (temp != NULL) {
        printf("%d %d %d\n", temp->id, temp->maths, temp->science);
        temp = temp->next;
    }
}
