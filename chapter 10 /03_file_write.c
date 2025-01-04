#include<stdio.h>

int main(){

    // writing in file 

    FILE *ptr ;

    ptr = fopen("harry2.txt","w");      // w -> write in file 

    int num = 345;

    fprintf(ptr , "%d", num);    // 🚀 fprintf -> is used  to write data in a file using a stream object

    fclose(ptr);        // don't forgot to close the file . 


// Note -> if u used w (mode ) write mode in exsisting file in which already have data inside so u you write mode in which u written something in file the existing data will automatically remove from the file 
    return 0;
}