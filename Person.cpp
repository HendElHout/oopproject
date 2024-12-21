#include "Person.h"

// Default constructor
Person::Person() {
    this->name = "Unknown";
    this->id = 0;
    this->birthday = DateTime::Now; // Default to current date
    this->gender = false;
    this->married = false;
}

// Parameterized constructor
Person::Person(String^ name, int id, DateTime birthday, bool gender, bool married) {
    this->name = name;
    this->id = id;
    this->birthday = birthday;
    this->gender = gender;
    this->married = married;
}

// Calculate the age of the person
int Person::CalculateAge() {
    DateTime today = DateTime::Now;
    int age = today.Year - birthday.Year;
    if (today < birthday.AddYears(age)) {
        age--; // Adjust if birthday hasn't occurred yet this year
    }
    return age;
}

// Getter and Setter for Name
void Person::SetName(String^ name) {
    this->name = name;
}

String^ Person::GetName() {
    return this->name;
}

// Getter and Setter for ID
void Person::SetId(int id) {
    this->id = id;
}

int Person::GetId() {
    return this->id;
}

// Getter and Setter for Birthday
void Person::SetBirthday(DateTime birthday) {
    this->birthday = birthday;
}

DateTime Person::GetBirthday() {
    return this->birthday;
}

// Getter and Setter for Gender
void Person::SetGender(bool gender) {
    this->gender = gender;
}

bool Person::GetGender() {
    return this->gender;
}

// Getter and Setter for Married Status
void Person::SetMarried(bool married) {
    this->married = married;
}

bool Person::GetMarried() {
    return this->married;
}

// GetDetails - Common details for all persons
String^ Person::GetDetails() {
    return "Name: " + name +
        ", ID: " + id +
        ", Birthday: " + birthday.ToString("yyyy-MM-dd") +
        ", Gender: " + (gender ? "Male" : "Female") +
        ", Married: " + (married ? "Yes" : "No");
}

