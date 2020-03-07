
unsigned rotate_left(unsigned x, int n){

    return (x >>(31-n))| (x<<n);

    /*对于x左移n位，先右移(w-n-1)位，然后再右移1位，避免违反C语言的标准。 */

}
