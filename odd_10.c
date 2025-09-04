#include<stdio.h>

int main() {
    int n = 10;
    int odd = 1;

    for(int i = 0 ; i < n ; i++){
        printf("%d\n",odd);
        odd += 2;
    }
    
    return 0;
}
