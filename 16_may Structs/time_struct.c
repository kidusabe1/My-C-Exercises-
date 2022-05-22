#include <stdio.h>
typedef struct time{
    int hour;
    int minute;
    int second;
}time;
int main()
{
    time t1_285,t2_285,t3_285;
    int h1,h2,h3,m1,m2,m3,s1,s2,s3;
    printf("Please give the first timing in hour/minutes/second format\n");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Please give the second timing in hour/minutes/second format\n");
    scanf("%d%d%d",&h2,&m2,&s2);    
    t1_285.hour=h1;
    t1_285.minute=m1;
    t1_285.second=s1;
    t2_285.hour=h2;
    t2_285.minute=m2;
    t2_285.second=s2;
    t3_285.hour= t1_285.hour+t2_285.hour;
    t3_285.minute=t1_285.minute+t2_285.minute;
    t3_285.second=t1_285.second+t2_285.second;
    if(t3_285.second>=60)
    {
        t3_285.second=t3_285.second-60;
        t3_285.minute++;
    }
    if(t3_285.minute>=60)
    {
        t3_285.minute=t3_285.minute-60;
        t3_285.hour++;
    }
    printf("The sum of your two timing is %d hours %d minues and %d seconds\n",t3_285.hour,t3_285.minute,t3_285.second);
    return 0;
}