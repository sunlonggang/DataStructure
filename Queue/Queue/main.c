//
//  main.c
//  Queue
//
//  Created by slg on 2017/4/25.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

#define MaxNum 10

typedef int ElemType;

typedef struct {
    ElemType* start;
    ElemType* end;
    int size;
} queue;

void initQueue(queue* list){
    list->start = (ElemType*)malloc(sizeof(ElemType)*MaxNum);
    if (list->start == NULL) {
        printf("init fail \n");
        exit(0);
    }else{
        printf("init success\n");
        list->end = list->start;
        list->size = MaxNum;
    }
}

void getData(queue list){
    if (list.end == list.start) {
        printf("no data\n");
    }else{
        printf("have data\n");
        ElemType* p =list.start;
        while (p != list.end) {
            printf("%d\n",*p);
            p--;
        }
    }
}

void pop(queue* list){
    list->start--;
}

void push(queue* list,ElemType e){
    *(list->end) = e;
    list->end--;
}

//void initQue

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    queue list;
    initQueue(&list);
    push(&list, 111);
    push(&list, 222);
    push(&list, 333);
    getData(list);
    
    printf("after pop\n");
    pop(&list);
    getData(list);
    return 0;
}
