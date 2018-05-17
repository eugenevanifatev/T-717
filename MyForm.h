#pragma once
#include <iostream>
#include <ctime>

namespace Проект1
{
	using namespace std;
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
			//
			//TODO: добавьте код конструктора
			//

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
	private: System::Windows::Forms::Button^  red_button;
	protected:
	private: System::Windows::Forms::Button^  blue_button;
	private: System::Windows::Forms::Button^  yellow_button;
	private: System::Windows::Forms::Button^  green_button;
	private: System::Windows::Forms::Label^  score_label;

	private: System::Windows::Forms::Button^  start_button;



	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->red_button = (gcnew System::Windows::Forms::Button());
			this->blue_button = (gcnew System::Windows::Forms::Button());
			this->yellow_button = (gcnew System::Windows::Forms::Button());
			this->green_button = (gcnew System::Windows::Forms::Button());
			this->score_label = (gcnew System::Windows::Forms::Label());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// red_button
			// 
			this->red_button->BackColor = System::Drawing::Color::MistyRose;
			this->red_button->Location = System::Drawing::Point(20, 30);
			this->red_button->Name = L"red_button";
			this->red_button->Size = System::Drawing::Size(150, 150);
			this->red_button->TabIndex = 0;
			this->red_button->Text = L"Red";
			this->red_button->UseVisualStyleBackColor = false;
			this->red_button->Click += gcnew System::EventHandler(this, &MyForm::red_button_Click);
			// 
			// blue_button
			// 
			this->blue_button->BackColor = System::Drawing::Color::Lavender;
			this->blue_button->Location = System::Drawing::Point(173, 30);
			this->blue_button->Name = L"blue_button";
			this->blue_button->Size = System::Drawing::Size(150, 150);
			this->blue_button->TabIndex = 1;
			this->blue_button->Text = L"Blue";
			this->blue_button->UseVisualStyleBackColor = false;
			this->blue_button->Click += gcnew System::EventHandler(this, &MyForm::blue_button_Click);
			// 
			// yellow_button
			// 
			this->yellow_button->BackColor = System::Drawing::Color::LightYellow;
			this->yellow_button->Location = System::Drawing::Point(20, 183);
			this->yellow_button->Name = L"yellow_button";
			this->yellow_button->Size = System::Drawing::Size(150, 150);
			this->yellow_button->TabIndex = 2;
			this->yellow_button->Text = L"Yellow";
			this->yellow_button->UseVisualStyleBackColor = false;
			this->yellow_button->Click += gcnew System::EventHandler(this, &MyForm::yellow_button_Click);
			// 
			// green_button
			// 
			this->green_button->BackColor = System::Drawing::Color::Honeydew;
			this->green_button->Location = System::Drawing::Point(173, 183);
			this->green_button->Name = L"green_button";
			this->green_button->Size = System::Drawing::Size(150, 150);
			this->green_button->TabIndex = 3;
			this->green_button->Text = L"Green";
			this->green_button->UseVisualStyleBackColor = false;
			this->green_button->Click += gcnew System::EventHandler(this, &MyForm::green_button_Click);
			// 
			// score_label
			// 
			this->score_label->AutoSize = true;
			this->score_label->Location = System::Drawing::Point(225, 349);
			this->score_label->Name = L"score_label";
			this->score_label->Size = System::Drawing::Size(47, 13);
			this->score_label->TabIndex = 4;
			this->score_label->Text = L"Score: 0";
			// 
			// start_button
			// 
			this->start_button->Location = System::Drawing::Point(20, 339);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(150, 23);
			this->start_button->TabIndex = 6;
			this->start_button->Text = L"Start";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &MyForm::start_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(344, 379);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->score_label);
			this->Controls->Add(this->green_button);
			this->Controls->Add(this->yellow_button);
			this->Controls->Add(this->blue_button);
			this->Controls->Add(this->red_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Simon Says";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	static int score = 0;
	private: System::Void start_button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		startGame();
	}
			 void startGame()
			 {
				 int pattern[4];
				 for (int i = 0; i < 4; i++)
				 {
					 pattern[i] = 1 + (rand() % 4);
					 if (pattern[i] == 1)
					 {
						 red_button->BackColor = System::Drawing::Color::Red;
						 red_button->Refresh();
						 System::Threading::Thread::Sleep(500);
						 red_button->BackColor = System::Drawing::Color::MistyRose;
						 red_button->Refresh();
					 }
					 else if (pattern[i] == 2)
					 {
						 blue_button->BackColor = System::Drawing::Color::Blue;
						 blue_button->Refresh();
						 System::Threading::Thread::Sleep(500);
						 blue_button->BackColor = System::Drawing::Color::Lavender;
						 blue_button->Refresh();
					 }
					 else if (pattern[i] == 3)
					 {
						 yellow_button->BackColor = System::Drawing::Color::Yellow;
						 yellow_button->Refresh();
						 System::Threading::Thread::Sleep(500);
						 yellow_button->BackColor = System::Drawing::Color::LightYellow;
						 yellow_button->Refresh();
					 }
					 else if (pattern[i] == 4)
					 {
						 green_button->BackColor = System::Drawing::Color::Green;
						 green_button->Refresh();
						 System::Threading::Thread::Sleep(500);
						 green_button->BackColor = System::Drawing::Color::Honeydew;
						 green_button->Refresh();
					 }
				 }
			 }

	private: System::Void red_button_Click(System::Object^  sender, System::EventArgs^  e) {
		testCorrect(1);
	}
	private: System::Void blue_button_Click(System::Object^  sender, System::EventArgs^  e) {
		testCorrect(2);
	}
	private: System::Void yellow_button_Click(System::Object^  sender, System::EventArgs^  e) {
		testCorrect(3);
	}
	private: System::Void green_button_Click(System::Object^  sender, System::EventArgs^  e) {
		testCorrect(4);
	}
			 void testCorrect(int choise)
			 {
				 score_label->Text = "Score: " + Convert::ToString(score);
				 if (choise == 1)
				 {
					 score += 10;
				 }
				 else if (choise == 2)
				 {
					 score += 10;
				 }
				 else if (choise == 3)
				 {
					 score += 10;
				 }
				 else if (choise == 4)
				 {
					 score += 10;
				 } 
			 }
};
}