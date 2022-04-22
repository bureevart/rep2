//
// Created by BYDEIKA on 22.04.2022.
//

#include <iostream>
#include "University.h"

University::University(const string &name, const string &city, const string &country, const string &groupNumber) : name(
        name), city(city), country(country), groupNumber(groupNumber) {
    this->name = name;
    this->city = city;
    this->country = country;
    this->groupNumber = groupNumber;
}

const string &University::getName() const {
    return name;
}

void University::setName(const string &name) {
    University::name = name;
}

const string &University::getCity() const {
    return city;
}

void University::setCity(const string &city) {
    University::city = city;
}

const string &University::getCountry() const {
    return country;
}

void University::setCountry(const string &country) {
    University::country = country;
}

const string &University::getGroupNumber() const {
    return groupNumber;
}

void University::setGroupNumber(const string &groupNumber) {
    University::groupNumber = groupNumber;
}

void University::getInfoAboutUniversity() {
    cout << "\nНазвание университета: " << University::name
         << "\nГород: " << University::city
         << "\nСтрана: " << University::country
         << "\nНомер группы: " << University::groupNumber << endl;
}