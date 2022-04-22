#include <iostream>
#include "Date.h"
#include "University.h"
#include "Student.h"

using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    Date dateOfBirthday(14, 5, 2002);
    University USATU("УГАТУ", "Уфа", "Россия", "ЭАС-222С");
    Student student("Букреев Артум Сергеевуч",
                    dateOfBirthday, "89874742222",
                    "Уфа",
                    "Россия",
                    USATU);
    student.getInfoAboutStudent();

    return 0;
}
