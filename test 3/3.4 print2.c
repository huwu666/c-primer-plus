#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long  verybig = 12345678908642;

    printf("un = is %u and not %d\n",un,un);
    printf("end = is %hd and  %d\n",end,end);
    printf("verybig = is %lld and not %ld\n",verybig,verybig); 
    
    return 0;
}