#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
  char* data;
  struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList;

DataNode *createDataNode(char *text){
    DataNode* d = (DataNode*)malloc(sizeof(DataNode));
    d->data = (char*)malloc(strlen(text)*sizeof(char));
    strcpy(d->data, text);
    d->next = NULL;
    return d;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* s = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    s->count = 0;
    s->head = NULL;
    return s;
}


void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s", pointer->data);
        if (pointer->next != NULL){
            printf(" -> ");
        }
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *ptr = list->head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}
