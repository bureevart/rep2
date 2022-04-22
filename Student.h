//
// Created by BYDEIKA on 22.04.2022.
//

#ifndef OOP1_STUDENT_H
#define OOP1_STUDENT_H

#include "Date.h"
#include "University.h"
#include <string>

using namespace std;

class Student {
    string name;
    Date dateOfBirthday;
    string phoneNumber;
    string city;
    string country;
    University university;
public:
    Student(const string &name, const Date &dateOfBirthday, string phoneNumber, const string &city, const string &country,
            const University &university);

    const string &getName() const;

    void setName(const string &name);

    const Date &getDateOfBirthday() const;

    void setDateOfBirthday(const Date &dateOfBirthday);

    string getPhoneNumber() const;

    const string &getCity() const;

    void setPhoneNumber(const string &phoneNumber);


    void setCity(const string &city);

    const string &getCountry() const;

    void setCountry(const string &country);

    const University &getUniversity() const;

    void setUniversity(const University &university);

    void getInfoAboutStudent();
};


#endif //OOP1_STUDENT_H
