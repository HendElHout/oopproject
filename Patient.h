#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"

public ref class Patient : public Person {
private:
    String^ ailment;    // Ailment or reason for visit
    String^ doctorAssigned; // Doctor assigned to the patient
    DateTime admissionDate; // Admission date

public:
    // Default constructor
    Patient();

    // Parameterized constructor
    Patient(String^ name, int id, DateTime birthday, bool gender, bool married,
        String^ ailment, String^ doctorAssigned, DateTime admissionDate);

    // Getters and Setters
    void SetAilment(String^ ailment);
    String^ GetAilment();

    void SetDoctorAssigned(String^ doctorAssigned);
    String^ GetDoctorAssigned();

    void SetAdmissionDate(DateTime admissionDate);
    DateTime GetAdmissionDate();

    // Overridden method
    virtual String^ GetDetails() override;
};

#endif // PATIENT_H

