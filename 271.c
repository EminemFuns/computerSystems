typedef unsigned packed_t;

int xbyte (packed_t word, int bytenum){
    //return ((int) (word <<((sizeof(packed_t)-1-bytenum)<<3))>>((sizeof(packed_t)-1)<<3));
    return (word>>(bytenum<<3))&0xFF;
    /* ����Ǹ�������ú�������ֵ��������*/

    /* ��ȷ�ķ�ʽӦ���ǽ�wordתΪint���ͣ��ٽ������Ƶ�����ֽڣ���ʱ�ڽ������ƻ�ʹ���������ƣ�����Է�����ȷ���*/
}
