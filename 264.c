
int any_odd_one(unsigned x){
    int y = 0xAAAAAAAA;
    return !!x&y;

    /* 设置一个值为10101010101010101010101010101010的二进制数，也就是AAAAAAAA。对该值和x【取&】，如果奇数位存在1，则该值结果取【逻辑！】为0，再取【逻辑！】，则结果为1。*/
}
