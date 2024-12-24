#include<stdio.h>

int change(int a){
    a = 77;
    return 0;
}


int main(){

    int b = 22;
    change(b);              //✅ the value of b remains same 22 not change cuz in change(int a) it's provide copy of b to a not same  
    printf("b is %d", b);

    return 0;
}