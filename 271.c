typedef unsigned packed_t;

int xbyte (packed_t word, int bytenum){
    //return ((int) (word <<((sizeof(packed_t)-1-bytenum)<<3))>>((sizeof(packed_t)-1)<<3));
    return (word>>(bytenum<<3))&0xFF;
    /* 如果是负数，则该函数返回值存在问题*/

    /* 正确的方式应该是将word转为int类型，再进行左移到最高字节，这时在进行右移会使用算数右移，则可以返回正确结果*/
}
