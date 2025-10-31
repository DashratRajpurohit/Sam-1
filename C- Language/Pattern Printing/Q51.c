#include <stdio.h>

int main() {
    int n=7;

    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= i+1; j++) {
            printf("%d",(i+j)%2);
           
        }
        printf("\n");
    }

    return 0;
}
