//
// Created by BYDEIKA on 22.04.2022.
//

#ifndef OOP1_UNIVERSITY_H
#define OOP1_UNIVERSITY_H

#include <string>

using namespace std;

class University {
    string name;
    string city;
    string country;
    string groupNumber;

public:
    University(const string &name, const string &city, const string &country, const string &groupNumber);

    const string &getName() const;

    void setName(const string &name);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getCountry() const;

    void setCountry(const string &country);

    const string &getGroupNumber() const;

    void setGroupNumber(const string &groupNumber);

    void getInfoAboutUniversity();
};


#endif //OOP1_UNIVERSITY_H
