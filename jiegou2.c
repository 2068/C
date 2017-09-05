#include<stdio.h>
struct date
{
    int  month;
    int day;
    int year;
};
int main()
{
    struct date today={07,31,2014};
    struct date thismonth={.month=7,.year=2014};
    printf("Today's date is %d-%d-%d.\n",
           today.year,today.month,today.day);
    printf("Today's date is %d-%d-%d.\n",
           thismonth.year,thismonth.month,thismonth.day);
    thismonth=today;
    printf("Today's date is %d-%d-%d.\n",
           thismonth.year,thismonth.month,thismonth.day);
    return 0;
}
