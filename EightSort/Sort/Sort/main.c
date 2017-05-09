//
//  main.c
//  Sort
//
//  Created by slg on 2017/5/2.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void quickSort(int a[],int left,int right){

    if (left<right) {
        int i = left;
        int j = right;
        int tmp = a[i];
        while (i<j) {
            while (i<j && a[j]>=tmp) {
                j--;
            }
            if (i<j) {
                a[i++] = a[j];
                
            }
            while (i<j && a[i]<tmp) {
                i++;
            }
            if (i<j) {
                a[j--] = a[i];
            }
        }
        a[i]=tmp;

        printArr(a);
        quickSort(a, left, i-1);
        quickSort(a, i+1, right);
    }
}

//void quick_sort(int s[], int l, int r)
//{
//    if (l < r)
//    {
//        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
//        int i = l, j = r, x = s[l];
//        while (i < j)
//        {
//            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
//                j--;
//            if(i < j)
//                s[i++] = s[j];
//            
//            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
//                i++;
//            if(i < j)
//                s[j--] = s[i];
//        }
//        s[i] = x;
//        printArr(s);
//        quick_sort(s, l, i - 1); // 递归调用
//        quick_sort(s, i + 1, r);
//    }
//}

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    int a[] = {8,3,9,10,7,1,5,10,2,11,13,18,3,6,20,5,21,6,17,5};
//    int a[] = {9,8,7,6,5,4,3,2,1,0};
    
//    bubblingSort(a);
    
//    insertSort(a);
    
//    selectSort(a);
//    quick_sort(a, 0, MAXNUM-1);
    quickSort(a, 0, MAXNUM-1);
    
    return 0;
}

