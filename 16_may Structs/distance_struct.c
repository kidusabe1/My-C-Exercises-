#include <stdio.h>
typedef struct distance{
    int kilometer;
    int meter;
}distance;
int main()
{
    distance s1,s2,s3;
    int km1,km2,m1,m2,KM,M;
    printf("GIve the first diatnce in km and m form respectively\n");
    scanf("%d%d",&km1,&m1);
    printf("GIve the second diatnce in km and m form respectively\n");
    scanf("%d%d",&km2,&m2);
    s1.kilometer=km1;
    s1.meter=m1;
    s2.kilometer=km2;
    s2.meter=m2;
    s3.kilometer=s1.kilometer+s2.kilometer;
    s3.meter=s1.meter+s2.meter;
    if(s3.meter>=1000)
    {
        s3.meter=s3.meter-1000;
        s3.kilometer++;
    }
    printf("The sum of your two distances is %d kilometers and %d meters\n",s3.kilometer,s3.meter);
    return 0;

}