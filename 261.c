
int test_261(int x){
    int flag = !(~x^0x00);
    int flag2 = !(x&~0x00);
    int flag3 = !((~x&0xFF)|0x00);
    int flag4 =!(x>>((sizeof(int)-1)<<3)|0x00);
    printf("flag:%d\n", flag);
    printf("flag2:%d\n", flag2);
    printf("flag3:%d\n", flag3);
    printf("flag4:%d\n", flag4);
    return flag|flag2|flag3|flag4;


    /* A、对x进行取反操作，如果x全为1的情况下，则取反后值为0，这时再对值去！，则结果为1。如果x不全为1，则取反后结果不为0，再取【逻辑！】则值为0。*/
    /* B、直接对x取【逻辑！】，如果全为0，则值为1。*/
    /* C、先对0xFF取反，然后用x|~0xFF, 如果x的最低有效字节全为1，则该值为全1。对值取~，则为全0，再取【逻辑！】，结果为1*/
    /* D、对x的类型取sizeof(int)，获取字节长度，针对int类型的长度，进行右移((sizeof(int)-1)<<3)位的操作，然后对值和0xFF进行【&】操作，则结果为全0，这是取【逻辑！】，则结果为1。*/
}
