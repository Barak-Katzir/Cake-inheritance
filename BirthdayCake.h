//
// Created by Barak Katzir on 06/05/2022.
//

#ifndef ASSIGNMENT_4_BIRTHDAYCAKE_H
#define ASSIGNMENT_4_BIRTHDAYCAKE_H
#include "Cake.h"

class BirthdayCake : public Cake{
    char* text;
public:
    BirthdayCake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree, char *_text);
    const BirthdayCake& operator=(const BirthdayCake& other);
    BirthdayCake(const BirthdayCake& other);
    ~BirthdayCake() { delete []text; };
    void setText(const char* _text);
    char* getText() const { return text; };
    bool operator ==(const BirthdayCake& other) const;
    const BirthdayCake& operator+=(int delta);
    friend ostream& operator<<(ostream& os, const BirthdayCake& bC);
};
#endif //ASSIGNMENT_4_BIRTHDAYCAKE_H
