
int int_shifts_are_arithmetic(){
    int x=0xff000000;
    printf("%2.x\n", x>>8);
    return !((x>>((sizeof(int)-1)<<3))==0xFF);

    /* 设置intx=-1，则x为全1，这是右移x1位，如果是算数右移，则x依然为1。对移位后的值和x进行异或操作，则为全0。对结果取【逻辑！】，则结果为1。如果是逻辑右移，则进行异或的结果为int的最小值，这是取【逻辑！】，则结果为0*/

}
