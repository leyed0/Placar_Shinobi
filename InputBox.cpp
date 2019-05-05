#include "InputBox.h"

System::Void PlacarShinobi::InputBox::BTN_OK_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
	return System::Void();
}

System::Void PlacarShinobi::InputBox::BTN_Cancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
	return System::Void();
}
System::Void PlacarShinobi::InputBox::TXTBX_Input_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	Text = TXTBX_Input->Text;
	return System::Void();
}
System::Windows::Forms::DialogResult PlacarShinobi::InputBox::Show()
{
	this->ShowDialog();
	return this->DialogResult;
}

System::Windows::Forms::DialogResult PlacarShinobi::InputBox::Show(String^ text)
{
	this->LBL_TXT->Text = text;
	this->TXTBX_Input->Location = System::Drawing::Point(this->LBL_TXT->Location.X + this->LBL_TXT->Size.Width, this->TXTBX_Input->Location.Y);

	this->BTN_Cancel->Location = System::Drawing::Point(this->TXTBX_Input->Location.X + this->TXTBX_Input->Size.Width - this->BTN_Cancel->Size.Width, 32);
	this->BTN_OK->Location = System::Drawing::Point(this->BTN_Cancel->Location.X - this->BTN_OK->Size.Width, this->BTN_Cancel->Location.Y);

	this->ShowDialog();
	return this->DialogResult;
}