#include<stdio.h>
int power(int a, int n) {
    if (n == 0)
        return 1;
    else if (n < 0)
        return 1 / power(a, -n);
    else
        return a * power(a, n - 1);
}
int main(){
    printf("power(2,3)=%d",power(2,3));
    return 0;
}