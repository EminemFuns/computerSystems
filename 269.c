
unsigned rotate_left(unsigned x, int n){

    return (x >>(31-n))| (x<<n);

    /*����x����nλ��������(w-n-1)λ��Ȼ��������1λ������Υ��C���Եı�׼�� */

}
