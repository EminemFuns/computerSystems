typedef unsigned char* byte_pointer;
typedef unsigned short* short_pointer;

int is_littler_endian(){

//    int test_num = 0xff;
//    byte_pointer byte_start = (byte_pointer) &test_num;
//    if (byte_start[0] == 0xff) {
//        return 1;
//    }
//    return 0;
    int ival = 0x1;
    byte_pointer address = &ival;
    if(*address == 0x1){
        return 1;
    }
    return 0;
}

int force_tranfer_test(){
//    short x= -15000;
//    short y =25000;
//    int x1 = x;
//    int y1 = 25000;
//    printf("%ld\n", x);
//    printf("%d\n", (x+y));
//    printf("%ld\n", sizeof(int));
//    printf("%ld\n", ((int)x)+((int)y));
//    printf("%ld\n", (int)(((int)x)+((int)y)));
//    printf("%ld\n", x1+y1);
    float x = 12345.0;
    short_pointer byte_start = (short_pointer) &x;
    printf("%d", *byte_start);
}
