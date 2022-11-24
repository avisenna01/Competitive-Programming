#include <stdio.h>
#include <stdlib.h>

typedef struct {
        int *array;
        int used_size;
        int actual_size;
    } Array;

void initArray(Array *a, int size) {
    a->array = malloc(size * sizeof(int));
    a->used_size = 0;
    a->actual_size = size;
}

void insertElement(Array *a, int element) {
    if (a->used_size == a->actual_size){
        a->actual_size *= 2;
        a->array = realloc(a->array, a->actual_size * sizeof(int));
    }
    a->array[a->used_size++] = element;
}

void deleteArray(Array *a) {
    free(a->array);
    a->array = NULL;
    a->used_size = a->actual_size = 0;
}


int main(){

    Array n, m;
    int temp;
    int i = 0, j = 0;

    initArray(&n,1000);
    initArray(&m,1000);

    while (temp != -9) {
        scanf("%d",&temp);
        insertElement(&n,temp);
        i++;
    }
    i = 0;
    temp = 0;
    while (temp != -9){
        scanf("%d",&temp);
        insertElement(&m,temp);
        i++;
    }
    i = 0;

    while (i+1!=n.used_size || j+1!=m.used_size) {
        if (n.array[i]!=-9 && m.array[j]!=-9) {
            if (n.array[i] < m.array[j]) {
                printf("%d ",n.array[i]);
                i++;
            }
            else {
                printf("%d ",m.array[j]);
                j++;
            }
        }
        else if (n.array[i]==-9) {
            printf("%d ",m.array[j]);
            j++;
        }
        else if (m.array[j]==-9) {
            printf("%d ",n.array[i]);
            i++;
        }

    }

    printf("\n");

    return 0;
}