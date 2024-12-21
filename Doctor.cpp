#include "Doctor.h"

// Default constructor
Doctor::Doctor() : Person() {
    this->specialization = "General";
    this->experienceYears = 0;
    this->schedule = "Unknown";
}

// Parameterized constructor
Doctor::Doctor(String^ name, int id, DateTime birthday, bool gender, bool married,
    String^ specialization, int experienceYears, String^ schedule)
    : Person(name, id, birthday, gender, married) {
    this->specialization = specialization;
    this->experienceYears = experienceYears;
    this->schedule = schedule;
}

// Getters and Setters
void Doctor::SetSpecialization(String^ specialization) {
    this->specialization = specialization;
}

String^ Doctor::GetSpecialization() {
    return this->specialization;
}

void Doctor::SetExperienceYears(int experienceYears) {
    this->experienceYears = experienceYears;
}

int Doctor::GetExperienceYears() {
    return this->experienceYears;
}

void Doctor::SetSchedule(String^ schedule) {
    this->schedule = schedule;
}

String^ Doctor::GetSchedule() {
    return this->schedule;
}

// Overridden method to get details
String^ Doctor::GetDetails() {
    return Person::GetDetails() +
        ", Specialization: " + specialization +
        ", Experience: " + experienceYears + " years" +
        ", Schedule: " + schedule;
}

