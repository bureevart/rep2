//
// Created by BYDEIKA on 22.04.2022.
//

#include "Student.h"

Student::Student(const string &name, const Date &dateOfBirthday, string phoneNumber, const string &city, const string &country,
                 const University &university) : name(name), dateOfBirthday(dateOfBirthday), phoneNumber(phoneNumber), city(city),
                                                 country(country), university(university) {
    this->name = name;
    this->dateOfBirthday = dateOfBirthday;
    this->phoneNumber = phoneNumber;
    this->city = city;
    this->country = country;
    this->university = university;

}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

const Date &Student::getDateOfBirthday() const {
    return dateOfBirthday;
}

void Student::setDateOfBirthday(const Date &dateOfBirthday) {
    Student::dateOfBirthday = dateOfBirthday;
}

string Student::getPhoneNumber() const {
    return phoneNumber;
}

void Student::setPhoneNumber(const string &phoneNumber) {
    Student::phoneNumber = phoneNumber;
}

const string &Student::getCity() const {
    return city;
}

void Student::setCity(const string &city) {
    Student::city = city;
}

const string &Student::getCountry() const {
    return country;
}

void Student::setCountry(const string &country) {
    Student::country = country;
}

const University &Student::getUniversity() const {
    return university;
}

void Student::setUniversity(const University &university) {
    Student::university = university;
}

void Student::getInfoAboutStudent() {
    cout << "Имя: " << Student::name
         << "\nДень рождения: " << Student::dateOfBirthday.getDd() << ":" << Student::dateOfBirthday.getMm() << ":" << Student::dateOfBirthday.getYyyy()
         << "\nНомер телефона: " << Student::phoneNumber
         << "\nГород: " << Student::city
         << "\nСтрана: " << Student::country
         << "\n\nИнформация о университете: ";

    Student::university.getInfoAboutUniversity();
}

