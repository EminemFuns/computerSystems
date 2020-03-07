#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for(i=0;i<len;i++)
        printf("%.2x", start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_short(short x){
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x){
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x){
    show_bytes((byte_pointer) &x, sizeof(double));
}


void test_show_bytes(int val, long val_l, short val_s){
//    int ival = val;
//    long lval = val_l;
//    short sval = val_s;
//    float fval = (float) ival;
//    double dval = (double) lval;
//    int *pival = &ival;
//    long *plval = &lval;
//    short *psval = &sval;
//    short *pfval = &fval;
//    short *pdval = &dval;
//    show_short(sval);
//    show_int(ival);
//    show_long(lval);
    show_float(12345.0f);
//    show_double(dval);
//    show_pointer(pival);
//    show_pointer(plval);
//    show_pointer(psval);
//    show_pointer(pfval);
//    show_pointer(pdval);
}
