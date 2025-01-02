#include<stdio.h>

struct complex {

    int i ;
    int j ;
};

typedef struct complex2{
    int i ;
    int j;
} comp;     


int main(){
    //Q5
    struct complex c1 ={ 1 , 2};

    printf("The value of complex without typedef use is %d + %dj \n", c1.i  , c1.j );



    // Q 7
    comp c2 = { 2 , 3};

    printf("The value of complex with typedef use is %d + %dj \n", c2.i , c2.j );



    return 0;

}