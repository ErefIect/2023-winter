#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    int target;
    scanf("%d", &target);
    
    bool isFound = false;
    for (int i = 0; i < n; ++i) {
        if (target == arr[i]) {
            isFound = true;
            break;
        }
    }
    
    if (isFound) {
        printf("I found %d in arr.\n", target);
    } else {
        printf("Can't find %d in arr.\n", target);
    }

    return 0;
}
