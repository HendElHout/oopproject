#ifndef APPOINTMENT_H
#define APPOINTMENT_H

using namespace System;

public ref class Appointment {
private:
    int appointmentId;       // Unique ID for the appointment
    DateTime appointmentDate; // Appointment date
    String^ patientName;     // Patient's name
    String^ doctorName;      // Doctor's name

public:
    // Constructor
    Appointment(int appointmentId, DateTime appointmentDate, String^ patientName, String^ doctorName);

    // Getters and Setters
    void SetAppointmentId(int appointmentId);
    int GetAppointmentId();

    void SetAppointmentDate(DateTime appointmentDate);
    DateTime GetAppointmentDate();

    void SetPatientName(String^ patientName);
    String^ GetPatientName();

    void SetDoctorName(String^ doctorName);
    String^ GetDoctorName();

    // Method to display details
    String^ GetDetails();
};

#endif // APPOINTMENT_H
