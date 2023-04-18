

#pragma once


#include "oudaStart.h"
#include "chessBoard.h"
#include "LeaderBoard.h"

namespace oudaAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for oudaStart
	/// </summary>
	public ref class oudaStart : public System::Windows::Forms::Form
	{
	public:
		oudaStart(void)
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
		~oudaStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  gameStartButton;
	protected:
	private: System::Windows::Forms::Button^  leaderBoardButton;
	private: System::Windows::Forms::Button^  exitButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(oudaStart::typeid));
			this->gameStartButton = (gcnew System::Windows::Forms::Button());
			this->leaderBoardButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// gameStartButton
			// 
			this->gameStartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameStartButton->Location = System::Drawing::Point(71, 46);
			this->gameStartButton->Name = L"gameStartButton";
			this->gameStartButton->Size = System::Drawing::Size(255, 64);
			this->gameStartButton->TabIndex = 0;
			this->gameStartButton->Text = L"8-Queen Game";
			this->gameStartButton->UseVisualStyleBackColor = true;
			this->gameStartButton->Click += gcnew System::EventHandler(this, &oudaStart::gameStartButton_Click);
			// 
			// leaderBoardButton
			// 
			this->leaderBoardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderBoardButton->Location = System::Drawing::Point(69, 121);
			this->leaderBoardButton->Name = L"leaderBoardButton";
			this->leaderBoardButton->Size = System::Drawing::Size(255, 64);
			this->leaderBoardButton->TabIndex = 1;
			this->leaderBoardButton->Text = L"Leader Board";
			this->leaderBoardButton->UseVisualStyleBackColor = true;
			this->leaderBoardButton->Click += gcnew System::EventHandler(this, &oudaStart::leaderBoardButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->Location = System::Drawing::Point(71, 231);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(255, 64);
			this->exitButton->TabIndex = 2;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &oudaStart::exitButton_Click);
			// 
			// oudaStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 338);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->leaderBoardButton);
			this->Controls->Add(this->gameStartButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"oudaStart";
			this->Text = L"oudaStart";
			this->ResumeLayout(false);

		}
#pragma endregion


	

	private: System::Void gameStartButton_Click(System::Object^  sender, System::EventArgs^  e) {

		chessBoard ^ form = gcnew chessBoard;
		try {
			form->ShowDialog();
		}
		catch (Exception ^ e)
		{
			// do nothing
		}

		

	}


	private: System::Void leaderBoardButton_Click(System::Object^  sender, System::EventArgs^  e) {

		leaderBoard ^ form = gcnew leaderBoard;
		try {
			form->ShowDialog();
		}
		catch (Exception ^ e)
		{
			// do nothing
		}




	}
private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();

}


};
}
