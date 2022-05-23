#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Callculator20::Calculator form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}
