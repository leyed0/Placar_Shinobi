#include "Placar.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace PlacarShinobi;
using namespace Windows;

System::Void PlacarShinobi::Placar::BTN_Timer_Iniciar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!parou) {
		Timer_Set_Min = Convert::ToInt32(Timer_Min->Value);
		Timer_Set_Sec = Convert::ToInt32(Timer_Sec->Value);
	}
	if(Timer_Min->Value >0 || Timer_Sec->Value >0) Timer->Start();
	parou = false;
	return System::Void();
}

System::Void PlacarShinobi::Placar::Timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (Timer_Sec->Value <= 0) {
		if (Timer_Min->Value <= 0) Beep();
		else {
			Timer_Sec->Value = 59;
			Timer_Min->Value--;
		}
	}
	else Timer_Sec->Value--;
}

System::Void PlacarShinobi::Placar::BTN_Timer_Reiniciar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Stop();
	Timer_Min->Value = Timer_Set_Min;
	Timer_Sec->Value = Timer_Set_Sec;
}

System::Void PlacarShinobi::Placar::BTN_Timer_Zerar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Stop();
	Timer_Min->Value = 0;
	Timer_Sec->Value = 0;
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Timer_Parar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Stop();
	parou = true;
	return System::Void();
}


System::Void PlacarShinobi::Placar::Beep()
{
	Timer->Stop();
	Alarm->Play();
	//System::Media::SystemSounds::Beep->Play();
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Acertou_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	TXT_TA_Acertos->Text = Convert::ToString(Convert::ToInt32(TXT_TA_Acertos->Text)+1);
	if (Convert::ToInt32(TXT_TA_Acertos->Text) < 10) TXT_TA_Acertos->Text = "0" + TXT_TA_Acertos->Text;

	BTN_ROD_ADD_Click(sender, e);
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Errou_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	TXT_TA_Erros->Text = Convert::ToString(Convert::ToInt32(TXT_TA_Erros->Text) + 1);
	if (Convert::ToInt32(TXT_TA_Erros->Text) < 10) TXT_TA_Erros->Text = "0" + TXT_TA_Erros->Text;

	if (doiserrou) BTN_ROD_ADD_Click(sender, e);
	else doiserrou = true;

	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Acertou_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	TXT_TB_Acertos->Text = Convert::ToString(Convert::ToInt32(TXT_TB_Acertos->Text) + 1);
	if (Convert::ToInt32(TXT_TB_Acertos->Text) < 10) TXT_TB_Acertos->Text = "0" + TXT_TB_Acertos->Text;

	doiserrou = false;
	BTN_ROD_ADD_Click(sender, e);
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Errou_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	TXT_TB_Erros->Text = Convert::ToString(Convert::ToInt32(TXT_TB_Erros->Text) + 1);
	if (Convert::ToInt32(TXT_TB_Erros->Text) < 10) TXT_TB_Erros->Text = "0" + TXT_TB_Erros->Text;

	if (doiserrou)BTN_ROD_ADD_Click(sender, e);
	else doiserrou = true;

	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_ROD_ADD_Click(System::Object^ sender, System::EventArgs^ e)
{
	doiserrou = false;
	TXT_Tot_Rodadas->Text = Convert::ToString(Convert::ToInt32(TXT_Tot_Rodadas->Text) + 1);
	if (Convert::ToInt32(TXT_Tot_Rodadas->Text) < 10) TXT_Tot_Rodadas->Text = "0" + TXT_Tot_Rodadas->Text;
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_ROD_Minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	doiserrou = false;
	if (Convert::ToInt32(TXT_Tot_Rodadas->Text) > 0)TXT_Tot_Rodadas->Text = Convert::ToString(Convert::ToInt32(TXT_Tot_Rodadas->Text) - 1);
	if (Convert::ToInt32(TXT_Tot_Rodadas->Text) < 10 && TXT_Tot_Rodadas->Text->Length <2) TXT_Tot_Rodadas->Text = "0" + TXT_Tot_Rodadas->Text;
	return System::Void();
	return System::Void();
}

System::Void PlacarShinobi::Placar::BTN_Reiniciar_Click(System::Object^ sender, System::EventArgs^ e)
{
	TXT_Tot_Rodadas->Text = "00";
	TXT_TA_Acertos->Text = "00";
	TXT_TB_Acertos->Text = "00";
	TXT_TA_Erros->Text = "00";
	TXT_TB_Erros->Text = "00";
	return System::Void();
}

System::Void PlacarShinobi::Placar::TesteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Input = gcnew InputBox;
	if (Input->Show("Time A: ") == System::Windows::Forms::DialogResult::OK)
	{
		if(Input->Text != nullptr) Time_A_GroupBox->Text = Input->Text;
		else Time_A_GroupBox->Text = "Time A";
	}
	Input = gcnew InputBox;
	if (Input->Show("Time B: ") == System::Windows::Forms::DialogResult::OK)
	{
		if (Input->Text != nullptr) Time_B_GroupBox->Text = Input->Text;
		else Time_B_GroupBox->Text = "Time B";
	}
	return System::Void();
}
