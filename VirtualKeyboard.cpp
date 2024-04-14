#include "pch.h"

using namespace System;

#include "frmMain.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew VirtualKeyboard::frmMain());
  return 0;
}