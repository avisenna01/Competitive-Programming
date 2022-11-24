#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *array, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j+1],&array[j]);
            }
        }
    }

}

int getIdxofLargestElement(int *array, int n) {
    if (n <= 0) return -1;

    int max = 0;
    int max_idx = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] >= max) {
            max = array[i];
            max_idx = i;
        }
    }

    return max_idx;

}

int main() {

    int *array, *count;

    array = malloc(100000 * sizeof(int));
    count = malloc(1001 * sizeof(int));

    for (int i = 0; i < 10000; i++) {
        array[i] = 0;

        if (i<=1001) {
            count[i] = 0;
        }
    }

    int i = 0, inp = 0;

    while (inp!=-9) {
        scanf("%d",&inp);
        array[i] = inp;
        i++;
    }

    i = 0;

    while (array[i]!=-9){
        count[array[i]]++;
        // printf("%d %d\n",array[i], count[array[i]]);
        i++;
    }

    // sorting
    // bubbleSort(count,1001);

    printf("%d\n",getIdxofLargestElement(count,1001));

    return 0;
}