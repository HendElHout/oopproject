#ifndef HOSPITAL_H
#define HOSPITAL_H

using namespace System;
using namespace System::Collections::Generic;
#include "Patient.h"
#include "Doctor.h"

public ref class Hospital {
private:
    List<Person^>^ people;  // List to store both patients and doctors

public:
    // Constructor
    Hospital();

    // Add a person to the hospital (both Patient and Doctor can be added)
    void AddPerson(Person^ person);

    // Get the details of all people (both patients and doctors)
    void DisplayAllPeople();

    // Get a person by ID (can be a Patient or Doctor)
    Person^ GetPersonById(int id);
};

#endif // HOSPITAL_H

