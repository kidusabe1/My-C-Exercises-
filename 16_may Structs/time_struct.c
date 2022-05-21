#include <stdio.h>
typedef struct time{
    int hour;
    int minute;
    int second;
}time;
int main()
{
    time t1,t2,t3;
    int h1,h2,h3,m1,m2,m3,s1,s2,s3;
    printf("Please give the first timing in hour/minutes/second format\n");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Please give the second timing in hour/minutes/second format\n");
    scanf("%d%d%d",&h2,&m2,&s2);    
    t1.hour=h1;
    t1.minute=m1;
    t1.second=s1;
    t2.hour=h2;
    t2.minute=m2;
    t2.second=s2;
    t3.hour= t1.hour+t2.hour;
    t3.minute=t1.minute+t2.minute;
    t3.second=t1.second+t2.second;
    if(t3.second>=60)
    {
        t3.second=t3.second-60;
        t3.minute++;
    }
    if(t3.minute>=60)
    {
        t3.minute=t3.minute-60;
        t3.hour++;
    }
    printf("The sum of your two timing is %d hours %d minues and %d seconds\n",t3.hour,t3.minute,t3.second);
    return 0;
}