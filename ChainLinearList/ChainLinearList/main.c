//
//  main.c
//  ChainLinearList
//
//  Created by slg on 2017/4/19.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;

typedef struct {
    ElemType data;
    struct Node* next;
} Node,*LinkList;

//typedef struct Node* LinkList;


int getElemType(LinkList list,int num){
    LinkList p;
    p = list;
    int i= 0;
    while (p->next != NULL) {
        printf("%d===%d\n",i,p->data);
        i++;
        p++;
    }
    return 1;
}

int insertData(LinkList list ,int num ,ElemType e){
    
    LinkList p;
    p = (LinkList)malloc(sizeof(Node));
    p->data = num;
    p->next = NULL;
    list->next = p;
    return 1;
}

LinkList initLink(void){
    Node* list;
    list = (LinkList)malloc(sizeof(Node));
    if (list == NULL) {
        printf("fail");
        exit(0);
    }
    list->next =NULL;
    return list;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    LinkList list;
    list = initLink();
    if (list != NULL) {
        printf("success\n");
        printf("%p\n",list);
    }else{
        printf("main init fail\n");
    }
    
    
    insertData(list, 555, 0);
    insertData(list, 444, 0);
    insertData(list, 99, 0);
    getElemType(list,0);
    
    return 0;
}
