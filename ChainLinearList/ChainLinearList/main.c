//
//  main.c
//  ChainLinearList
//
//  Created by slg on 2017/4/19.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef int ElemType;

typedef struct {
    ElemType data;
    struct Node* next;
} Node,*LinkList;

//typedef struct Node* LinkList;


int getElemType(LinkList list,int num){
    Node* p;
    p = list->next;
    int i= 1;
    while (p != NULL) {
        printf("%d===%d\n",i,p->data);
        i++;
        p=p->next;
    }
    return 1;
}


//尾插法 单数据插入
int insertData(LinkList list ,int num ,ElemType e){
    
    LinkList p;
    p = (LinkList)malloc(sizeof(Node));
    
    LinkList node  = list;
    
    while (node->next != NULL) {
        node = node->next;
    }
    p->data = num;
    p->next = NULL;
    node->next = p;
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

//尾插法 多数据插入
void insertTailData(Node* list){
    int num = 0;//插入数据个数
    ElemType data = 0; //插入数据
    printf("请插入数据个数:");
    scanf("%d",&num);
    Node* p;
    
    Node* newList = list;
    for (int i = 1; i<= num; i++) {
        p = (Node*)malloc(sizeof(Node));
        if (p == NULL) {
            printf("insert fail");
            exit(0);
        }
        printf("请输入%d个数",i);
        scanf("%d",&data);
        p->data = data;
        newList->next = p;
        newList = p;
    }
    newList->next = NULL;
}

//头插法
void insertHeadData(Node* list){
    int num = 0;
    ElemType data = 0;
    printf("请输入数据个数:");
    scanf("%d",&num);
    Node* pnew;

    for (int i = 1; i<=num; i++) {
        pnew = (Node*)malloc(sizeof(Node));
        if (pnew == NULL) {
            printf("insert fail");
            exit(0);
        }
        printf("请输入%d个数",i);
        scanf("%d",&data);
        pnew->data = data;
        pnew->next = list->next;
        list->next = pnew;
    }
}

//设置循环链表

void setRingChain(Node* list){
    int num = 0;
    printf("设置环形：");
    scanf("%d",&num);
    Node* node = list->next;
    Node* p = NULL;
    int i =1;
    while (node->next != NULL) {
        if (i == num) {
            p = node;
        }
        node = node->next;
        i++;
    }
    node->next = p;
}

void  checkRing(Node* list){
    int num1=1,num2=2;
    Node* p1 = NULL;
    Node* p2 = NULL;
    p2 = p1 = list->next;
    p2 = p2->next;
    while (p2->next != NULL) {
        while (p1 != p2) {
            num1 ++;
            p1 = p1->next;
        }
        printf("num1 ==%d ===%d\n",num1,num2);
        if (num1 == num2) {
            num1 = 1;
            num2++;
            p1 = list->next;
            p2 = p2->next;
        }else{
            printf("ring exist\n");
            return;
        }

    }
    printf("no ring\n");
}


//void
int main(int argc, const char * argv[]) {
    // insert code here...
    
    LinkList list;
    list = initLink();
    if (list != NULL) {
        printf("success\n");
//        printf("%p\n",list);
    }else{
        printf("main init fail\n");
    }
    
    /*尾插法单数据插入
    insertData(list, 555, 0);
    insertData(list, 444, 0);
    insertData(list, 333, 0);
    insertData(list, 111, 0);
    insertData(list, 99, 0);
     */
    
    //尾插法多数据插入
    insertTailData(list);
    
    //头插法
//    insertHeadData(list);
    //得到链表数据
    getElemType(list,0);
//    setRingChain(list);
    checkRing(list);
    return 0;
}
