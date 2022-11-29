#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 

    // APPROACH #1
    // printf(“Please enter a line:\n”);

    // char *line =NILL;

    // size_t len = 0;

    // ssize_t lineSize = 0;

    // lineSize = getline(&line, &len, stdin);

    // printf(“You entered %s, which has %zu chars.\n”, line, lineSize -1);

    // free(line);

    // SOLUTION #1
    // int n;

    // scanf("%d\n",&n);

    // char *line = NULL;
    // size_t len = 40;
    // ssize_t line_size = 0;
    // int j = 1, temp;
    // char number[3];
    // float curr_avg, total = 0;

    // line = (char *)malloc(len * sizeof(char));

    // for (int i = 0; i < n; i++) {
    //     line_size = getline(&line, &len, stdin);
    //     printf("%s",line+2);

    //     memcpy(number, &line[0], 2);
    //     number[2] = '\0';

    //     // printf("%s",number);

    //     temp = atoi(number); 
    //     total += temp;
    //     curr_avg = total/j;
    //     j++;
    // }

    // free(line);
    // printf("\n%.2f\n",curr_avg);

    // APPROACH #2
    // char name[30];
    // printf("Enter name: ");
    // fgets(name, sizeof(name), stdin);  // read string
    // printf("Name: ");
    // puts(name);    // display string

    // SOLUTION #2
    char name[40];
    size_t len = sizeof(name)/sizeof(name[0]);
    int t, temp;
    char number[3];
    float curr_avg, total = 0;

    scanf("%d\n",&t);

    for (int i = 0; i < t; i++) { // is it ok to use len? because its type is size_t
        fgets(name, sizeof(name), stdin);
        name[strcspn(name,"\n")] = 0;
        puts(name+2);
        
        memcpy(number, &name[0], 2);
        number[2] = '\0';

        temp = atoi(number);
        total += temp;
        curr_avg = total/(i + 1);
    }

    printf("%.2f\n", curr_avg);

    return 0;
}