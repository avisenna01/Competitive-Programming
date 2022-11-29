#include <stdio.h>

int main(){

    int n, b;

    scanf("%d",&n); // jumlah baris

    for (int i=0; i<n; i++){

        scanf("%d",&b);

        if ((n%2==1) && (n/2==i)){
            printf("*");
        }
        else if ((n%2==0) && (i==0)){
            printf("*\n");
        }

        for (int j=0; j<b; j++){
            if ((n%2==1) && (j==0) && (n/2!=i)) {
                printf(" *");
            }
            else {
                printf("*");
            }
        }

        printf("\n");
    }
    




    return 0;
}