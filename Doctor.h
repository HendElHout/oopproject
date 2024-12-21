#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

public ref class Doctor : public Person {
private:
    String^ specialization;  // Doctor's specialization
    int experienceYears;     // Years of experience
    String^ schedule;        // Doctor's working schedule

public:
    // Default constructor
    Doctor();

    // Parameterized constructor
    Doctor(String^ name, int id, DateTime birthday, bool gender, bool married,
        String^ specialization, int experienceYears, String^ schedule);

    // Getters and Setters
    void SetSpecialization(String^ specialization);
    String^ GetSpecialization();

    void SetExperienceYears(int experienceYears);
    int GetExperienceYears();

    void SetSchedule(String^ schedule);
    String^ GetSchedule();

    // Overridden method
    virtual String^ GetDetails() override;
};

#endif // DOCTOR_H



