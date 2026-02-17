#pragma once
#include <cmath>

namespace FirstWinProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			comboBox1->SelectedItem = "DEC";
			currentBase = 10;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_min_plus;
	private: System::Windows::Forms::Button^ btn_percent;





	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_multip;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button7;





	private: System::Windows::Forms::Button^ btn_substr;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;




	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ btn_result;
	private: System::Windows::Forms::Button^ btn_dot;
	private: System::Windows::Forms::Button^ button0;




	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::Button^ btn_denom;

	private: System::Windows::Forms::Button^ btn_secpow;
	private: System::Windows::Forms::Button^ btn_root;
	private: System::Windows::Forms::Button^ btn_bckspace;







	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonB;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonF;
	private: System::Windows::Forms::Button^ buttonMC;

	private: System::Windows::Forms::Button^ buttonMR;
	private: System::Windows::Forms::Button^ buttonMPlus;
	private: System::Windows::Forms::Button^ buttonMMinus;



	private: System::Windows::Forms::Button^ buttonMS;
	private: System::Windows::Forms::ListBox^ listBoxMemory;














	protected:

	protected:

	protected:


	protected:





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_min_plus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_multip = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_substr = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_result = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->btn_denom = (gcnew System::Windows::Forms::Button());
			this->btn_secpow = (gcnew System::Windows::Forms::Button());
			this->btn_root = (gcnew System::Windows::Forms::Button());
			this->btn_bckspace = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonMC = (gcnew System::Windows::Forms::Button());
			this->buttonMR = (gcnew System::Windows::Forms::Button());
			this->buttonMPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMS = (gcnew System::Windows::Forms::Button());
			this->listBoxMemory = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_exit->Location = System::Drawing::Point(349, -1);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(37, 36);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// result_label
			// 
			this->result_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->result_label->Location = System::Drawing::Point(65, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(291, 61);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::Color::White;
			this->btn_ac->Location = System::Drawing::Point(78, 127);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(65, 55);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click_1);
			// 
			// btn_min_plus
			// 
			this->btn_min_plus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_min_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_min_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min_plus->ForeColor = System::Drawing::Color::White;
			this->btn_min_plus->Location = System::Drawing::Point(149, 127);
			this->btn_min_plus->Name = L"btn_min_plus";
			this->btn_min_plus->Size = System::Drawing::Size(65, 55);
			this->btn_min_plus->TabIndex = 3;
			this->btn_min_plus->Text = L"+/-";
			this->btn_min_plus->UseVisualStyleBackColor = false;
			this->btn_min_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_min_plus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->ForeColor = System::Drawing::Color::White;
			this->btn_percent->Location = System::Drawing::Point(220, 127);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(65, 55);
			this->btn_percent->TabIndex = 4;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::Orange;
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->ForeColor = System::Drawing::Color::White;
			this->btn_divide->Location = System::Drawing::Point(291, 193);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(65, 55);
			this->btn_divide->TabIndex = 5;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_multip
			// 
			this->btn_multip->BackColor = System::Drawing::Color::Orange;
			this->btn_multip->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_multip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multip->ForeColor = System::Drawing::Color::White;
			this->btn_multip->Location = System::Drawing::Point(291, 254);
			this->btn_multip->Name = L"btn_multip";
			this->btn_multip->Size = System::Drawing::Size(65, 55);
			this->btn_multip->TabIndex = 9;
			this->btn_multip->Text = L"*";
			this->btn_multip->UseVisualStyleBackColor = false;
			this->btn_multip->Click += gcnew System::EventHandler(this, &MyForm::btn_multip_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(220, 254);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(149, 254);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(78, 254);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_substr
			// 
			this->btn_substr->BackColor = System::Drawing::Color::Orange;
			this->btn_substr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_substr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_substr->ForeColor = System::Drawing::Color::White;
			this->btn_substr->Location = System::Drawing::Point(291, 315);
			this->btn_substr->Name = L"btn_substr";
			this->btn_substr->Size = System::Drawing::Size(65, 55);
			this->btn_substr->TabIndex = 13;
			this->btn_substr->Text = L"-";
			this->btn_substr->UseVisualStyleBackColor = false;
			this->btn_substr->Click += gcnew System::EventHandler(this, &MyForm::btn_substr_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(220, 315);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 12;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(149, 315);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 11;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(78, 315);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 55);
			this->button4->TabIndex = 10;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Orange;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::Color::White;
			this->btn_add->Location = System::Drawing::Point(291, 376);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(65, 55);
			this->btn_add->TabIndex = 17;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(220, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(149, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 55);
			this->button2->TabIndex = 15;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(78, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 55);
			this->button1->TabIndex = 14;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_result
			// 
			this->btn_result->BackColor = System::Drawing::Color::Orange;
			this->btn_result->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_result->ForeColor = System::Drawing::Color::White;
			this->btn_result->Location = System::Drawing::Point(291, 437);
			this->btn_result->Name = L"btn_result";
			this->btn_result->Size = System::Drawing::Size(65, 55);
			this->btn_result->TabIndex = 21;
			this->btn_result->Text = L"=";
			this->btn_result->UseVisualStyleBackColor = false;
			this->btn_result->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::Color::White;
			this->btn_dot->Location = System::Drawing::Point(220, 437);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->ForeColor = System::Drawing::Color::White;
			this->button0->Location = System::Drawing::Point(78, 437);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(136, 55);
			this->button0->TabIndex = 18;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// btn_denom
			// 
			this->btn_denom->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_denom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_denom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_denom->ForeColor = System::Drawing::Color::White;
			this->btn_denom->Location = System::Drawing::Point(78, 193);
			this->btn_denom->Name = L"btn_denom";
			this->btn_denom->Size = System::Drawing::Size(65, 55);
			this->btn_denom->TabIndex = 22;
			this->btn_denom->Text = L"1/x";
			this->btn_denom->UseVisualStyleBackColor = false;
			this->btn_denom->Click += gcnew System::EventHandler(this, &MyForm::btn_denom_Click_1);
			// 
			// btn_secpow
			// 
			this->btn_secpow->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_secpow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_secpow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_secpow->ForeColor = System::Drawing::Color::White;
			this->btn_secpow->Location = System::Drawing::Point(149, 193);
			this->btn_secpow->Name = L"btn_secpow";
			this->btn_secpow->Size = System::Drawing::Size(65, 55);
			this->btn_secpow->TabIndex = 23;
			this->btn_secpow->Text = L"х²";
			this->btn_secpow->UseVisualStyleBackColor = false;
			this->btn_secpow->Click += gcnew System::EventHandler(this, &MyForm::btn_secpow_Click);
			// 
			// btn_root
			// 
			this->btn_root->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_root->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_root->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_root->ForeColor = System::Drawing::Color::White;
			this->btn_root->Location = System::Drawing::Point(220, 193);
			this->btn_root->Name = L"btn_root";
			this->btn_root->Size = System::Drawing::Size(65, 55);
			this->btn_root->TabIndex = 24;
			this->btn_root->Text = L"√x";
			this->btn_root->UseVisualStyleBackColor = false;
			this->btn_root->Click += gcnew System::EventHandler(this, &MyForm::btn_root_Click);
			// 
			// btn_bckspace
			// 
			this->btn_bckspace->BackColor = System::Drawing::Color::IndianRed;
			this->btn_bckspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_bckspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_bckspace->ForeColor = System::Drawing::Color::White;
			this->btn_bckspace->Location = System::Drawing::Point(291, 127);
			this->btn_bckspace->Name = L"btn_bckspace";
			this->btn_bckspace->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_bckspace->Size = System::Drawing::Size(65, 55);
			this->btn_bckspace->TabIndex = 25;
			this->btn_bckspace->Text = L"⌫";
			this->btn_bckspace->UseVisualStyleBackColor = false;
			this->btn_bckspace->Click += gcnew System::EventHandler(this, &MyForm::btn_bckspace_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"DEC", L"BIN", L"OCT", L"HEX" });
			this->comboBox1->Location = System::Drawing::Point(7, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(65, 24);
			this->comboBox1->TabIndex = 33;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// buttonA
			// 
			this->buttonA->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonA->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonA->ForeColor = System::Drawing::Color::White;
			this->buttonA->Location = System::Drawing::Point(8, 127);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(65, 55);
			this->buttonA->TabIndex = 34;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonB
			// 
			this->buttonB->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonB->ForeColor = System::Drawing::Color::White;
			this->buttonB->Location = System::Drawing::Point(7, 193);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(65, 55);
			this->buttonB->TabIndex = 35;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->ForeColor = System::Drawing::Color::White;
			this->buttonC->Location = System::Drawing::Point(7, 254);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(65, 55);
			this->buttonC->TabIndex = 36;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonD
			// 
			this->buttonD->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonD->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonD->ForeColor = System::Drawing::Color::White;
			this->buttonD->Location = System::Drawing::Point(7, 315);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(65, 55);
			this->buttonD->TabIndex = 37;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonE
			// 
			this->buttonE->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonE->ForeColor = System::Drawing::Color::White;
			this->buttonE->Location = System::Drawing::Point(8, 376);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(65, 55);
			this->buttonE->TabIndex = 38;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = false;
			this->buttonE->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonF
			// 
			this->buttonF->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonF->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonF->ForeColor = System::Drawing::Color::White;
			this->buttonF->Location = System::Drawing::Point(8, 437);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(65, 55);
			this->buttonF->TabIndex = 39;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = false;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClick);
			// 
			// buttonMC
			// 
			this->buttonMC->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMC->ForeColor = System::Drawing::Color::White;
			this->buttonMC->Location = System::Drawing::Point(7, 82);
			this->buttonMC->Margin = System::Windows::Forms::Padding(0);
			this->buttonMC->Name = L"buttonMC";
			this->buttonMC->Size = System::Drawing::Size(65, 36);
			this->buttonMC->TabIndex = 40;
			this->buttonMC->Text = L"MC";
			this->buttonMC->UseVisualStyleBackColor = false;
			this->buttonMC->Click += gcnew System::EventHandler(this, &MyForm::buttonMC_Click);
			// 
			// buttonMR
			// 
			this->buttonMR->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMR->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMR->ForeColor = System::Drawing::Color::White;
			this->buttonMR->Location = System::Drawing::Point(78, 82);
			this->buttonMR->Margin = System::Windows::Forms::Padding(0);
			this->buttonMR->Name = L"buttonMR";
			this->buttonMR->Size = System::Drawing::Size(65, 36);
			this->buttonMR->TabIndex = 41;
			this->buttonMR->Text = L"MR";
			this->buttonMR->UseVisualStyleBackColor = false;
			this->buttonMR->Click += gcnew System::EventHandler(this, &MyForm::buttonMR_Click);
			// 
			// buttonMPlus
			// 
			this->buttonMPlus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMPlus->ForeColor = System::Drawing::Color::White;
			this->buttonMPlus->Location = System::Drawing::Point(149, 82);
			this->buttonMPlus->Margin = System::Windows::Forms::Padding(0);
			this->buttonMPlus->Name = L"buttonMPlus";
			this->buttonMPlus->Size = System::Drawing::Size(65, 36);
			this->buttonMPlus->TabIndex = 42;
			this->buttonMPlus->Text = L"M+";
			this->buttonMPlus->UseVisualStyleBackColor = false;
			this->buttonMPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonMPlus_Click);
			// 
			// buttonMMinus
			// 
			this->buttonMMinus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMMinus->ForeColor = System::Drawing::Color::White;
			this->buttonMMinus->Location = System::Drawing::Point(220, 82);
			this->buttonMMinus->Margin = System::Windows::Forms::Padding(0);
			this->buttonMMinus->Name = L"buttonMMinus";
			this->buttonMMinus->Size = System::Drawing::Size(65, 36);
			this->buttonMMinus->TabIndex = 43;
			this->buttonMMinus->Text = L"M-";
			this->buttonMMinus->UseVisualStyleBackColor = false;
			this->buttonMMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMMinus_Click);
			// 
			// buttonMS
			// 
			this->buttonMS->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->buttonMS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMS->ForeColor = System::Drawing::Color::White;
			this->buttonMS->Location = System::Drawing::Point(291, 82);
			this->buttonMS->Margin = System::Windows::Forms::Padding(0);
			this->buttonMS->Name = L"buttonMS";
			this->buttonMS->Size = System::Drawing::Size(65, 36);
			this->buttonMS->TabIndex = 44;
			this->buttonMS->Text = L"MS";
			this->buttonMS->UseVisualStyleBackColor = false;
			this->buttonMS->Click += gcnew System::EventHandler(this, &MyForm::buttonMS_Click);
			// 
			// listBoxMemory
			// 
			this->listBoxMemory->FormattingEnabled = true;
			this->listBoxMemory->ItemHeight = 16;
			this->listBoxMemory->Location = System::Drawing::Point(8, 7);
			this->listBoxMemory->Name = L"listBoxMemory";
			this->listBoxMemory->Size = System::Drawing::Size(65, 36);
			this->listBoxMemory->TabIndex = 45;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(384, 516);
			this->Controls->Add(this->listBoxMemory);
			this->Controls->Add(this->buttonMS);
			this->Controls->Add(this->buttonMMinus);
			this->Controls->Add(this->buttonMPlus);
			this->Controls->Add(this->buttonMR);
			this->Controls->Add(this->buttonMC);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btn_bckspace);
			this->Controls->Add(this->btn_root);
			this->Controls->Add(this->btn_secpow);
			this->Controls->Add(this->btn_denom);
			this->Controls->Add(this->btn_result);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_substr);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_multip);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_min_plus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::MyForm_TextChanged);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



	private:System::Void BtnNumberClick(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_equal)
		{
			this->result_label->Text = button->Text;
			is_equal = false;
		}
			
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
	
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('+');
	}
	private: System::Void btn_substr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('-');
	}
	private: System::Void btn_multip_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('*');
	}
	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('/');
	}
	
	private: System::Void math_action(char action) 
	{

		String^ selected = comboBox1->SelectedItem->ToString();
		if (selected == "DEC")
		{
			this->first_num = System::Convert::ToDouble(this->result_label->Text);
		}
		else
		{
			
			this->first_num = System::Convert::ToInt32(ConvertToDecimal(this->result_label->Text, currentBase));
		}
		this->user_action = action;
		this->result_label->Text = "0";
		
	}

	private: System::Void btn_denom_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		float res;
		if (first_num == 0)
		{

			MessageBox::Show(this, "Дія заборонена", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->result_label->ForeColor = Color::Red;
			res = 0;
		}
		else res = 1 / first_num;
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}



	private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		if (user_action == ' ')
			return;
		String^ selected = comboBox1->SelectedItem->ToString();
		if (selected == "DEC")
		{
			float second = System::Convert::ToDouble(this->result_label->Text);
			float res;
			switch (this->user_action)
			{
			case'+': res = this->first_num + second; break;
			case'-': res = this->first_num - second; break;
			case'*': res = this->first_num * second; break;
			case'%': res = this->first_num * second / 100; break;
			case'/':
				if (second == 0)
				{

					MessageBox::Show(this, "Дія заборонена", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					this->result_label->ForeColor = Color::Red;
					res = 0;
				}

				else res = this->first_num / second; break;

			}

			this->is_equal = true;
			this->result_label->Text = System::Convert::ToString(res);
		}
		else
		{
			int second = System::Convert::ToInt32(ConvertToDecimal(this->result_label->Text, currentBase));
			int res;
			switch (this->user_action)
			{
			case'+': res = this->first_num + second; break;
			case'-': res = this->first_num - second; break;
			case'*': res = this->first_num * second; break;
			case'%': res = this->first_num * second / 100; break;
			case'/':
				if (second == 0)
				{

					MessageBox::Show(this, "Дія заборонена", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					this->result_label->ForeColor = Color::Red;
					res = 0;
				}

				else res = this->first_num / second; break;

			}

			

			this->is_equal = true;
			this->result_label->Text = System::Convert::ToString(ConvertFromDecimal(res, currentBase));
		}
		

	}

	private:
		System::Collections::Generic::List<long long>^ memoryList =
			gcnew System::Collections::Generic::List<long long>();

	private: System::Void btn_ac_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false; 
	}
	private: System::Void btn_min_plus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');

	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if(!text->Contains(","))
			this->result_label->Text = text + ",";
	}
	
	private: System::Void btn_secpow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		float res;
		res = first_num * first_num;
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_root_Click(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		float res;
		if (first_num < 0)
		{

			MessageBox::Show(this, "Дія заборонена", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->result_label->ForeColor = Color::Red;
			res = 0;
		}
		res = sqrt(first_num);
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_bckspace_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToDouble(result_label->Text) < 0 && result_label->Text->Length == 2)
			result_label->Text = "0";
		if (result_label->Text->Length > 1)
			result_label->Text = result_label->Text->Remove(result_label->Text->Length - 1);
		else
			result_label->Text = "0";
	}

	private: String^ ConvertFromDecimal(long long number, int base)
	{
		if (number == 0)
			return "0";

		String^ digits = "0123456789ABCDEF";
		String^ result = "";

		while (number > 0)
		{
			int remainder = number % base;
			result = digits[remainder] + result;
			number /= base;
		}

		return result;
	}

	private: long long ConvertToDecimal(String^ value, int base)
	{
		if (base < 2 || base > 16)
			throw gcnew System::ArgumentException("Wrong base");

		long long result = 0;
		String^ digits = "0123456789ABCDEF";

		value = value->ToUpper();

		for (int i = 0; i < value->Length; i++)
		{
			int digit = digits->IndexOf(value[i]);

			if (digit < 0 || digit >= base)
				throw gcnew System::FormatException("Invalid digit");

			result = result * base + digit;
		}

		return result;
	}

	private:
		int currentBase = 10;
		long long internalValue = 0;

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		int newBase = 10;

		String^ selected = comboBox1->SelectedItem->ToString();

		if (selected == "BIN") newBase = 2;
		else if (selected == "OCT") newBase = 8;
		else if (selected == "DEC") newBase = 10;
		else if (selected == "HEX") newBase = 16;

		try
		{
			internalValue = ConvertToDecimal(result_label->Text, currentBase);

			currentBase = newBase;

			result_label->Text = ConvertFromDecimal(internalValue, currentBase);
		}
		catch (...)
		{
			MessageBox::Show("Помилка конвертації");
		}
		UpdateDigitButtons();
		RefreshMemoryListBox();
	}

	private: void RefreshMemoryListBox()
	{
		listBoxMemory->Items->Clear();

		for each (long long value in memoryList)
		{
			listBoxMemory->Items->Add(ConvertFromDecimal(value, currentBase));
		}
	}

	private: void UpdateDigitButtons()
	{
		button0->Enabled = true;
		button1->Enabled = true;

		button2->Enabled = (currentBase > 2);
		button3->Enabled = (currentBase > 3);
		button4->Enabled = (currentBase > 4);
		button5->Enabled = (currentBase > 5);
		button6->Enabled = (currentBase > 6);
		button7->Enabled = (currentBase > 7);
		button8->Enabled = (currentBase > 8);
		button9->Enabled = (currentBase > 9);

		btn_root->Enabled = (currentBase == 10);
		btn_secpow->Enabled = (currentBase == 10);
		btn_dot->Enabled = (currentBase == 10);
		btn_percent->Enabled = (currentBase == 10);
		btn_denom->Enabled = (currentBase == 10);

		buttonA->Enabled = (currentBase > 10);
		buttonB->Enabled = (currentBase > 11);
		buttonC->Enabled = (currentBase > 12);
		buttonD->Enabled = (currentBase > 13);
		buttonE->Enabled = (currentBase > 14);
		buttonF->Enabled = (currentBase > 15);
	}
	private: System::Void buttonMS_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			long long value = ConvertToDecimal(result_label->Text, currentBase);

			memoryList->Add(value);

			listBoxMemory->Items->Add(ConvertFromDecimal(value, currentBase));
		}
		catch (...)
		{
			MessageBox::Show("Помилка збереження");
		}
	}
	private: System::Void buttonMR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBoxMemory->SelectedIndex < 0)
			return;

		int index = listBoxMemory->SelectedIndex;

		long long value = memoryList[index];

		result_label->Text = ConvertFromDecimal(value, currentBase);
	}
	private: System::Void buttonMMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBoxMemory->SelectedIndex < 0)
			return;

		int index = listBoxMemory->SelectedIndex;

		long long currentValue =
			ConvertToDecimal(result_label->Text, currentBase);

		memoryList[index] -= currentValue;

		RefreshMemoryListBox();
	}
	private: System::Void buttonMPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBoxMemory->SelectedIndex < 0)
			return;

		int index = listBoxMemory->SelectedIndex;

		long long currentValue = ConvertToDecimal(result_label->Text, currentBase);

		memoryList[index] += currentValue;

		RefreshMemoryListBox();
	}
	private: System::Void buttonMC_Click(System::Object^ sender, System::EventArgs^ e) {
		memoryList->Clear();
		listBoxMemory->Items->Clear();
	}
};
}

