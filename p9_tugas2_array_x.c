#include <stdio.h>

#define N 12

int main(void)
{
    char kotak[N][N];
    char *p;
    int i, j;

    /* Isi seluruh elemen dengan 'X' */
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            kotak[i][j] = 'X';

    /* Tampilkan dengan notasi pointer, satu baris per baris keluaran */
    for (i = 0; i < N; i++) {
        p = *(kotak + i);
        for (j = 0; j < N; j++)
            printf("%c", *(p + j));
        printf("\n");
    }
    return 0;
}
