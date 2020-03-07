unsigned srl(unsigned x, int k){
    unsigned xsra = (int) x >>k;
    return xsra&(~(0xff<<(8*sizeof(int)-k)));

    /* 计算sizeOF(int),算出int类型长度，对0xFF左移(sizeof(int)<<3-k)位，然后对结果取反，利用结果和右移后的x【取&】*/
}

int sra(int x, int k){
    int xsrl = (unsigned) x >>k;
    return xsrl|((0xff<<(8*sizeof(int)-k)));
    /* 如何根据 x的正负关系设计掩码是问题所在。
    该答案使用的方式是对1进行左移（sizeof(int)-1）位操作，对该值和x【取&】，再对该结果取【逻辑！】，如果x是负数，则结果为0；如果x是正数，则结果为1。
    对该结果减1，则值为全0或者全1。然后对-1进行左移(sizeof(int)-k)位。对两个结果【取&】，然后再和移位后的x【取|】。
    */

}
