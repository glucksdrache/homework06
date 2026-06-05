#include <stdio.h>
#include <stdlib.h>
#define ABS(a) (((a) > 0) ? (a) : (-a))

int L1_norm(int* A, int n, int m)
{
    int s_old = 0;
    for (int i = 0; i < m; i++)
    {
        int s_new = 0;
        for (int j = 0; j < n; j++)
        {
            s_new += ABS(*(A + i + j * m));
        }
        if ((s_old) < (s_new)) s_old = s_new;
    }
    return s_old;
}

int main() {
   int  i;
   int  A[600];
   srand(10);
   for(i=0;i<600;i++) A[i]=rand()%100;
   int L1_Norm = L1_norm(A, 20, 30);
   printf("矩阵A的L1范数是%d\n", L1_Norm);
   return 0;
}