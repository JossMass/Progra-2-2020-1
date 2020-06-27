#pragma once
#include "Controller.h"
#include <ctime>

namespace CarEnemy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			srand(time(NULL));
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);
			bmpCar = gcnew Bitmap("rojo.png");
			bmpEnemy = gcnew Bitmap("proton.png");
			bmpMap = gcnew Bitmap("fondo.png");
			controller = new Controller(bmpCar, bmpEnemy);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
		Bitmap^ bmpCar;
		Bitmap^ bmpEnemy;
		Bitmap^ bmpMap;
		Controller* controller;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(988, 533);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmMain::timer1_Tick);
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 534);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMain";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::FrmMain_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::WhiteSmoke);
		controller->collision();
		controller->moveEverything(buffer->Graphics);
		buffer->Graphics->DrawImage(bmpMap, 0, 0, bmpMap->Width * 2.2, bmpMap->Height * 1.8);
		controller->drawEverything(buffer->Graphics, bmpCar, bmpEnemy);
		if (controller->getEnemies().size() == 3) {
			bmpCar = gcnew Bitmap("bruno.png");
		}
		buffer->Render(g);
	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		switch (e->KeyCode)
		{
		case Keys::Escape:
			this->Close();
		}
	}
	};
}
