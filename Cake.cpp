//
// Created by Barak Katzir on 04/05/2022.
//

#include "Cake.h"

Cake::Cake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree)
: expiryDate(_expiryDate), diameter(_diameter), height(_height), price(_price), storage(_storage),  glutenFree(_glutenFree)
{
    cout << "In Cake(expiryDate, diameter, height, price, storage, glutenFree)" << endl;
}

bool Cake::operator==(const Cake &other) const {
    return this->expiryDate == other.expiryDate && this->diameter == other.diameter && this->storage == other.storage && this->height == other.height
    && this->price == other.price && this->glutenFree == other.glutenFree;
}

const Cake &Cake::operator+=(int delta) {
    this->price += delta;
    return *this;
}

ostream &operator<<(ostream &os, const Cake &c) {
        os << "Cake: " << endl << "diameter: " << c.diameter << endl << "height: " << c.height << endl << "price: " << c.price << endl << "expiryDate: " << c.expiryDate << endl <<
           "storage: " << (c.storage == FRIDGE ? "refrigerator" : "freezer") << endl << (c.glutenFree ? "without" : "with") << " gluten" << endl;
    return os;
}