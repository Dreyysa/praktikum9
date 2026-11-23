#include <stdio.h>

void tukar(int *a, int *b)
{
    int tmp;

    if (a == NULL || b == NULL)
        return;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int uji[4][2] = {{5, 9}, {-3, 12}, {100, 100}, {0, 42}};
    int i;

    for (i = 0; i < 4; i++) {
        int a = uji[i][0];
        int b = uji[i][1];

        printf("Uji %d | sebelum: a = %d, b = %d", i + 1, a, b);
        tukar(&a, &b);
        printf(" | sesudah: a = %d, b = %d\n", a, b);
    }
    return 0;
}
