#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Callculator20::Calculator form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}
