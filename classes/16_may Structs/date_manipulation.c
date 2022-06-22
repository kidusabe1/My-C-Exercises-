#include <stdio.h>
void next(int date_285, int month_285, int year_285)
{
    printf("Next day is=> ");
    if(date_285+1>30)
    printf(" 01|%d|%d\n",month_285+1,year_285);
    else
    printf(" %d|%d|%d\n",date_285+1,month_285,year_285);
}
void nextmonth(int month)
{
    printf("Next month is=>");
    if(month+1>12)
    printf(" September\n");
    else
    printf(" %d\n", month+1);
}
void nextyear(int year)
{
    printf("Next month is=>");
    printf(" %d\n", year+1);
}
void add_days(int date, int month, int year)
{
    int n;
    printf("How many days do u want to add?\n");
    scanf("%d",&n);
    if(date+n>30)
    printf(" 01|%d|%d\n",month+1,year);
    else
    printf(" %d|%d|%d\n",date+n,month,year); 
}
void month_name(int month)
{
    if(month==1)
    printf("The month is January\n");
    if(month==2)
    printf("The month is February\n");
    if(month==3)
    printf("The month is March\n");
    if(month==4)
    printf("The month is April\n");
    if(month==5)
    printf("The month is May\n");
    if(month==6)
    printf("The month is June\n");
    if(month==7)
    printf("The month is July\n");
    if(month==8)
    printf("The month is August\n");
    if(month==9)
    printf("The month is September\n");
    if(month==10)
    printf("The month is October\n");
    if(month==11)
    printf("The month is November\n");
    if(month==12)
    printf("The month is December\n");
}
typedef struct DATE{
    int date;
    int month;
    int year;
}DATE;
int main()
{
    DATE d1;
    int i,j;
    printf("Please provide the date, month and year respectively\n");
    scanf("%d%d%d", &d1.date,&d1.month,&d1.year); 
    next(d1.date,d1.month,d1.year);
    printf("\n\n");   
    nextmonth(d1.month);
    printf("\n\n");
    nextyear(d1.year);
    printf("\n\n");
    add_days(d1.date,d1.month,d1.year);
    printf("\n\n");
    month_name(d1.month);
    printf("\n\n");
}