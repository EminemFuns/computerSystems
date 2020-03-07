#include <stdio.h>

int main()
{
//    test_show_bytes(12345, 12345, 12345);
    //printf("%d", -12340/256);
//    float f = 0x4640E400;
//    unsigned f1 =0x4640E400;
//    f = 12345.0;
//    show_int(flaot_negate(f1));
    //show_float(f);
    //test_show_bytes(12345,12345,12345);
    return 0;
}

int uadd_ok(unsigned x, unsigned y){
    unsigned sum=x+y;
    return sum >=x;
}

int tadd_ok(int x, int y){
    int sum = x+y;
    return (x>0&&y>0&&sum<0)||(x<0&&y<0&sum>0);
}


int test_litter_endian(){
    int x = 0x4567;
    char y = (char) x;
    printf("%2.x", y);
}
