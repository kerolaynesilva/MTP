#include <cmath>

#pragma once

namespace projGUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 




	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;





	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;






	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMultiplicacao;




	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Button^  btnPosng;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnCE;







	private: System::Windows::Forms::Button^  btnFatorial;

	private: System::Windows::Forms::Button^  btnPotencia;
	private: System::Windows::Forms::Button^  btnRaizQuadrada;
	private: System::Windows::Forms::Button^  btnResultado;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->btnPosng = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btnPotencia = (gcnew System::Windows::Forms::Button());
			this->btnRaizQuadrada = (gcnew System::Windows::Forms::Button());
			this->btnResultado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(25, 18);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(438, 75);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(25, 114);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(61, 61);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(92, 114);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(62, 61);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(160, 114);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(64, 61);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->Location = System::Drawing::Point(254, 114);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(68, 61);
			this->btnAdicao->TabIndex = 1;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = true;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btn4
			// 
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(25, 185);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(61, 61);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(92, 185);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(62, 61);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(160, 185);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(64, 61);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->Location = System::Drawing::Point(254, 181);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(68, 61);
			this->btnSubtracao->TabIndex = 1;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = true;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btn1
			// 
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(25, 252);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(61, 61);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(92, 252);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(62, 61);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(160, 252);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(64, 61);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(254, 252);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(68, 61);
			this->btnMultiplicacao->TabIndex = 1;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = true;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btn0
			// 
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(25, 319);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(61, 61);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnVirgula->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirgula->Location = System::Drawing::Point(92, 319);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(62, 61);
			this->btnVirgula->TabIndex = 1;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = true;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// btnPosng
			// 
			this->btnPosng->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPosng->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosng->Location = System::Drawing::Point(160, 319);
			this->btnPosng->Name = L"btnPosng";
			this->btnPosng->Size = System::Drawing::Size(64, 61);
			this->btnPosng->TabIndex = 1;
			this->btnPosng->Text = L"±";
			this->btnPosng->UseVisualStyleBackColor = true;
			this->btnPosng->Click += gcnew System::EventHandler(this, &Form1::btnPosng_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(254, 319);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(66, 61);
			this->btnDivisao->TabIndex = 1;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = true;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnCE
			// 
			this->btnCE->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(328, 114);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(77, 61);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFatorial->Location = System::Drawing::Point(326, 181);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(79, 61);
			this->btnFatorial->TabIndex = 1;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = true;
			this->btnFatorial->Click += gcnew System::EventHandler(this, &Form1::btnFatorial_Click);
			// 
			// btnPotencia
			// 
			this->btnPotencia->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPotencia->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPotencia->Location = System::Drawing::Point(328, 252);
			this->btnPotencia->Name = L"btnPotencia";
			this->btnPotencia->Size = System::Drawing::Size(77, 61);
			this->btnPotencia->TabIndex = 1;
			this->btnPotencia->Text = L"x^y";
			this->btnPotencia->UseVisualStyleBackColor = true;
			this->btnPotencia->Click += gcnew System::EventHandler(this, &Form1::btnPotencia_Click);
			// 
			// btnRaizQuadrada
			// 
			this->btnRaizQuadrada->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnRaizQuadrada->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaizQuadrada->Location = System::Drawing::Point(326, 319);
			this->btnRaizQuadrada->Name = L"btnRaizQuadrada";
			this->btnRaizQuadrada->Size = System::Drawing::Size(79, 61);
			this->btnRaizQuadrada->TabIndex = 1;
			this->btnRaizQuadrada->Text = L"√";
			this->btnRaizQuadrada->UseVisualStyleBackColor = true;
			this->btnRaizQuadrada->Click += gcnew System::EventHandler(this, &Form1::btnRaizQuadrada_Click);
			// 
			// btnResultado
			// 
			this->btnResultado->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnResultado->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResultado->Location = System::Drawing::Point(25, 386);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(199, 61);
			this->btnResultado->TabIndex = 1;
			this->btnResultado->Text = L"=";
			this->btnResultado->UseVisualStyleBackColor = true;
			this->btnResultado->Click += gcnew System::EventHandler(this, &Form1::btnResultado_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(475, 459);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btnRaizQuadrada);
			this->Controls->Add(this->btnPotencia);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnPosng);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnResultado);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->TransparencyKey = System::Drawing::Color::Silver;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
        #define MAXDIGITOS 23
		bool flagVirgula;
		bool flagResultado;
		double memoria;
		char operacao;
		void liberaDisplay(){
			lblDisplay->Text = "0";
			flagVirgula = false;
			flagResultado = false;
		}
		double fatorial(double numero){
			return (numero > 1)? numero*fatorial(numero-1) : 1;
		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 flagVirgula = false;
				 flagResultado = false;
				 memoria = 0.0;
				 operacao = '\0';
			 }
