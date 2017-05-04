//
//  main.c
//  Sort
//
//  Created by slg on 2017/5/2.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>

#define MAXNUM 20

static int x = 0;

void printArr(int* s){
    for (int i = 0; i<MAXNUM; i++) {
        printf("%d ",*(s+i));
    }
    printf("===%d\n",(x++));
}


//冒泡
void bubblingSort(int* s){
    for (int i = 0; i<MAXNUM; i++) {
        for (int j = 0; j<(MAXNUM-i); j++) {
            if (s[j]>s[j+1]) {
                int m = s[j];
                s[j] = s[j+1];
                s[j+1] = m;
            }
        }
        printArr(s);
    }
}

//快速排序 递归排序

//插入排序
//插入元素后移
void insertSort(int s[]){
    for (int i = 1; i<MAXNUM; i++) {
        int r = i;
        for (int j=(i-1); j>=0; j--) {
            if (s[r]<=s[j]) {
                int tmp = s[r];
                s[r] = s[j];
                s[j] = tmp;
                r--;
            }else{
                break;
            }
        }
        printArr(s);
    }
}

void selectSort(int s[]){
    for (int i = 0; i<MAXNUM; i++) {
        for (int j = i+1; j<MAXNUM; j++) {
            if (s[i]>s[j]) {
                int tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
        printArr(s);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    int a[] = {8,3,9,10,7,1,5,10,2,11,13,18,3,6,20,5,21,6,17,5};
//    int a[] = {9,8,7,6,5,4,3,2,1,0};
    
//    bubblingSort(a);
    
//    insertSort(a);
    
//    selectSort(a);
    
    
    
    return 0;
}

