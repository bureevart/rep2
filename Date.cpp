//
// Created by BYDEIKA on 22.04.2022.
//

#include "Date.h"

int Date::getDd() const {
    return dd;
}

void Date::setDd(int dd) {
    Date::dd = dd;
}

int Date::getMm() const {
    return mm;
}

void Date::setMm(int mm) {
    Date::mm = mm;
}

int Date::getYyyy() const {
    return yyyy;
}

void Date::setYyyy(int yyyy) {
    Date::yyyy = yyyy;
}

Date::Date(int dd, int mm, int yyyy) : dd(dd), mm(mm), yyyy(yyyy) {
    this->dd = dd;
    this->mm = mm;
    this->yyyy = yyyy;
}