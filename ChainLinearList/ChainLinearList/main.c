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


//int getElemType(LinkList list,int num){
//    Node* p;
//    p = list;
//    for (int i = 0; i<num; i++) {
//        p = p
//    }
//}

//int insertData(LinkList list ,int num ,ElemType e){
//    
//    LinkList p;
//    p = *list;
//    for (int i = 0; i<num; i++) {
//    }
//    return 1;
//}

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
    }else{
        printf("main init fail\n");
    }
    
    
    
    return 0;
}
