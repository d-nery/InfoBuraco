#include "Login.h"
#include "TelaDashboard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

//    InfoBuraco::Dashboard^ dashboard = gcnew InfoBuraco::Dashboard;

    InfoBuraco::Login login;

    Application::Run(%login);
}
