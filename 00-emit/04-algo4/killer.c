#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HALF 5
#define N (HALF*2)

void shuffle(int*, int);
void swap(int*, int*);
static int comp(const void* a, const void* b) {
    return *(const int*)a < *(const int*)b;
}

int main()
{
    srand(time(0));
    int arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = i + 1;
    }
    for (int l = 1; l <= N; ++l) {
        shuffle(arr, l);
    }
    
    qsort(arr, HALF, sizeof(int), comp);
    printf("我的手牌: ");
    for (int i = 0; i < HALF; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr + HALF, HALF, sizeof(int), comp);
    printf("你的手牌: ");
    for (int i = HALF; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void shuffle(int* arr, int l) {
    srand(rand());
    int i = rand() % l;
    swap(arr + i, arr + l - 1);
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

