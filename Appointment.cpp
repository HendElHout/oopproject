#include "Appointment.h"

// Constructor
Appointment::Appointment(int appointmentId, DateTime appointmentDate, String^ patientName, String^ doctorName) {
    this->appointmentId = appointmentId;
    this->appointmentDate = appointmentDate;
    this->patientName = patientName;
    this->doctorName = doctorName;
}

// Getters and Setters
void Appointment::SetAppointmentId(int appointmentId) {
    this->appointmentId = appointmentId;
}

int Appointment::GetAppointmentId() {
    return this->appointmentId;
}

void Appointment::SetAppointmentDate(DateTime appointmentDate) {
    this->appointmentDate = appointmentDate;
}

DateTime Appointment::GetAppointmentDate() {
    return this->appointmentDate;
}

void Appointment::SetPatientName(String^ patientName) {
    this->patientName = patientName;
}

String^ Appointment::GetPatientName() {
    return this->patientName;
}

void Appointment::SetDoctorName(String^ doctorName) {
    this->doctorName = doctorName;
}

String^ Appointment::GetDoctorName() {
    return this->doctorName;
}

// Display details
String^ Appointment::GetDetails() {
    return "Appointment ID: " + appointmentId +
        ", Date: " + appointmentDate.ToString("yyyy-MM-dd") +
        ", Patient: " + patientName +
        ", Doctor: " + doctorName;
}

