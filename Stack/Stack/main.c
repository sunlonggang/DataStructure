//
//  main.c
//  Stack
//
//  Created by slg on 2017/4/25.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 5

typedef double ElemType;

typedef struct {
    ElemType* top;
    ElemType* base;
    int size;
}StackList;


void initStack(StackList* list){
    
    list->base = (ElemType*)malloc(MAXNUM*sizeof(ElemType));
    if (list->base ==NULL) {
        printf("init fail\n");
        exit(0);
    }else{
        printf("success\n");
    }
    list->top = list->base;
    list->size = MAXNUM;
}

void getData(StackList list){
    if (list.base == list.top) {
        printf("empty stack\n");
        return;
    }else{
        printf("stack have data\n");
        
        ElemType* p = list.top;
        while (p-- != list.base) {
            printf("%.0f\n",*p);
        }
    }
}

void push(StackList* list,ElemType e){
    *(list->top) = e;
    list->top++;
    
}

void pop(StackList* list){
//    *(list->top) = 0;
    list->top--;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    StackList list;
    initStack(&list);
    push(&list, 333);
    push(&list, 444);
    push(&list, 555);
    getData(list);
    printf("after pop\n");
    pop(&list);
    getData(list);
    return 0;
}
