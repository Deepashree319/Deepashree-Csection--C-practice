#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("data.txt","w");
    fprintf(fp,"hii im aswin");
    fclose(fp);
    printf("File created successfully");
    return 0;
 }
