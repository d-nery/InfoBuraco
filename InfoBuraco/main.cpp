#include "Login.h"
#include "TelaDashboard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

//    InfoBuraco::TelaDashboard^ TelaDashboard = gcnew InfoBuraco::TelaDashboard;

    InfoBuraco::Login login;

    Application::Run(%login);
}
