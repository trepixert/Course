typedef struct Node *List;

void insertFirst(List* head, int key, int data);

void add( List * head,int key, int data);

int del( List * head, int key);

int findDataByKey(List* head, int key);

void print(List * head);

void sort(List* head);
