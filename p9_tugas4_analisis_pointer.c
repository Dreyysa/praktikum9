#include <stdio.h>

int main(void)
{
    int x;
    int *p;
    int **pp;

    x = 25;
    p = &x;
    pp = &p;

    printf("Nilai x          = %d\n", x);
    printf("Nilai *p         = %d\n", *p);
    printf("Nilai **pp       = %d\n", **pp);
    printf("\n");
    printf("Alamat x  (&x)   = %p\n", (void *)&x);
    printf("Isi p            = %p  (alamat x)\n", (void *)p);
    printf("Alamat p  (&p)   = %p\n", (void *)&p);
    printf("Isi pp           = %p  (alamat p)\n", (void *)pp);
    printf("Alamat pp (&pp)  = %p\n", (void *)&pp);
    printf("\n");
    printf("*pp == p  ? %s\n", (*pp == p) ? "ya" : "tidak");
    return 0;
}
