#pragma once
#include <time.h>
void GuessGuess(){
    srand(time(NULL));
    int number=rand()%(5-100+1);
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
