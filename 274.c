#include <limits.h>

int tsub_ok(int x, int y){
    int diff = x-y;
    int min = INT_MIN;
    int flag1 = !(x&min) && !(y&min);
    int flag2 = (x&min) && (y&min);
    int flag3 =!(x&min) && (y&min) && !(diff&min);
    int flag4 =(x&min) && !(y&min) && (diff&min);
    return flag1 || flag2 ||flag3 || flag4;
    /* ����˼·���ж�ʲô�����x-y���������һ�������x<0��y>0��x-y>0��������ڶ��������x>0,y<0,x-y<0,�������*/
}
