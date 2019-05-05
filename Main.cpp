#include "Placar.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace PlacarShinobi;
using namespace Windows;

[STAThreadAttribute]
int main(array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PlacarShinobi::Placar form;
	form.ShowDialog();
	return 0;
}