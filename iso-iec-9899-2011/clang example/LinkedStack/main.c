#include "LinkedStack.h"

int main(int argc, const char * argv[]) {
    LinkStack* s;
    s = InitLinkStack();
    Pop(s);

    Push(s, 1);
    Push(s, 2);
    Push(s, 3);
    Push(s, 4);
    Push(s, 5);

    PrintLinkStack(s);

    Pop(s);
    Pop(s);

    PrintLinkStack(s);

    return 0;
}