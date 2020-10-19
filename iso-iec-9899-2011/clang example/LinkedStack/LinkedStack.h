#include <stdio.h>
#include <stdlib.h>

#define ElementType int
#define ERROR -99

typedef struct Node
{
    ElementType data;
    struct Node *next;
} LinkStack;

LinkStack* InitLinkStack();
int IsEmpty(LinkStack *s);
void Push(LinkStack *s, ElementType data);
ElementType Pop(LinkStack *s);
void PrintLinkStack(LinkStack *s);