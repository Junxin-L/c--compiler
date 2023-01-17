#include "AsmCode.h"
#include <stdlib.h>

//把每一条目标代码都当作一个链表的结点，这个函数就是在新建链表结点。
AsmCode* createAsmCode(char* code, bool tab) {
    AsmCode* asmCode = (AsmCode*)malloc(sizeof(AsmCode));
    asmCode->code = code;
    asmCode->tab = tab;
    asmCode->next = NULL;
    return asmCode;
}