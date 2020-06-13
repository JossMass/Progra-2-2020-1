#pragma once
#include "Hero.h"
#include "Controller.h"
#include <ctime>

namespace SpriteMovement {

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
			g = pnlCanvas->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, pnlCanvas->ClientRectangle);

			bmpHero = gcnew Bitmap("rojo.png");
			bmpMap = gcnew Bitmap("fondo.png");
			bmpEnemy = gcnew Bitmap("bruno.png");
			bmpBullet = gcnew Bitmap("pokeball.png");
			hero = new Hero(bmpHero->Width / 4, bmpHero->Height / 4);
			controller = new Controller();

			controller->createEnemies(bmpEnemy->Width / 4, bmpEnemy->Height / 4);
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
	private: System::Windows::Forms::Panel^ pnlCanvas;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		//Buffer
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

		Bitmap^ bmpHero;
		Bitmap^ bmpMap;
		Bitmap^ bmpEnemy;
		Bitmap^ bmpBullet;
		Hero* hero;
		Controller* controller;
	



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlCanvas = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pnlCanvas
			// 
			this->pnlCanvas->Location = System::Drawing::Point(0, 1);
			this->pnlCanvas->Name = L"pnlCanvas";
			this->pnlCanvas->Size = System::Drawing::Size(971, 509);
			this->pnlCanvas->TabIndex = 0;
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
			this->ClientSize = System::Drawing::Size(971, 511);
			this->Controls->Add(this->pnlCanvas);
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::FrmMain_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Clear
		buffer->Graphics->Clear(Color::WhiteSmoke);
		//Collision
		controller->collision(buffer->Graphics);
		//Move
		controller->moveEverything(buffer->Graphics);
		//Draw
		buffer->Graphics->DrawImage(bmpMap, 0, 0, bmpMap->Width * 2.2, bmpMap->Height * 1.6);
		controller->drawEverything(buffer->Graphics, bmpEnemy, bmpBullet);
		hero->draw(buffer->Graphics, bmpHero);
		//Render
		buffer->Render(g);

	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		switch (e->KeyCode){
		case Keys::A:
			hero->move(buffer->Graphics, 'A'); break;
		case Keys::S:
			hero->move(buffer->Graphics, 'S'); break;
		case Keys::D:
			hero->move(buffer->Graphics, 'D'); break;
		case Keys::W:
			hero->move(buffer->Graphics, 'W'); break;
		case Keys::Space:
			Bullet* b = new Bullet(hero->getX(), hero->getY(), bmpBullet->Width, bmpBullet->Height, hero->getDirection());
			controller->addBullet(b);
		}
	}
	};
}
