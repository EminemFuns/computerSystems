typedef unsigned float_bits;

float_bits flaot_negate(float_bits f){
    unsigned sign = f >>31;
    unsigned exp = f>>23;
    unsigned frac = f&0x7FFFFF;
    if (!(exp=0xFF&&frac!=0)){
        sign = -sign;
    }
    return (sign<<31)|(exp<<23)|frac;
}
