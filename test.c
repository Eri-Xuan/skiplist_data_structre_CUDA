#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "skiplist_seq.h"

int main(void) {
    srand(time(NULL));

    SkipList sl;
    initSkipList(&sl);

    int arr[] = { 3, 6, 9, 2, 11, 1, 4 };
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        insert(&sl, arr[i]);
    }
    printSkipList(&sl);

    return 0;
}
