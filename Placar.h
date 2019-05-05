#pragma once
#include"InputBox.h"

namespace PlacarShinobi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Placar
	/// </summary>
	public ref class Placar : public System::Windows::Forms::Form
	{
	public:
		Placar(void)
		{
			InitializeComponent();
			Alarm = gcnew System::Media::SoundPlayer;
			Alarm->SoundLocation = "\Alarm.wav";
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Placar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Time_A_GroupBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ TXT_TA_Acertos;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ testeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mudarPontuaçãoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resetarToolStripMenuItem;
	private: System::Windows::Forms::Button^ BTN_Errou_A;
	private: System::Windows::Forms::Button^ BTN_Acertou_A;
	private: System::Windows::Forms::Label^ TXT_TA_Erros;
	private: System::Windows::Forms::Label^ LBL_TA_Erros;
	private: System::Windows::Forms::Label^ LBL_TA_Acertos;
	private: System::Windows::Forms::GroupBox^ Time_B_GroupBox;
	private: System::Windows::Forms::Label^ LBL_TB_Erros;
	private: System::Windows::Forms::Label^ LBL_TB_Acertos;
	private: System::Windows::Forms::Button^ BTN_Errou_B;
	private: System::Windows::Forms::Button^ BTN_Acertou_B;
	private: System::Windows::Forms::Label^ TXT_TB_Erros;
	private: System::Windows::Forms::Label^ TXT_TB_Acertos;
	private: System::Windows::Forms::Label^ TXT_Tot_Rodadas;
	private: System::Windows::Forms::Label^ LBL_Rodadas;
	private: System::Windows::Forms::Button^ BTN_Reiniciar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ LBL_Timer_Sec;
	private: System::Windows::Forms::Label^ LBL_Timer_Min;
	private: System::Windows::Forms::NumericUpDown^ Timer_Sec;
	private: System::Windows::Forms::NumericUpDown^ Timer_Min;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Button^ BTN_Timer_Zerar;
	private: System::Windows::Forms::Button^ BTN_Timer_Iniciar;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ BTN_ROD_ADD;
	private: System::Windows::Forms::Button^ BTN_Timer_Reiniciar;
	private: System::Windows::Forms::Button^ BTN_Timer_Parar;
			 System::Int32 Timer_Set_Min, Timer_Set_Sec;
			 System::Media::SoundPlayer^ Alarm;
			 System::Boolean parou = false;
	private: System::Windows::Forms::Button^ BTN_ROD_Minus;
			 System::Boolean doiserrou = false;
			 InputBox^ Input;
	private:
		/// <summary>
		/// Variável de designer necessá ria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Time_A_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->testeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mudarPontuaçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LBL_TA_Erros = (gcnew System::Windows::Forms::Label());
			this->LBL_TA_Acertos = (gcnew System::Windows::Forms::Label());
			this->BTN_Errou_A = (gcnew System::Windows::Forms::Button());
			this->BTN_Acertou_A = (gcnew System::Windows::Forms::Button());
			this->TXT_TA_Erros = (gcnew System::Windows::Forms::Label());
			this->TXT_TA_Acertos = (gcnew System::Windows::Forms::Label());
			this->Time_B_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_TB_Erros = (gcnew System::Windows::Forms::Label());
			this->LBL_TB_Acertos = (gcnew System::Windows::Forms::Label());
			this->BTN_Errou_B = (gcnew System::Windows::Forms::Button());
			this->BTN_Acertou_B = (gcnew System::Windows::Forms::Button());
			this->TXT_TB_Erros = (gcnew System::Windows::Forms::Label());
			this->TXT_TB_Acertos = (gcnew System::Windows::Forms::Label());
			this->TXT_Tot_Rodadas = (gcnew System::Windows::Forms::Label());
			this->LBL_Rodadas = (gcnew System::Windows::Forms::Label());
			this->BTN_Reiniciar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_Timer_Sec = (gcnew System::Windows::Forms::Label());
			this->LBL_Timer_Min = (gcnew System::Windows::Forms::Label());
			this->Timer_Sec = (gcnew System::Windows::Forms::NumericUpDown());
			this->Timer_Min = (gcnew System::Windows::Forms::NumericUpDown());
			this->BTN_Timer_Reiniciar = (gcnew System::Windows::Forms::Button());
			this->BTN_Timer_Zerar = (gcnew System::Windows::Forms::Button());
			this->BTN_Timer_Parar = (gcnew System::Windows::Forms::Button());
			this->BTN_Timer_Iniciar = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->BTN_ROD_ADD = (gcnew System::Windows::Forms::Button());
			this->BTN_ROD_Minus = (gcnew System::Windows::Forms::Button());
			this->Time_A_GroupBox->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->Time_B_GroupBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Timer_Sec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Timer_Min))->BeginInit();
			this->SuspendLayout();
			// 
			// Time_A_GroupBox
			// 
			this->Time_A_GroupBox->BackColor = System::Drawing::SystemColors::Control;
			this->Time_A_GroupBox->ContextMenuStrip = this->contextMenuStrip1;
			this->Time_A_GroupBox->Controls->Add(this->LBL_TA_Erros);
			this->Time_A_GroupBox->Controls->Add(this->LBL_TA_Acertos);
			this->Time_A_GroupBox->Controls->Add(this->BTN_Errou_A);
			this->Time_A_GroupBox->Controls->Add(this->BTN_Acertou_A);
			this->Time_A_GroupBox->Controls->Add(this->TXT_TA_Erros);
			this->Time_A_GroupBox->Controls->Add(this->TXT_TA_Acertos);
			this->Time_A_GroupBox->Location = System::Drawing::Point(3, 16);
			this->Time_A_GroupBox->Name = L"Time_A_GroupBox";
			this->Time_A_GroupBox->Size = System::Drawing::Size(293, 176);
			this->Time_A_GroupBox->TabIndex = 0;
			this->Time_A_GroupBox->TabStop = false;
			this->Time_A_GroupBox->Text = L"Time A";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->testeToolStripMenuItem,
					this->mudarPontuaçãoToolStripMenuItem, this->resetarToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(170, 70);
			// 
			// testeToolStripMenuItem
			// 
			this->testeToolStripMenuItem->Name = L"testeToolStripMenuItem";
			this->testeToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->testeToolStripMenuItem->Text = L"Mudar Nome";
			this->testeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Placar::TesteToolStripMenuItem_Click);
			// 
			// mudarPontuaçãoToolStripMenuItem
			// 
			this->mudarPontuaçãoToolStripMenuItem->Name = L"mudarPontuaçãoToolStripMenuItem";
			this->mudarPontuaçãoToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->mudarPontuaçãoToolStripMenuItem->Text = L"Mudar Pontuação";
			// 
			// resetarToolStripMenuItem
			// 
			this->resetarToolStripMenuItem->Name = L"resetarToolStripMenuItem";
			this->resetarToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->resetarToolStripMenuItem->Text = L"Resetar";
			// 
			// LBL_TA_Erros
			// 
			this->LBL_TA_Erros->AutoSize = true;
			this->LBL_TA_Erros->Location = System::Drawing::Point(136, 24);
			this->LBL_TA_Erros->Name = L"LBL_TA_Erros";
			this->LBL_TA_Erros->Size = System::Drawing::Size(31, 13);
			this->LBL_TA_Erros->TabIndex = 2;
			this->LBL_TA_Erros->Text = L"Erros";
			// 
			// LBL_TA_Acertos
			// 
			this->LBL_TA_Acertos->AutoSize = true;
			this->LBL_TA_Acertos->Location = System::Drawing::Point(32, 24);
			this->LBL_TA_Acertos->Name = L"LBL_TA_Acertos";
			this->LBL_TA_Acertos->Size = System::Drawing::Size(43, 13);
			this->LBL_TA_Acertos->TabIndex = 2;
			this->LBL_TA_Acertos->Text = L"Acertos";
			// 
			// BTN_Errou_A
			// 
			this->BTN_Errou_A->Location = System::Drawing::Point(176, 144);
			this->BTN_Errou_A->Name = L"BTN_Errou_A";
			this->BTN_Errou_A->Size = System::Drawing::Size(72, 23);
			this->BTN_Errou_A->TabIndex = 1;
			this->BTN_Errou_A->Text = L"Errou";
			this->BTN_Errou_A->UseVisualStyleBackColor = true;
			this->BTN_Errou_A->Click += gcnew System::EventHandler(this, &Placar::BTN_Errou_A_Click);
			// 
			// BTN_Acertou_A
			// 
			this->BTN_Acertou_A->Location = System::Drawing::Point(40, 144);
			this->BTN_Acertou_A->Name = L"BTN_Acertou_A";
			this->BTN_Acertou_A->Size = System::Drawing::Size(72, 23);
			this->BTN_Acertou_A->TabIndex = 1;
			this->BTN_Acertou_A->Text = L"Acertou";
			this->BTN_Acertou_A->UseVisualStyleBackColor = true;
			this->BTN_Acertou_A->Click += gcnew System::EventHandler(this, &Placar::BTN_Acertou_A_Click);
			// 
			// TXT_TA_Erros
			// 
			this->TXT_TA_Erros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TXT_TA_Erros->AutoSize = true;
			this->TXT_TA_Erros->BackColor = System::Drawing::Color::Red;
			this->TXT_TA_Erros->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TXT_TA_Erros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXT_TA_Erros->Location = System::Drawing::Point(144, 40);
			this->TXT_TA_Erros->Name = L"TXT_TA_Erros";
			this->TXT_TA_Erros->Size = System::Drawing::Size(131, 93);
			this->TXT_TA_Erros->TabIndex = 0;
			this->TXT_TA_Erros->Text = L"00";
			// 
			// TXT_TA_Acertos
			// 
			this->TXT_TA_Acertos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TXT_TA_Acertos->AutoSize = true;
			this->TXT_TA_Acertos->BackColor = System::Drawing::Color::Lime;
			this->TXT_TA_Acertos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TXT_TA_Acertos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXT_TA_Acertos->Location = System::Drawing::Point(8, 40);
			this->TXT_TA_Acertos->Name = L"TXT_TA_Acertos";
			this->TXT_TA_Acertos->Size = System::Drawing::Size(131, 93);
			this->TXT_TA_Acertos->TabIndex = 0;
			this->TXT_TA_Acertos->Text = L"00";
			// 
			// Time_B_GroupBox
			// 
			this->Time_B_GroupBox->ContextMenuStrip = this->contextMenuStrip1;
			this->Time_B_GroupBox->Controls->Add(this->LBL_TB_Erros);
			this->Time_B_GroupBox->Controls->Add(this->LBL_TB_Acertos);
			this->Time_B_GroupBox->Controls->Add(this->BTN_Errou_B);
			this->Time_B_GroupBox->Controls->Add(this->BTN_Acertou_B);
			this->Time_B_GroupBox->Controls->Add(this->TXT_TB_Erros);
			this->Time_B_GroupBox->Controls->Add(this->TXT_TB_Acertos);
			this->Time_B_GroupBox->Location = System::Drawing::Point(296, 16);
			this->Time_B_GroupBox->Name = L"Time_B_GroupBox";
			this->Time_B_GroupBox->Size = System::Drawing::Size(280, 176);
			this->Time_B_GroupBox->TabIndex = 0;
			this->Time_B_GroupBox->TabStop = false;
			this->Time_B_GroupBox->Text = L"Time B";
			// 
			// LBL_TB_Erros
			// 
			this->LBL_TB_Erros->AutoSize = true;
			this->LBL_TB_Erros->Location = System::Drawing::Point(136, 24);
			this->LBL_TB_Erros->Name = L"LBL_TB_Erros";
			this->LBL_TB_Erros->Size = System::Drawing::Size(31, 13);
			this->LBL_TB_Erros->TabIndex = 2;
			this->LBL_TB_Erros->Text = L"Erros";
			// 
			// LBL_TB_Acertos
			// 
			this->LBL_TB_Acertos->AutoSize = true;
			this->LBL_TB_Acertos->Location = System::Drawing::Point(32, 24);
			this->LBL_TB_Acertos->Name = L"LBL_TB_Acertos";
			this->LBL_TB_Acertos->Size = System::Drawing::Size(43, 13);
			this->LBL_TB_Acertos->TabIndex = 2;
			this->LBL_TB_Acertos->Text = L"Acertos";
			// 
			// BTN_Errou_B
			// 
			this->BTN_Errou_B->Location = System::Drawing::Point(168, 144);
			this->BTN_Errou_B->Name = L"BTN_Errou_B";
			this->BTN_Errou_B->Size = System::Drawing::Size(72, 23);
			this->BTN_Errou_B->TabIndex = 1;
			this->BTN_Errou_B->Text = L"Errou";
			this->BTN_Errou_B->UseVisualStyleBackColor = true;
			this->BTN_Errou_B->Click += gcnew System::EventHandler(this, &Placar::BTN_Errou_B_Click);
			// 
			// BTN_Acertou_B
			// 
			this->BTN_Acertou_B->Location = System::Drawing::Point(32, 144);
			this->BTN_Acertou_B->Name = L"BTN_Acertou_B";
			this->BTN_Acertou_B->Size = System::Drawing::Size(72, 23);
			this->BTN_Acertou_B->TabIndex = 1;
			this->BTN_Acertou_B->Text = L"Acertou";
			this->BTN_Acertou_B->UseVisualStyleBackColor = true;
			this->BTN_Acertou_B->Click += gcnew System::EventHandler(this, &Placar::BTN_Acertou_B_Click);
			// 
			// TXT_TB_Erros
			// 
			this->TXT_TB_Erros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TXT_TB_Erros->AutoSize = true;
			this->TXT_TB_Erros->BackColor = System::Drawing::Color::Red;
			this->TXT_TB_Erros->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TXT_TB_Erros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXT_TB_Erros->Location = System::Drawing::Point(144, 40);
			this->TXT_TB_Erros->Name = L"TXT_TB_Erros";
			this->TXT_TB_Erros->Size = System::Drawing::Size(131, 93);
			this->TXT_TB_Erros->TabIndex = 0;
			this->TXT_TB_Erros->Text = L"00";
			// 
			// TXT_TB_Acertos
			// 
			this->TXT_TB_Acertos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TXT_TB_Acertos->AutoSize = true;
			this->TXT_TB_Acertos->BackColor = System::Drawing::Color::Lime;
			this->TXT_TB_Acertos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TXT_TB_Acertos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXT_TB_Acertos->Location = System::Drawing::Point(8, 40);
			this->TXT_TB_Acertos->Name = L"TXT_TB_Acertos";
			this->TXT_TB_Acertos->Size = System::Drawing::Size(131, 93);
			this->TXT_TB_Acertos->TabIndex = 0;
			this->TXT_TB_Acertos->Text = L"00";
			// 
			// TXT_Tot_Rodadas
			// 
			this->TXT_Tot_Rodadas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TXT_Tot_Rodadas->AutoSize = true;
			this->TXT_Tot_Rodadas->BackColor = System::Drawing::Color::Lime;
			this->TXT_Tot_Rodadas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TXT_Tot_Rodadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXT_Tot_Rodadas->Location = System::Drawing::Point(11, 216);
			this->TXT_Tot_Rodadas->Name = L"TXT_Tot_Rodadas";
			this->TXT_Tot_Rodadas->Size = System::Drawing::Size(131, 93);
			this->TXT_Tot_Rodadas->TabIndex = 0;
			this->TXT_Tot_Rodadas->Text = L"00";
			// 
			// LBL_Rodadas
			// 
			this->LBL_Rodadas->AutoSize = true;
			this->LBL_Rodadas->Location = System::Drawing::Point(16, 200);
			this->LBL_Rodadas->Name = L"LBL_Rodadas";
			this->LBL_Rodadas->Size = System::Drawing::Size(77, 13);
			this->LBL_Rodadas->TabIndex = 2;
			this->LBL_Rodadas->Text = L"Total Rodadas";
			// 
			// BTN_Reiniciar
			// 
			this->BTN_Reiniciar->Location = System::Drawing::Point(144, 280);
			this->BTN_Reiniciar->Name = L"BTN_Reiniciar";
			this->BTN_Reiniciar->Size = System::Drawing::Size(72, 23);
			this->BTN_Reiniciar->TabIndex = 1;
			this->BTN_Reiniciar->Text = L"Reiniciar";
			this->BTN_Reiniciar->UseVisualStyleBackColor = true;
			this->BTN_Reiniciar->Click += gcnew System::EventHandler(this, &Placar::BTN_Reiniciar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LBL_Timer_Sec);
			this->groupBox1->Controls->Add(this->LBL_Timer_Min);
			this->groupBox1->Controls->Add(this->Timer_Sec);
			this->groupBox1->Controls->Add(this->Timer_Min);
			this->groupBox1->Controls->Add(this->BTN_Timer_Reiniciar);
			this->groupBox1->Controls->Add(this->BTN_Timer_Zerar);
			this->groupBox1->Controls->Add(this->BTN_Timer_Parar);
			this->groupBox1->Controls->Add(this->BTN_Timer_Iniciar);
			this->groupBox1->Location = System::Drawing::Point(296, 200);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 112);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Timer";
			// 
			// LBL_Timer_Sec
			// 
			this->LBL_Timer_Sec->AutoSize = true;
			this->LBL_Timer_Sec->Location = System::Drawing::Point(48, 16);
			this->LBL_Timer_Sec->Name = L"LBL_Timer_Sec";
			this->LBL_Timer_Sec->Size = System::Drawing::Size(26, 13);
			this->LBL_Timer_Sec->TabIndex = 1;
			this->LBL_Timer_Sec->Text = L"Sec";
			// 
			// LBL_Timer_Min
			// 
			this->LBL_Timer_Min->AutoSize = true;
			this->LBL_Timer_Min->Location = System::Drawing::Point(8, 16);
			this->LBL_Timer_Min->Name = L"LBL_Timer_Min";
			this->LBL_Timer_Min->Size = System::Drawing::Size(24, 13);
			this->LBL_Timer_Min->TabIndex = 1;
			this->LBL_Timer_Min->Text = L"Min";
			// 
			// Timer_Sec
			// 
			this->Timer_Sec->Location = System::Drawing::Point(48, 32);
			this->Timer_Sec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->Timer_Sec->Name = L"Timer_Sec";
			this->Timer_Sec->Size = System::Drawing::Size(32, 20);
			this->Timer_Sec->TabIndex = 0;
			// 
			// Timer_Min
			// 
			this->Timer_Min->Location = System::Drawing::Point(8, 32);
			this->Timer_Min->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->Timer_Min->Name = L"Timer_Min";
			this->Timer_Min->Size = System::Drawing::Size(32, 20);
			this->Timer_Min->TabIndex = 0;
			// 
			// BTN_Timer_Reiniciar
			// 
			this->BTN_Timer_Reiniciar->Location = System::Drawing::Point(104, 16);
			this->BTN_Timer_Reiniciar->Name = L"BTN_Timer_Reiniciar";
			this->BTN_Timer_Reiniciar->Size = System::Drawing::Size(72, 23);
			this->BTN_Timer_Reiniciar->TabIndex = 1;
			this->BTN_Timer_Reiniciar->Text = L"Reiniciar";
			this->BTN_Timer_Reiniciar->UseVisualStyleBackColor = true;
			this->BTN_Timer_Reiniciar->Click += gcnew System::EventHandler(this, &Placar::BTN_Timer_Reiniciar_Click);
			// 
			// BTN_Timer_Zerar
			// 
			this->BTN_Timer_Zerar->Location = System::Drawing::Point(104, 40);
			this->BTN_Timer_Zerar->Name = L"BTN_Timer_Zerar";
			this->BTN_Timer_Zerar->Size = System::Drawing::Size(72, 23);
			this->BTN_Timer_Zerar->TabIndex = 1;
			this->BTN_Timer_Zerar->Text = L"Zerar";
			this->BTN_Timer_Zerar->UseVisualStyleBackColor = true;
			this->BTN_Timer_Zerar->Click += gcnew System::EventHandler(this, &Placar::BTN_Timer_Zerar_Click);
			// 
			// BTN_Timer_Parar
			// 
			this->BTN_Timer_Parar->Location = System::Drawing::Point(104, 64);
			this->BTN_Timer_Parar->Name = L"BTN_Timer_Parar";
			this->BTN_Timer_Parar->Size = System::Drawing::Size(72, 23);
			this->BTN_Timer_Parar->TabIndex = 1;
			this->BTN_Timer_Parar->Text = L"Parar";
			this->BTN_Timer_Parar->UseVisualStyleBackColor = true;
			this->BTN_Timer_Parar->Click += gcnew System::EventHandler(this, &Placar::BTN_Timer_Parar_Click);
			// 
			// BTN_Timer_Iniciar
			// 
			this->BTN_Timer_Iniciar->Location = System::Drawing::Point(8, 64);
			this->BTN_Timer_Iniciar->Name = L"BTN_Timer_Iniciar";
			this->BTN_Timer_Iniciar->Size = System::Drawing::Size(72, 23);
			this->BTN_Timer_Iniciar->TabIndex = 1;
			this->BTN_Timer_Iniciar->Text = L"Iniciar";
			this->BTN_Timer_Iniciar->UseVisualStyleBackColor = true;
			this->BTN_Timer_Iniciar->Click += gcnew System::EventHandler(this, &Placar::BTN_Timer_Iniciar_Click);
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &Placar::Timer_Tick);
			// 
			// BTN_ROD_ADD
			// 
			this->BTN_ROD_ADD->Location = System::Drawing::Point(144, 232);
			this->BTN_ROD_ADD->Name = L"BTN_ROD_ADD";
			this->BTN_ROD_ADD->Size = System::Drawing::Size(72, 23);
			this->BTN_ROD_ADD->TabIndex = 1;
			this->BTN_ROD_ADD->Text = L"+1";
			this->BTN_ROD_ADD->UseVisualStyleBackColor = true;
			this->BTN_ROD_ADD->Click += gcnew System::EventHandler(this, &Placar::BTN_ROD_ADD_Click);
			// 
			// BTN_ROD_Minus
			// 
			this->BTN_ROD_Minus->Location = System::Drawing::Point(144, 256);
			this->BTN_ROD_Minus->Name = L"BTN_ROD_Minus";
			this->BTN_ROD_Minus->Size = System::Drawing::Size(72, 23);
			this->BTN_ROD_Minus->TabIndex = 1;
			this->BTN_ROD_Minus->Text = L"-1";
			this->BTN_ROD_Minus->UseVisualStyleBackColor = true;
			this->BTN_ROD_Minus->Click += gcnew System::EventHandler(this, &Placar::BTN_ROD_Minus_Click);
			// 
			// Placar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(431, 320);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Time_B_GroupBox);
			this->Controls->Add(this->LBL_Rodadas);
			this->Controls->Add(this->BTN_ROD_Minus);
			this->Controls->Add(this->BTN_ROD_ADD);
			this->Controls->Add(this->BTN_Reiniciar);
			this->Controls->Add(this->Time_A_GroupBox);
			this->Controls->Add(this->TXT_Tot_Rodadas);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Placar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Placar";
			this->Time_A_GroupBox->ResumeLayout(false);
			this->Time_A_GroupBox->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->Time_B_GroupBox->ResumeLayout(false);
			this->Time_B_GroupBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Timer_Sec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Timer_Min))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void BTN_Timer_Iniciar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Timer_Reiniciar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Timer_Zerar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Timer_Parar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Beep();
private: System::Void BTN_Acertou_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Errou_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Acertou_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Errou_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_ROD_ADD_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_ROD_Minus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BTN_Reiniciar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TesteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
