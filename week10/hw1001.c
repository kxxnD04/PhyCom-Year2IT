#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct DataNode
{
    char* data;
    struct DataNode* next;
} DataNode;
DataNode* createDataNode(char* data);

typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList;
void insert_front(SinglyLinkedList* list, char* data);
void delete_(SinglyLinkedList* list, char* data);
SinglyLinkedList* createSinglyLinkedList();
void traverse(SinglyLinkedList* list);
void insert_last(SinglyLinkedList* list, char* data);

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);
        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete_(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
    // Remember to free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}


DataNode* createDataNode(char* data) {

  DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));


  newNode->data = (char*)malloc(strlen(data) + 1);
  strcpy(newNode->data, data);

  newNode->next = NULL;
  return newNode;
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
    DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}


void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode* pointer = list->head;
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        pNew->next = list->head;
        list->head = pNew; 
    }
    list->count++;
}

void delete_(struct SinglyLinkedList* list, char* data) {
    struct DataNode* current = list->head;
    struct DataNode* previous = NULL;

    if(list->count == 0){
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }

    while (current != NULL && strcmp(current->data, data) != 0 )
    {
        previous = current;
        current = current->next;
    }

    if(current == NULL){
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
    if (previous == NULL) {
        list->head = current->next;
    }else {
       previous->next = current->next;
    }


    free(current->data);
    free(current);
    list->count--;
}

