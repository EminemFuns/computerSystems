
int fits_bits(int x, int n){
//    return (x>>(n-1)) == 1;
  int w = sizeof(int) << 3;
  int offset = w - n;
  unsigned z = x;
  return ((int)(z << offset >> offset)) == x;
}
