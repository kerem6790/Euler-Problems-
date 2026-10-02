/* You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)? */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef enum {

    JANUARY,

    FEBRUARY,

    MARCH,

    APRIL,

    MAY,

    JUNE,

    JULY,

    AUGUST,

    SEPTEMBER,

    OCTOBER,

    NOVEMBER,

    DECEMBER

} Month;

typedef enum {

    MONDAY,

    TUESDAY,

    WEDNESDAY,

    THURSDAY,

    FRIDAY,

    SATURDAY,

    SUNDAY,

} dayx;

typedef struct 
{
    int day;
    dayx dayx;
    Month month;
    int year;
} Date;

Date startDate;

Date startDate = {
    .day = 1,
    .dayx = MONDAY,
    .month = JANUARY,
    .year = 1900
};

int count = 0;

int main(void)
{
    for (int year = 1900; year <= 2000; year++) {

        for (Month month = JANUARY; month <= DECEMBER; month++) {

            int days_in_month;

            /* February */
            if (month == FEBRUARY) {

                if ((year % 4 == 0 && year % 100 != 0) ||
                    year % 400 == 0)
                    days_in_month = 29;
                else
                    days_in_month = 28;
            }

            /* 31-day months */
            else if (month == JANUARY ||
                     month == MARCH ||
                     month == MAY ||
                     month == JULY ||
                     month == AUGUST ||
                     month == OCTOBER ||
                     month == DECEMBER)
            {
                days_in_month = 31;
            }

            /* Remaining months have 30 days */
            else {
                days_in_month = 30;
            }

            /*
             * We only count from 1 Jan 1901 onwards.
             * startDate always represents the current day.
             */
            if (year >= 1901 &&
                startDate.day == 1 &&
                startDate.dayx == SUNDAY)
            {
                count++;
            }

            /*
             * Advance through every day of this month.
             */
            for (int day = 0; day < days_in_month; day++) {

                startDate.dayx =
                    (startDate.dayx + 1) % 7;
            }

            /*
             * After advancing days_in_month days,
             * we are now on the first day of next month.
             */
            startDate.day = 1;
            startDate.month =
                (month == DECEMBER) ? JANUARY : month + 1;
            startDate.year =
                (month == DECEMBER) ? year + 1 : year;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
    