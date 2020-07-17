#pragma once
#include<stdlib.h>
struct node {
    int a;
    struct node* next;
};
typedef struct node NODE;
struct node* end = NULL;
struct node* head = NULL;