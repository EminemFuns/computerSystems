#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int x= 50000;

    // printf("%d", x*x);
    test_show_bytes(12345);
    return 0;
}

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum=x+y;
    return sum >=x;
}

int tadd_ok(int x, int y){
    int sum = x+y;
    return (x>0&&y>0&&sum<0)||(x<0&&y<0&sum>0);
}
