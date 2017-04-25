//
//  main.c
//  TowOfHanoi
//
//  Created by slg on 2017/4/25.
//  Copyright © 2017年 slg. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void moveData(int n,char x,char y,char z){
    if (n == 1) {
        printf("%c---%c\n",x,z);
    }else{
        moveData(n-1, x, z, y);
        printf("%c---%c\n",x,z);
        moveData(n-1, y, x, z);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int num;
    printf("请输入移动数目：");
    scanf("%d",&num);
    printf("移动步骤：\n");
    moveData(num, 'X', 'Y', 'Z');
    return 0;
}
