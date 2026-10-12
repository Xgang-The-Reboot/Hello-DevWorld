#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main(){
    int inttest[]={1,2,3,4,5,6,7,8,9,114514,325799};
    for (int i=0 ; i<11 ;i++){
        printf("%d\n",CheckPrime(inttest[i]));
    }
    return 0;
}
