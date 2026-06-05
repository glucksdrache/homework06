#include<stdio.h>
#include<stdlib.h>
int main() {
   int  i;
   int  A[600];
   srand(10);
   for(i=0;i<600;i++) A[i]=rand()%100;

   return 0;
}
