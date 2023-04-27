#pragma once
#include "score.h"
namespace oudaAssignment2 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for enterScore
	/// </summary>
	public ref class enterScore : public System::Windows::Forms::Form
	{
	public:
		enterScore(String^ message, int _penalties, String^ d, Int32 q, Int32 t, Int32 c, array<ScoreEntry^>^& list, int _l)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			penalties = _penalties;
			Date = d;
			Queens = q;
			time = t;
			score = c;
			scorelist = list;
			label1->Text = message;
			len = _l;
			label3->Text = String::Format("Your score is {0} with {1} penaltie(s)\ntime is {2}",
				score, penalties, formatTime(time));

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~enterScore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Name";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &enterScore::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// enterScore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(308, 181);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"enterScore";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		String^ Date; Int32 Queens; Int32 time; Int32 score;
		int penalties, len;
		array<ScoreEntry^>^ scorelist;
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ name = textBox1->Text;
		ScoreEntry ^newscore= gcnew ScoreEntry(name, Date, Queens, time, score);
		scorelist[len] = gcnew ScoreEntry(name, Date, Queens, time, score);
		Array::Sort(scorelist,0,len+1);

		StreamWriter^ sw = gcnew StreamWriter("score_list.txt");
		for(int i = 0; i <= len && i<10; i++)
		{
			sw->WriteLine("{0}|{1}|{2}|{3}|{4}",
				scorelist[i]->name,
				scorelist[i]->date,
				scorelist[i]->queens,
				scorelist[i]->time,
				scorelist[i]->score
			);
		}
		sw->Close();
		this->Close();

	}
			 String^ formatTime(int time_s)
			 {
				 int time_min = time_s / 60;
				 time_s = time_s - (60 * time_min);
				 return String::Format("{0}:{1,2:D2}", time_min, time_s);
			 }
};
}
