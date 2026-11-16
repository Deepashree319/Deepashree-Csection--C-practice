#include<stdio.h>
int main() {
   FILE*fp;
   fp=fopen("student.txt","w");
   fprint(fp,"Name:Deepa\n");
   fprint(fp,"Age:17\n");
   fprint(fp,"Karpagam college of engineering");
   fprint(fp,"Department:ECE");
   fclose(fp);
   return 0;}
   
  
