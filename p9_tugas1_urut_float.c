#include <stdio.h>

#define JUMLAH 12

/* Mengurutkan array float secara menaik (bubble sort) memakai pointer */
void urutkan(float *data, int n)
{
    int i, j;
    float tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(data + j) > *(data + j + 1)) {
                tmp = *(data + j);
                *(data + j) = *(data + j + 1);
                *(data + j + 1) = tmp;
            }
        }
    }
}

int main(void)
{
    float angka[JUMLAH] = {8.5f, 2.25f, 9.75f, 1.5f, 6.0f, 3.14f,
                           7.8f, 0.5f, 4.4f, 5.55f, 10.1f, 2.0f};
    float *p;
    int i;

    printf("Data sebelum diurutkan:\n");
    for (i = 0; i < JUMLAH; i++)
        printf("%.2f ", angka[i]);
    printf("\n\n");

    urutkan(angka, JUMLAH);

    printf("Data setelah diurutkan (indeks array):\n");
    for (i = 0; i < JUMLAH; i++)
        printf("%.2f ", angka[i]);
    printf("\n\n");

    printf("Data setelah diurutkan (pointer):\n");
    for (p = angka; p < angka + JUMLAH; p++)
        printf("%.2f ", *p);
    printf("\n");
    return 0;
}
