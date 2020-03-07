
int replace_byte(unsigned x, int i, unsigned char b){
    unsigned x2 = x;
    //x2 = (((x>>((i)*8))&~0xff|0xab)<<((i)*8))|(x<<(3-i)*8>>(3-i)*8);
    x2 = x&(~(0xff<<(i*8)))|(b<<(i*8));

    return x2;

}
