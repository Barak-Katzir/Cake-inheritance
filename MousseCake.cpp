//
// Created by Barak Katzir on 06/05/2022.
//

#include "MousseCake.h"

MousseCake::MousseCake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree, char *_taste)
: Cake(_expiryDate, _diameter, _height, _price, _storage, _glutenFree)
{
    cout << "In MousseCake(expiryDate, diameter, height, price, storage, glutenFree, taste)" << endl;
    this->taste = new char [strlen(_taste) + 1];
    strcpy(this->taste, _taste);
}

const MousseCake &MousseCake::operator=(const MousseCake &other) {
    if (this != &other)
    {
        cout << "In MousseCake operator = " << endl;
        delete[] this->taste;
        this->taste = new char [strlen(other.taste) + 1];
        strcpy(this->taste, other.taste);
    }
    return *this;
}

MousseCake::MousseCake(const MousseCake &other) : Cake(other), taste(nullptr){
    cout << "In MousseCake(MousseCake)" << endl;
    *this = other;
}

void MousseCake::setTaste(const char *_taste) {
    delete[] this->taste;
    this->taste = new char [strlen(_taste) + 1];
    strcpy(this->taste, _taste);
}

bool MousseCake::operator==(const MousseCake &other) const {
    return this->diameter == other.diameter && this->storage == other.storage && this->height == other.height
                      && this->price == other.price && this->glutenFree == other.glutenFree && !(strcmp(this->taste, other.taste));
}

const MousseCake &MousseCake::operator+=(int delta) {
    Cake::operator+=(delta);
    return *this;
}

ostream &operator<<(ostream &os, const MousseCake &mC) {
    os << "Mousse " << (Cake&)mC << "taste: " << mC.taste << endl;
    return os;
}

