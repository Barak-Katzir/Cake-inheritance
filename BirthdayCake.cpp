//
// Created by Barak Katzir on 06/05/2022.
//

#include "BirthdayCake.h"

BirthdayCake::BirthdayCake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree, char *_text)
        : Cake(_expiryDate, _diameter, _height, _price, _storage, _glutenFree)
{
    cout << "In BirthdayCake(expiryDate, diameter, height, price, storage, glutenFree, text)" << endl;
    this->text = new char [strlen(_text) + 1];
    strcpy(this->text, _text);
}

const BirthdayCake &BirthdayCake::operator=(const BirthdayCake &other){
    if (this != &other)
    {
        cout << "In BirthdayCake operator = " << endl;
        delete[] this->text;
        this->text = new char [strlen(other.text) + 1];
        strcpy(this->text, other.text);
    }
    return *this;
}

BirthdayCake::BirthdayCake(const BirthdayCake &other) : Cake(other), text(nullptr){
    *this = other;
}

void BirthdayCake::setText(const char *_taste) {
    delete[] this->text;
    this->text = new char [strlen(_taste) + 1];
    strcpy(this->text, _taste);
}

bool BirthdayCake::operator==(const BirthdayCake &other) const {
    return this->diameter == other.diameter && this->storage == other.storage && this->height == other.height
           && this->price == other.price && this->glutenFree == other.glutenFree && !(strcmp(this->text, other.text));
}

const BirthdayCake &BirthdayCake::operator+=(int delta) {
    Cake::operator+=(delta);
    return *this;
}

ostream &operator<<(ostream &os, const BirthdayCake &bC) {
    os << "Birthday " << (Cake&)bC << "text: " << bC.text << endl;
    return os;
}