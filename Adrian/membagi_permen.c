#include <stdio.h>

int main() {

    int m,n;

    scanf("%d",&m);
    scanf("%d",&n);

    int div_res = m/n;
    int mod_res = m%n;

    if (mod_res == 0) {
        for (int i=0; i<n; i++){
            printf("%d ",div_res);
        }
        printf("\n");
    }
    else {
        int temp = n-mod_res;
        for (int i=0; i<n; i++) {
            if (temp>0){
                printf("%d ",div_res);
            }
            else {
                printf("%d ",div_res+1);
            }

            temp-=1;
        }
        printf("\n");
    }
  return 0;
}