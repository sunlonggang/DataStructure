//
//  main.c
//  Tree
//
//  Created by slg on 2017/5/4.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct TNode{
    ElemType data;
    struct TNode* lchild;
    struct TNode* rchild;
} TNode,*Tree;


void CreateTree(Tree* T){
    char c;
    scanf("%c",&c);
    if (c == ' ') {
        *T = NULL;
    }else{
        *T = (Tree)malloc(sizeof(TNode));
        (*T)->data = c;
        CreateTree(&((*T)->lchild));
        CreateTree(&((*T)->rchild));
    }
}

void visit(char c, int lever){
    printf("%c在第%d层\n",c,lever);
}

void PreOrder(Tree T,int lever){
    if (T) {
        visit(T->data, lever);
        PreOrder(T->lchild,lever+1);
        PreOrder(T->rchild, lever+1);
    }
}

void MidOrder(Tree T,int lever){
    if (T) {
        MidOrder(T->lchild, lever+1);
        visit(T->data, lever);
        MidOrder(T->rchild, lever+1);
    }
}

void PostOrder(Tree T,int lever){
    if (T) {
        PostOrder(T->lchild, lever+1);
        PostOrder(T->rchild, lever+1);
        visit(T->data, lever);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    int leve = 1;
//    TNode node;
    Tree pNode;
    printf("开始输入\n");
    CreateTree(&pNode);
    printf("输入结束\n");
//    PreOrder(pNode, leve);
//    MidOrder(pNode, leve);
    
    PostOrder(pNode, leve);
    return 0;
}
