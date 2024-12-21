#include "Patient.h"

// Default constructor
Patient::Patient() : Person() {
    this->ailment = "Unknown";
    this->doctorAssigned = "None";
    this->admissionDate = DateTime::Now;
}

// Parameterized constructor
Patient::Patient(String^ name, int id, DateTime birthday, bool gender, bool married,
    String^ ailment, String^ doctorAssigned, DateTime admissionDate)
    : Person(name, id, birthday, gender, married) {
    this->ailment = ailment;
    this->doctorAssigned = doctorAssigned;
    this->admissionDate = admissionDate;
}

// Getters and Setters
void Patient::SetAilment(String^ ailment) {
    this->ailment = ailment;
}

String^ Patient::GetAilment() {
    return this->ailment;
}

void Patient::SetDoctorAssigned(String^ doctorAssigned) {
    this->doctorAssigned = doctorAssigned;
}

String^ Patient::GetDoctorAssigned() {
    return this->doctorAssigned;
}

void Patient::SetAdmissionDate(DateTime admissionDate) {
    this->admissionDate = admissionDate;
}

DateTime Patient::GetAdmissionDate() {
    return this->admissionDate;
}

// Overridden method to get details
String^ Patient::GetDetails() {
    return Person::GetDetails() +
        ", Ailment: " + ailment +
        ", Doctor Assigned: " + doctorAssigned +
        ", Admission Date: " + admissionDate.ToString("yyyy-MM-dd");
}
