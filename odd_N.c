#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many odd numbers you want: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", 2*i - 1);               //output is based on value of n : 1,3,....,n.
    }

    return 0;
}
