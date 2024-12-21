#ifndef PERSON_H
#define PERSON_H

using namespace System;

public ref class Person {
private:
    String^ name;       // Managed type for name
    int id;             // Integer for ID
    DateTime birthday;  // Use System::DateTime for birthdate
    bool gender;        // Boolean for gender
    bool married;       // Boolean for marital status

public:
    // Constructor
    Person();

    // Overloaded constructor for initialization
    Person(String^ name, int id, DateTime birthday, bool gender, bool married);

    // Methods to calculate age
    int CalculateAge();

    // Getters and Setters
    void SetName(String^ name);
    String^ GetName();

    void SetId(int id);
    int GetId();

    void SetBirthday(DateTime birthday);
    DateTime GetBirthday();

    void SetGender(bool gender);
    bool GetGender();

    void SetMarried(bool married);
    bool GetMarried();

    // Method to return common details
    virtual String^ GetDetails();  // Virtual method to be overridden
};

#endif // PERSON_H
