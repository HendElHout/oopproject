#include "Hospital.h"

// Constructor
Hospital::Hospital() {
    people = gcnew List<Person^>();  // Initialize the list for people (patients and doctors)
}

// Add a person (patient or doctor) to the hospital
void Hospital::AddPerson(Person^ person) {
    people->Add(person);
}

// Display the details of all people
void Hospital::DisplayAllPeople() {
    for each (Person ^ person in people) {
        Console::WriteLine(person->GetDetails());
    }
}

// Get a person by ID (patient or doctor)
Person^ Hospital::GetPersonById(int id) {
    for each (Person ^ person in people) {
        if (person->GetId() == id) {
            return person;
        }
    }
    return nullptr;  // Return null if not found
}

