#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) // Main function for the Windows Forms application
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OOPProject::MainForm form; // Ensure this matches your form class name
    Application::Run(% form);
}

// The standard main function that calls the Main function
int main(array<System::String^>^ args)
{
    Main(args); // Call the Main function
    return 0; // Return success
}

