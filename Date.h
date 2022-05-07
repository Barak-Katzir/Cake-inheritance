//
// Created by Barak Katzir on 04/05/2022.
//

#ifndef ASSIGNMENT_4_DATE_H
#define ASSIGNMENT_4_DATE_H
#include <iostream>
using namespace std;

class Date {
    unsigned int day, month, year;

public:
    Date(unsigned int _day, unsigned int _month, unsigned int _year = 2021);
    void setDay(unsigned int _day) throw(unsigned int);
    void setMonth(unsigned int _month) throw(unsigned int);
    void setYear(unsigned int _year);
    unsigned int getDay() const { return day; };
    unsigned int getMonth() const { return month; };
    unsigned int getYear() const { return year; };
    bool operator >(const Date& other) const;
    bool operator <(const Date& other) const;
    bool operator ==(const Date& other) const;
    friend ostream& operator<<(ostream& os, const Date& d);
};
#endif //ASSIGNMENT_4_DATE_H
