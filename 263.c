unsigned srl(unsigned x, int k){
    unsigned xsra = (int) x >>k;
    return xsra&(~(0xff<<(8*sizeof(int)-k)));

    /* ����sizeOF(int),���int���ͳ��ȣ���0xFF����(sizeof(int)<<3-k)λ��Ȼ��Խ��ȡ�������ý�������ƺ��x��ȡ&��*/
}

int sra(int x, int k){
    int xsrl = (unsigned) x >>k;
    return xsrl|((0xff<<(8*sizeof(int)-k)));
    /* ��θ��� x��������ϵ����������������ڡ�
    �ô�ʹ�õķ�ʽ�Ƕ�1�������ƣ�sizeof(int)-1��λ�������Ը�ֵ��x��ȡ&�����ٶԸý��ȡ���߼����������x�Ǹ���������Ϊ0�����x������������Ϊ1��
    �Ըý����1����ֵΪȫ0����ȫ1��Ȼ���-1��������(sizeof(int)-k)λ�������������ȡ&����Ȼ���ٺ���λ���x��ȡ|����
    */

}
