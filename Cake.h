//
// Created by Barak Katzir on 04/05/2022.
//

#ifndef ASSIGNMENT_4_CAKE_H
#define ASSIGNMENT_4_CAKE_H
#include "Date.h"
#define FRIDGE 1

class Cake {
protected:
    Date expiryDate;
    const int diameter;
    int storage;
    double height, price;
    bool glutenFree;

public:
    Cake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree);
    bool operator ==(const Cake& other) const;
    const Cake& operator +=(int delta);
    friend ostream& operator<<(ostream& os, const Cake& c);
};
#endif //ASSIGNMENT_4_CAKE_H
