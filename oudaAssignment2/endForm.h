#pragma once

namespace oudaAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for endForm
	/// </summary>
	public ref class endForm : public System::Windows::Forms::Form
	{
	public:
		endForm(System::String^ _messageText, System::String^ _scoreText)
		{
			InitializeComponent();
			//this->messageText->Text = _messageText;
			//this->scoreText->Text = _scoreText;
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~endForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  messageText;
	private: System::Windows::Forms::Label^  scoreText;
	private: System::Windows::Forms::Label^  namelabel;
	private: System::Windows::Forms::TextBox^  playerName;
	private: System::Windows::Forms::Button^  okButton;
	protected:

	protected:

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
			this->messageText = (gcnew System::Windows::Forms::Label());
			this->scoreText = (gcnew System::Windows::Forms::Label());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->playerName = (gcnew System::Windows::Forms::TextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// messageText
			// 
			this->messageText->AutoSize = true;
			this->messageText->Location = System::Drawing::Point(43, 46);
			this->messageText->Name = L"messageText";
			this->messageText->Size = System::Drawing::Size(35, 13);
			this->messageText->TabIndex = 0;
			this->messageText->Text = L"label1";
			// 
			// scoreText
			// 
			this->scoreText->AutoSize = true;
			this->scoreText->Location = System::Drawing::Point(43, 84);
			this->scoreText->Name = L"scoreText";
			this->scoreText->Size = System::Drawing::Size(35, 13);
			this->scoreText->TabIndex = 1;
			this->scoreText->Text = L"label1";
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Location = System::Drawing::Point(43, 122);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(63, 13);
			this->namelabel->TabIndex = 2;
			this->namelabel->Text = L"Your Name:";
			// 
			// playerName
			// 
			this->playerName->Location = System::Drawing::Point(123, 122);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(169, 20);
			this->playerName->TabIndex = 3;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(217, 161);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 4;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			// 
			// endForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 261);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->playerName);
			this->Controls->Add(this->namelabel);
			this->Controls->Add(this->scoreText);
			this->Controls->Add(this->messageText);
			this->Name = L"endForm";
			this->Text = L"endForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
