#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} List;

void list_init(List *list);
void list_push_front(List *list, int value);
void list_push_back(List *list, int value);
int list_search(List *list, int value);
void list_remove(List *list, int value);
void list_reverse(List *list);
void list_free(List *list);

#endif
