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
    delete(&sl ,2);
    printSkipList(&sl);
    printf("contains 3: %d, contains 2: %d\n",contains(&sl,3),contains(&sl,2));

    return 0;
}
