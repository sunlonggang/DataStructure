//
//  main.c
//  OrderLinearList
//
//  Created by slg on 2017/4/19.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>

#define MAXSIZE 20
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int length;
} Sqlist;

int getElemtype(Sqlist l,int i,ElemType* e){
    if (l.length != 0) {
        *e = l.data[i-1];
        return 1;
    }
    return 0;
}

int insertElem(Sqlist* l,int i, ElemType e){
    int num = l->length;
    do {
        l->data[num] = l->data[num-1];
        num--;
    } while (num>=i);
    l->data[i-1]= e;
    
    return 1;
}

int deleteElem(Sqlist* l,int i ,ElemType* e){
    *e = l->data[i-1];
    int num = i-1;
    do {
        l->data[num] = l->data[num+1];
        num++;
    } while (num<l->length);
    l->length--;
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    Sqlist list =
    
    return 0;
}
