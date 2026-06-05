#include <stdio.h>
#include <stdlib.h>

void r_and_update(long long* p, long long* q)
{
    long long temp = 3 * (*p) + 8 * (*q);
    *q = (*p) + 3 * (*q);
    *p = temp;
}

int main()
{
    long long p = 3;
    long long q = 1;
    long long* pp = &p;
    long long* pq = &q;
    printf("p_1 = 3, q_1 = 1\n");
    for (int i = 2; i < 11; i++)
    {
        r_and_update(pp, pq);
        printf("p_%d = %lld, q_%d = %lld\n", i, *pp, i, *pq);
    }
    return 0;
}