private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblDisplay->Text =  "0";
			 flagVirgula = false;
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0")
				 lblDisplay->Text = lblDisplay->Text + "0";
			if(flagResultado){
				lblDisplay->Text = "0";
				flagResultado = false;
			}
		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "1";
			 else{
				 lblDisplay->Text = "1";
				 flagResultado = false;
			 }
		 }
private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS-1)
			 if(!flagVirgula){
			  lblDisplay->Text = lblDisplay->Text + ",";
			  flagVirgula = true;
			 }
		 }
private: System::Void btnPosng_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text != "0"){
			 //Versao 1
			 /*double numero = System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text = System::Convert::ToString(numero*(-1));*/
			  
			 //Versao 2 
			 if(lblDisplay->Text->Substring(0,1) == "-")
				 lblDisplay->Text = lblDisplay->Text->Substring(1);
			 else
				 lblDisplay->Text = "-" + lblDisplay->Text;
			  }	
		 }		 
private: System::Void btnRaizQuadrada_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text = System::Convert::ToString(sqrt(numero));
			 if(lblDisplay->Text->Length > MAXDIGITOS)
			   lblDisplay->Text = lblDisplay->Text->Substring(0,MAXDIGITOS);
			 flagResultado = true;
		 }

private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);			 
			 operacao = '+';
			 liberaDisplay();
		 }

private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);			 
			 operacao = '-';
			 liberaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);			 
			 operacao = '*';
			 liberaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);			 
			 operacao = '/';
			 liberaDisplay();
		 }
private: System::Void btnResultado_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);	
			 switch(operacao){
			 case '+': memoria += numero; break;
			 case '-': memoria -= numero; break;
			 case '*': memoria *= numero; break;
			 case '/': memoria /= numero; break;
		     case '^': memoria = Math::Pow(memoria,numero); break;
			 }
			 if(memoria > Math::Pow(10,MAXDIGITOS)-1)
			     lblDisplay->Text = memoria.ToString("e");
			 else
				 lblDisplay->Text = memoria.ToString();
			 flagResultado = true;
		 }

private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "2";
			 else{
				 lblDisplay->Text = "2";
				 flagResultado = false;
			 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "3";
			 else{
				 lblDisplay->Text = "3";
				 flagResultado = false;
			 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "4";
			 else{
				 lblDisplay->Text = "4";
				 flagResultado = false;
			 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "5";
			 else{
				 lblDisplay->Text = "5";
				 flagResultado = false;
			 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "6";
			 else{
				 lblDisplay->Text = "6";
				 flagResultado = false;
			 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "7";
			 else{
				 lblDisplay->Text = "7";
				 flagResultado = false;
			 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "8";
			 else{
				 lblDisplay->Text = "8";
				 flagResultado = false;
			 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS)
			 if(lblDisplay->Text != "0" && !flagResultado)
				 lblDisplay->Text = lblDisplay->Text + "9";
			 else{
				 lblDisplay->Text = "9";
				 flagResultado = false;
			 }
		 }
private: System::Void btnPotencia_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);			 
			 operacao = '^';
			 liberaDisplay();
		 }
private: System::Void btnFatorial_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 if(numero > Math::Pow(10,MAXDIGITOS)-1)
			  lblDisplay->Text = numero.ToString("e");
			 else
				 lblDisplay->Text = numero.ToString();
			 flagResultado = true;
		 }
};
}

