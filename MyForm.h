#pragma once
namespace myforMarky {
#include <stdlib.h>
#include <time.h>
//#include <thread>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Text;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array<String^>^ colores = gcnew array<String^>(1);
		String^ color;
		String^ Blue = gcnew String("Blue");
		String^ Green = gcnew String("Green");
		String^ Yellow = gcnew String("Yellow");
		String^ Red = gcnew String("Red");
	private: System::Windows::Forms::Button^ buttonRed;
	public: System::Windows::Forms::Timer^ timer1;

	public:
		int cont = 0, conta = 0, contados = 0, i = 0;
		bool mos = true, ent = true, game = true, bandera = true;
		void tono(int hz,int duration) {
			_beep(hz, duration);
		}
		void AgregarColor(String^ nuevo) {
			array< String^>^ aux = gcnew array<String^>(cont + 1);

			for (int i = 0; i < cont; i++)
				aux[i] = colores[i];

			aux[cont] = nuevo;

			if (colores != nullptr)
				delete[] colores;

			colores = aux;
			cont++;
			delete[] aux;
		}
		array<String^>^ ResetColores() {
			delete[] colores;
			array<String^>^ coloresNew = gcnew array<String^>(1);
			cont = 0;
			return coloresNew;
		}

		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonBlue;
	private: System::Windows::Forms::Button^ buttonGreen;
	private: System::Windows::Forms::Button^ buttonYellow;
	private: System::Windows::Forms::Button^ buttonPlay;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->buttonBlue = (gcnew System::Windows::Forms::Button());
			   this->buttonGreen = (gcnew System::Windows::Forms::Button());
			   this->buttonYellow = (gcnew System::Windows::Forms::Button());
			   this->buttonPlay = (gcnew System::Windows::Forms::Button());
			   this->buttonRed = (gcnew System::Windows::Forms::Button());
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->SuspendLayout();
			   // 
			   // buttonBlue
			   // 
			   this->buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
			   this->buttonBlue->Location = System::Drawing::Point(30, 115);
			   this->buttonBlue->Name = L"buttonBlue";
			   this->buttonBlue->Size = System::Drawing::Size(100, 280);
			   this->buttonBlue->TabIndex = 0;
			   this->buttonBlue->Text = L"azul";
			   this->buttonBlue->UseVisualStyleBackColor = false;
			   this->buttonBlue->Click += gcnew System::EventHandler(this, &MyForm::buttonBlue_Click);
			   this->buttonBlue->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonBlue_MouseDown);
			   this->buttonBlue->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonBlue_MouseUp);
			   // 
			   // buttonGreen
			   // 
			   this->buttonGreen->BackColor = System::Drawing::Color::Olive;
			   this->buttonGreen->Location = System::Drawing::Point(136, 12);
			   this->buttonGreen->Name = L"buttonGreen";
			   this->buttonGreen->Size = System::Drawing::Size(280, 100);
			   this->buttonGreen->TabIndex = 1;
			   this->buttonGreen->Text = L"verde";
			   this->buttonGreen->UseVisualStyleBackColor = false;
			   this->buttonGreen->Click += gcnew System::EventHandler(this, &MyForm::buttonGreen_Click);
			   this->buttonGreen->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonGreen_MouseDown);
			   this->buttonGreen->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonGreen_MouseUp);
			   // 
			   // buttonYellow
			   // 
			   this->buttonYellow->BackColor = System::Drawing::Color::DarkGoldenrod;
			   this->buttonYellow->FlatAppearance->BorderSize = 5;
			   this->buttonYellow->Location = System::Drawing::Point(422, 115);
			   this->buttonYellow->Name = L"buttonYellow";
			   this->buttonYellow->Size = System::Drawing::Size(100, 280);
			   this->buttonYellow->TabIndex = 2;
			   this->buttonYellow->Text = L"amarillo";
			   this->buttonYellow->UseVisualStyleBackColor = false;
			   this->buttonYellow->Click += gcnew System::EventHandler(this, &MyForm::buttonYellow_Click);
			   this->buttonYellow->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonYellow_MouseDown);
			   this->buttonYellow->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonYellow_MouseUp);
			   // 
			   // buttonPlay
			   // 
			   this->buttonPlay->BackColor = System::Drawing::Color::Silver;
			   this->buttonPlay->Location = System::Drawing::Point(532, 503);
			   this->buttonPlay->Name = L"buttonPlay";
			   this->buttonPlay->Size = System::Drawing::Size(81, 38);
			   this->buttonPlay->TabIndex = 3;
			   this->buttonPlay->Text = L"Play";
			   this->buttonPlay->UseVisualStyleBackColor = false;
			   this->buttonPlay->Click += gcnew System::EventHandler(this, &MyForm::buttonPlay_Click);
			   // 
			   // buttonRed
			   // 
			   this->buttonRed->BackColor = System::Drawing::Color::Brown;
			   this->buttonRed->Location = System::Drawing::Point(136, 402);
			   this->buttonRed->Name = L"buttonRed";
			   this->buttonRed->Size = System::Drawing::Size(280, 100);
			   this->buttonRed->TabIndex = 4;
			   this->buttonRed->Text = L"rojo";
			   this->buttonRed->UseVisualStyleBackColor = false;
			   this->buttonRed->Click += gcnew System::EventHandler(this, &MyForm::buttonRed_Click);
			   this->buttonRed->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonRed_MouseDown);
			   this->buttonRed->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::buttonRed_MouseUp);
			   // 
			   // timer1
			   // 
			   this->timer1->Interval = 500;
			   this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::Black;
			   this->ClientSize = System::Drawing::Size(655, 553);
			   this->Controls->Add(this->buttonRed);
			   this->Controls->Add(this->buttonPlay);
			   this->Controls->Add(this->buttonYellow);
			   this->Controls->Add(this->buttonGreen);
			   this->Controls->Add(this->buttonBlue);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"MyForm";
			   this->Text = L"Simon";
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}

	private: System::Void buttonBlue_Click(System::Object^ sender, System::EventArgs^ e) {

		if (colores[contados] != Blue) {
			game = false;
			Text = "Game Over  Puntos: " + conta ;
		}
		else if (conta == contados) {
			timer1->Enabled = true;
			mos = true;
			conta++;
			contados = 0;
			buttonBlue->Enabled = false;
			buttonGreen->Enabled = false;
			buttonRed->Enabled = false;
			buttonYellow->Enabled = false;
		}
		else {
			contados++;
		}

	}

	private: System::Void buttonGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colores[contados] != Green) {
			game = false;
			Text = "Game Over  Puntos: " + conta;
		}
		else if (conta == contados) {
			timer1->Enabled = true;
			mos = true;
			conta++;
			contados = 0;
			buttonBlue->Enabled = false;
			buttonGreen->Enabled = false;
			buttonRed->Enabled = false;
			buttonYellow->Enabled = false;
		}
		else {
			contados++;
		}
	}

	private: System::Void buttonYellow_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colores[contados] != Yellow) {
			game = false;
			Text = "Game Over  Puntos: " + conta;
		}
		else if (conta == contados) {
			timer1->Enabled = true;
			mos = true;
			conta++;
			contados = 0;
			buttonBlue->Enabled = false;
			buttonGreen->Enabled = false;
			buttonRed->Enabled = false;
			buttonYellow->Enabled = false;
		}
		else {
			contados++;
		}
	}
	private: System::Void buttonRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colores[contados] != Red)
		{
			game = false;
			Text = "Game Over  Puntos: " + conta;
		}
		else if (conta == contados) {
			timer1->Enabled = true;
			mos = true;
			conta++;
			contados = 0;
			buttonBlue->Enabled = false;
			buttonGreen->Enabled = false;
			buttonRed->Enabled = false;
			buttonYellow->Enabled = false;
		}
		else {
			contados++;
		}

	}
	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

	}
	private: System::Void buttonPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		conta = contados = 0;
		Text = "           Puntos: " + conta;
		game = true;
		srand(time(NULL));
		for (int i = 0;i < 100;i++) {
			int R = rand() % 5;
			if (R != 0) {

				if (R == 1)
				{
					color = Blue;
					AgregarColor(color);
				}
				else if (R == 2)
				{
					color = Green;
					AgregarColor(color);
				}
				else if (R == 3)
				{
					color = Yellow;
					AgregarColor(color);
				}
				else if (R == 4)
				{
					color = Red;
					AgregarColor(color);
				}

			}
		}
		timer1->Enabled = true;
		mos = true;
	}



	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (game == false) {
			colores = ResetColores();
			mos = false;
			contados = 0;
			conta = 0;
			buttonPlay->Enabled = true;
			buttonBlue->Enabled = false;
			buttonGreen->Enabled = false;
			buttonRed->Enabled = false;
			buttonYellow->Enabled = false;
		}else if (mos && i <= conta) {

			if (bandera == true)	{
				Text = "           Puntos: " + conta;
				if (colores[i] == Blue)
				{
					//BackColor = System::Drawing::Color::Blue;
					tono(700, 80);
					buttonBlue->BackColor = System::Drawing::Color::Blue;
					buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
					buttonGreen->BackColor = System::Drawing::Color::Olive;
					buttonRed->BackColor = System::Drawing::Color::Brown;
					//Text = " " + colores[i] + " " + (i + 1);
					i++;
					bandera = false;
				}
				else if (colores[i] == Yellow)
				{
					//BackColor = System::Drawing::Color::Yellow;
					tono(900, 80);
					buttonYellow->BackColor = System::Drawing::Color::Yellow;
					buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
					buttonGreen->BackColor = System::Drawing::Color::Olive;
					buttonRed->BackColor = System::Drawing::Color::Brown;
					//Text = " " + colores[i] + " " + (i + 1);
					i++;
					bandera = false;
				}
				else if (colores[i] == Green)
				{
					//BackColor = System::Drawing::Color::Green;
					tono(800, 80);
					buttonGreen->BackColor = System::Drawing::Color::Green;
					buttonRed->BackColor = System::Drawing::Color::Brown;
					buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
					buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
					//Text = " " + colores[i] + " " + (i + 1);
					i++;
					bandera = false;
				}
				else if (colores[i] == Red)
				{
					//BackColor = System::Drawing::Color::Red;
					tono(600, 80);
					buttonRed->BackColor = System::Drawing::Color::Red;
					buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
					buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
					buttonGreen->BackColor = System::Drawing::Color::Olive;
					//Text = " " + colores[i] + " " + (i + 1);
					i++;
					bandera = false;
				}
			}
			else
			{
				buttonRed->BackColor = System::Drawing::Color::Brown;;
				buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
				buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
				buttonGreen->BackColor = System::Drawing::Color::Olive;
				bandera = true;
			}
		buttonPlay->Enabled = false;
		buttonBlue->Enabled = false;
		buttonGreen->Enabled = false;
		buttonRed->Enabled = false;
		buttonYellow->Enabled = false;
	}else {
		i = 0;
		mos = false;
		buttonBlue->Enabled = true;
		buttonGreen->Enabled = true;
		buttonRed->Enabled = true;
		buttonYellow->Enabled = true;
		buttonGreen->BackColor = System::Drawing::Color::Olive;
		buttonRed->BackColor = System::Drawing::Color::Brown;
		buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
		buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
		buttonPlay->Enabled = false;
	}
}
private: System::Void buttonYellow_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonYellow->BackColor = System::Drawing::Color::Yellow;
	tono(900, 80);
}
private: System::Void buttonYellow_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonYellow->BackColor = System::Drawing::Color::Goldenrod;
}
private: System::Void buttonRed_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonRed->BackColor = System::Drawing::Color::Red;
	_beep(600, 80);
}

private: System::Void buttonRed_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonRed->BackColor = System::Drawing::Color::Brown;
}
private: System::Void buttonBlue_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonBlue->BackColor = System::Drawing::Color::Blue;
	_beep(700, 80);
}
private: System::Void buttonBlue_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonBlue->BackColor = System::Drawing::Color::CadetBlue;
}
private: System::Void buttonGreen_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonGreen->BackColor = System::Drawing::Color::Green;
	_beep(800, 80);
}
private: System::Void buttonGreen_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	buttonGreen->BackColor = System::Drawing::Color::Olive;
}
};
}

