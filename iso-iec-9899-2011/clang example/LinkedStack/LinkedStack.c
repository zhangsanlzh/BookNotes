#include "LinkedStack.h"

//初始化堆栈
LinkStack *InitLinkStack()
{
    LinkStack *s;
    s = (LinkStack *)malloc(sizeof(LinkStack));
    if (!s)
    {
        printf("空间不足\n");
    }
    s->next = NULL;
    return s;
}

int IsEmpty(LinkStack *s)
{
    return (s->next == NULL);
}

void Push(LinkStack *s, ElementType data)
{
    LinkStack *cell;
    cell = (LinkStack *)malloc(sizeof(LinkStack));
    if (!cell)
    {
        printf("空间不足\n");
    }
    cell->data = data;
    cell->next = s->next;
    s->next = cell;
}

ElementType Pop(LinkStack *s)
{
    LinkStack *firstCell;
    ElementType topData;
    if (IsEmpty(s))
    {
        printf("空栈\n");
        return ERROR;
    }
    firstCell = s->next;
    s->next = firstCell->next;
    topData = firstCell->data;
    free(firstCell);
    return topData;
}

void PrintLinkStack(LinkStack *s)
{
    printf("当前栈中的元素:\n");
    LinkStack *p;
    p = s;
    while (p->next != NULL)
    {
        p = p->next;
        printf("%d\n", p->data);
    }
}