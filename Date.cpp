//
// Created by Barak Katzir on 04/05/2022.
//

#include "Date.h"
#define MAXMONTH 12
#define MINMONTH 1
#define MAXDAY 31
#define MINDAY 1

Date::Date(unsigned int _day, unsigned int _month, unsigned int _year)
{
    cout << "In Date(d,m,y)" << endl;
    setDay(_day);
    setMonth(_month);
    setYear(_year);
}

void Date::setDay(unsigned int _day) throw(unsigned int)
{
    if (_day >= MINDAY && _day <= MAXDAY)
    {
        day = _day;
    } else{
        throw _day;
    }
}

void Date::setMonth(unsigned int _month) throw(unsigned int)
{
    if (_month >= MINMONTH && _month <= MAXMONTH)
    {
        month = _month;
    } else{
        throw _month;
    }
}

void Date::setYear(unsigned int _year)
{
    year = _year;
}

bool Date::operator>(const Date &other) const
{
    if (this->year > other.year)
    {
        return true;
    }
    if (this->year == other.year) {
        if (this->month > other.month) {
            return true;
        }
        if (this->month == other.month) {
            if (this->day > other.day) {
                return true;
            }
        }
    }
    return false;
}

bool Date::operator<(const Date &other) const
{
    if (this->year < other.year)
    {
        return true;
    }
    if (this->year == other.year) {
        if (this->year < other.year) {
            return true;
        }
        if (this->month == other.month) {
            if (this->day < other.day) {
                return true;
            }
        }
    }
    return false;
}

bool Date::operator==(const Date &other) const
{
    return this->day == other.day && this->month == other.month && this->year == other.year;
}

ostream &operator<<(ostream &os, const Date &d)
{
    os << d.day << "/" << d.month << "/" << d.year;
    return os;
}
