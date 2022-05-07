//
// Created by Barak Katzir on 06/05/2022.
//

#ifndef ASSIGNMENT_4_MOUSSECAKE_H
#define ASSIGNMENT_4_MOUSSECAKE_H
#include "Cake.h"

class MousseCake :public Cake{
    char* taste;
public:
    MousseCake(Date _expiryDate, const int _diameter, double _height, double _price, int _storage, bool _glutenFree, char *_taste);
    const MousseCake& operator=(const MousseCake& other);
    MousseCake(const MousseCake& other);
    ~MousseCake() { delete []taste;};
    void setTaste(const char* _taste);
    char* getTaste() const { return taste; };
    bool operator ==(const MousseCake& other) const;
    const MousseCake& operator+=(int delta);
    friend ostream& operator<<(ostream& os, const MousseCake& mC);
};
#endif //ASSIGNMENT_4_MOUSSECAKE_H
