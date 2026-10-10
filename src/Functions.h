#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void GuessGuess(){
    srand(time(NULL));///这一步是设定随机数种子
    int number=rand()%(5-100+1);//后面的算式是用来确定取值范围的
    printf("调试：本次游戏取：%d\n",number);
    puts("猜数游戏现在开始");
    int Gss;
    puts("展现你强运的时候到了，试试能不能一发入魂：");
    scanf("%d",&Gss);
    int Cnt=1;
    while (Gss!=number){
        if (Gss>number){
            puts("大了");
        }
        if(Gss<number){
            puts("小了");
        }
    Cnt++;
    puts("再猜一次？");
    scanf("%d",&Gss);
    }
    puts("恭喜，你猜对了");
    printf("猜了共计%d次",Cnt);
}

int Reverse(int x){
    /*要想对整数进行逆序，可以这么操作：
     * 输入任意整数 x
     * 当这个数字不是 0 的时候
     * 对其进行除以 10 取余操作，这样就是拆出其最后一位
     * 对其进行除以 10 操作，这样就是保留其非个位数字
     * 每一次处理完之后 不换行 打印当前取出来的位数？
     * 不行，这样的话就不能返回需要的值了
     * 可以选择对取出的数进行 *10 操作进行移位
     */
    int num0=0,ret=0;
    while (x!=0){
        num0=x%10;
        ret=ret*10+num0;
        x=x/10;
    }
    return ret;
}

int Step(int n){
    int ret=1;
    if (n<0){
        puts("输入了一个非法数值！将返回 -1 ");
        puts("错误类型：阶乘不能对负数生效");
        return -1;
    }else if(n>12){
        puts("输入了一个非法数值！将返回 -1 ");
        puts("错误类型：你的数太大了，算出来的结果超过了当前可处理的最大数值");
        return -1;
    }
    //下面提供了两个算法，一个是递增型，另一个是递减型
    for (int i=2 ; i<=n ; i++){
        ret = ret*i;
    }
    //for (int i2=n ; i2 >= 2 ; i2--){
    //    ret = ret*i2;
    //}
    //实测两个算法都能正常运行
    return ret;
}
