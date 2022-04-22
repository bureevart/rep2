//
// Created by BYDEIKA on 22.04.2022.
//

#ifndef OOP1_DATE_H
#define OOP1_DATE_H

#include <iostream>

class Date {
    int dd;
    int mm;
    int yyyy;

public:
    Date(int dd, int mm, int yyyy);

    int getDd() const;

    void setDd(int dd);

    int getMm() const;

    void setMm(int mm);

    int getYyyy() const;

    void setYyyy(int yyyy);
};


#endif //OOP1_DATE_H
