#pragma once

namespace oudaAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for leaderBoard
	/// </summary>
	public ref class leaderBoard : public System::Windows::Forms::Form
	{
	public:
		leaderBoard(void)
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
		~leaderBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ date10Label;
	protected:
	private: System::Windows::Forms::Label^ date9Label;
	private: System::Windows::Forms::Label^ date8Label;
	private: System::Windows::Forms::Label^ date7Label;
	private: System::Windows::Forms::Label^ date6Label;
	private: System::Windows::Forms::Label^ date5Label;
	private: System::Windows::Forms::Label^ date4Label;
	private: System::Windows::Forms::Label^ date3Label;
	private: System::Windows::Forms::Label^ date2Label;
	private: System::Windows::Forms::Label^ date1Label;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::Label^ score10Label;
	private: System::Windows::Forms::Label^ score9Label;
	private: System::Windows::Forms::Label^ score8Label;
	private: System::Windows::Forms::Label^ score7Label;
	private: System::Windows::Forms::Label^ score6Label;
	private: System::Windows::Forms::Label^ score5Label;
	private: System::Windows::Forms::Label^ score4Label;
	private: System::Windows::Forms::Label^ score3Label;
	private: System::Windows::Forms::Label^ score2Label;
	private: System::Windows::Forms::Label^ score1Label;
	private: System::Windows::Forms::Label^ time10Label;
	private: System::Windows::Forms::Label^ time9Label;
	private: System::Windows::Forms::Label^ time8Label;
	private: System::Windows::Forms::Label^ time7Label;
	private: System::Windows::Forms::Label^ time6Label;
	private: System::Windows::Forms::Label^ time5Label;
	private: System::Windows::Forms::Label^ time4Label;
	private: System::Windows::Forms::Label^ time3Label;
	private: System::Windows::Forms::Label^ time2Label;
	private: System::Windows::Forms::Label^ time1Label;
	private: System::Windows::Forms::Label^ noOfQueens10Label;
	private: System::Windows::Forms::Label^ noOfQueens9Label;
	private: System::Windows::Forms::Label^ noOfQueens8Label;
	private: System::Windows::Forms::Label^ noOfQueens7Label;
	private: System::Windows::Forms::Label^ noOfQueens6Label;
	private: System::Windows::Forms::Label^ noOfQueens5Label;
	private: System::Windows::Forms::Label^ noOfQueens4Label;
	private: System::Windows::Forms::Label^ noOfQueens3Label;
	private: System::Windows::Forms::Label^ noOfQueens2Label;
	private: System::Windows::Forms::Label^ noOfQueens1Label;
	private: System::Windows::Forms::Label^ name10Label;
	private: System::Windows::Forms::Label^ name9Label;
	private: System::Windows::Forms::Label^ name8Label;
	private: System::Windows::Forms::Label^ name7Label;
	private: System::Windows::Forms::Label^ name6Label;
	private: System::Windows::Forms::Label^ name5Label;
	private: System::Windows::Forms::Label^ name4Label;
	private: System::Windows::Forms::Label^ name3Label;
	private: System::Windows::Forms::Label^ name2Label;
	private: System::Windows::Forms::Label^ name1Label;
	private: System::Windows::Forms::Label^ num10Label;
	private: System::Windows::Forms::Label^ num9Label;
	private: System::Windows::Forms::Label^ num8Label;
	private: System::Windows::Forms::Label^ num7Label;
	private: System::Windows::Forms::Label^ num6Label;
	private: System::Windows::Forms::Label^ num5Label;
	private: System::Windows::Forms::Label^ num4Label;
	private: System::Windows::Forms::Label^ num3Label;
	private: System::Windows::Forms::Label^ num2Label;
	private: System::Windows::Forms::Label^ num1Label;
	private: System::Windows::Forms::Label^ timeLabel;
	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::Windows::Forms::Label^ difficultyLabel;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Button^ closeButton;
	private: System::Windows::Forms::Label^ posLabel;
	private: System::Windows::Forms::Label^ headerLabel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(leaderBoard::typeid));
			this->date10Label = (gcnew System::Windows::Forms::Label());
			this->date9Label = (gcnew System::Windows::Forms::Label());
			this->date8Label = (gcnew System::Windows::Forms::Label());
			this->date7Label = (gcnew System::Windows::Forms::Label());
			this->date6Label = (gcnew System::Windows::Forms::Label());
			this->date5Label = (gcnew System::Windows::Forms::Label());
			this->date4Label = (gcnew System::Windows::Forms::Label());
			this->date3Label = (gcnew System::Windows::Forms::Label());
			this->date2Label = (gcnew System::Windows::Forms::Label());
			this->date1Label = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->score10Label = (gcnew System::Windows::Forms::Label());
			this->score9Label = (gcnew System::Windows::Forms::Label());
			this->score8Label = (gcnew System::Windows::Forms::Label());
			this->score7Label = (gcnew System::Windows::Forms::Label());
			this->score6Label = (gcnew System::Windows::Forms::Label());
			this->score5Label = (gcnew System::Windows::Forms::Label());
			this->score4Label = (gcnew System::Windows::Forms::Label());
			this->score3Label = (gcnew System::Windows::Forms::Label());
			this->score2Label = (gcnew System::Windows::Forms::Label());
			this->score1Label = (gcnew System::Windows::Forms::Label());
			this->time10Label = (gcnew System::Windows::Forms::Label());
			this->time9Label = (gcnew System::Windows::Forms::Label());
			this->time8Label = (gcnew System::Windows::Forms::Label());
			this->time7Label = (gcnew System::Windows::Forms::Label());
			this->time6Label = (gcnew System::Windows::Forms::Label());
			this->time5Label = (gcnew System::Windows::Forms::Label());
			this->time4Label = (gcnew System::Windows::Forms::Label());
			this->time3Label = (gcnew System::Windows::Forms::Label());
			this->time2Label = (gcnew System::Windows::Forms::Label());
			this->time1Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens10Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens9Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens8Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens7Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens6Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens5Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens4Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens3Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens2Label = (gcnew System::Windows::Forms::Label());
			this->noOfQueens1Label = (gcnew System::Windows::Forms::Label());
			this->name10Label = (gcnew System::Windows::Forms::Label());
			this->name9Label = (gcnew System::Windows::Forms::Label());
			this->name8Label = (gcnew System::Windows::Forms::Label());
			this->name7Label = (gcnew System::Windows::Forms::Label());
			this->name6Label = (gcnew System::Windows::Forms::Label());
			this->name5Label = (gcnew System::Windows::Forms::Label());
			this->name4Label = (gcnew System::Windows::Forms::Label());
			this->name3Label = (gcnew System::Windows::Forms::Label());
			this->name2Label = (gcnew System::Windows::Forms::Label());
			this->name1Label = (gcnew System::Windows::Forms::Label());
			this->num10Label = (gcnew System::Windows::Forms::Label());
			this->num9Label = (gcnew System::Windows::Forms::Label());
			this->num8Label = (gcnew System::Windows::Forms::Label());
			this->num7Label = (gcnew System::Windows::Forms::Label());
			this->num6Label = (gcnew System::Windows::Forms::Label());
			this->num5Label = (gcnew System::Windows::Forms::Label());
			this->num4Label = (gcnew System::Windows::Forms::Label());
			this->num3Label = (gcnew System::Windows::Forms::Label());
			this->num2Label = (gcnew System::Windows::Forms::Label());
			this->num1Label = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->difficultyLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->posLabel = (gcnew System::Windows::Forms::Label());
			this->headerLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// date10Label
			// 
			this->date10Label->AutoSize = true;
			this->date10Label->Location = System::Drawing::Point(189, 341);
			this->date10Label->Name = L"date10Label";
			this->date10Label->Size = System::Drawing::Size(28, 13);
			this->date10Label->TabIndex = 135;
			this->date10Label->Text = L"date";
			// 
			// date9Label
			// 
			this->date9Label->AutoSize = true;
			this->date9Label->Location = System::Drawing::Point(189, 312);
			this->date9Label->Name = L"date9Label";
			this->date9Label->Size = System::Drawing::Size(28, 13);
			this->date9Label->TabIndex = 134;
			this->date9Label->Text = L"date";
			// 
			// date8Label
			// 
			this->date8Label->AutoSize = true;
			this->date8Label->Location = System::Drawing::Point(189, 283);
			this->date8Label->Name = L"date8Label";
			this->date8Label->Size = System::Drawing::Size(28, 13);
			this->date8Label->TabIndex = 133;
			this->date8Label->Text = L"date";
			// 
			// date7Label
			// 
			this->date7Label->AutoSize = true;
			this->date7Label->Location = System::Drawing::Point(189, 254);
			this->date7Label->Name = L"date7Label";
			this->date7Label->Size = System::Drawing::Size(28, 13);
			this->date7Label->TabIndex = 132;
			this->date7Label->Text = L"date";
			// 
			// date6Label
			// 
			this->date6Label->AutoSize = true;
			this->date6Label->Location = System::Drawing::Point(189, 225);
			this->date6Label->Name = L"date6Label";
			this->date6Label->Size = System::Drawing::Size(28, 13);
			this->date6Label->TabIndex = 131;
			this->date6Label->Text = L"date";
			// 
			// date5Label
			// 
			this->date5Label->AutoSize = true;
			this->date5Label->Location = System::Drawing::Point(189, 196);
			this->date5Label->Name = L"date5Label";
			this->date5Label->Size = System::Drawing::Size(28, 13);
			this->date5Label->TabIndex = 130;
			this->date5Label->Text = L"date";
			// 
			// date4Label
			// 
			this->date4Label->AutoSize = true;
			this->date4Label->Location = System::Drawing::Point(189, 167);
			this->date4Label->Name = L"date4Label";
			this->date4Label->Size = System::Drawing::Size(28, 13);
			this->date4Label->TabIndex = 129;
			this->date4Label->Text = L"date";
			// 
			// date3Label
			// 
			this->date3Label->AutoSize = true;
			this->date3Label->Location = System::Drawing::Point(189, 138);
			this->date3Label->Name = L"date3Label";
			this->date3Label->Size = System::Drawing::Size(28, 13);
			this->date3Label->TabIndex = 128;
			this->date3Label->Text = L"date";
			// 
			// date2Label
			// 
			this->date2Label->AutoSize = true;
			this->date2Label->Location = System::Drawing::Point(189, 109);
			this->date2Label->Name = L"date2Label";
			this->date2Label->Size = System::Drawing::Size(28, 13);
			this->date2Label->TabIndex = 127;
			this->date2Label->Text = L"date";
			// 
			// date1Label
			// 
			this->date1Label->AutoSize = true;
			this->date1Label->Location = System::Drawing::Point(189, 80);
			this->date1Label->Name = L"date1Label";
			this->date1Label->Size = System::Drawing::Size(28, 13);
			this->date1Label->TabIndex = 126;
			this->date1Label->Text = L"date";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Location = System::Drawing::Point(189, 50);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(30, 13);
			this->dateLabel->TabIndex = 125;
			this->dateLabel->Text = L"Date";
			// 
			// score10Label
			// 
			this->score10Label->AutoSize = true;
			this->score10Label->Location = System::Drawing::Point(488, 341);
			this->score10Label->Name = L"score10Label";
			this->score10Label->Size = System::Drawing::Size(33, 13);
			this->score10Label->TabIndex = 124;
			this->score10Label->Text = L"score";
			// 
			// score9Label
			// 
			this->score9Label->AutoSize = true;
			this->score9Label->Location = System::Drawing::Point(488, 312);
			this->score9Label->Name = L"score9Label";
			this->score9Label->Size = System::Drawing::Size(33, 13);
			this->score9Label->TabIndex = 123;
			this->score9Label->Text = L"score";
			// 
			// score8Label
			// 
			this->score8Label->AutoSize = true;
			this->score8Label->Location = System::Drawing::Point(488, 283);
			this->score8Label->Name = L"score8Label";
			this->score8Label->Size = System::Drawing::Size(33, 13);
			this->score8Label->TabIndex = 122;
			this->score8Label->Text = L"score";
			// 
			// score7Label
			// 
			this->score7Label->AutoSize = true;
			this->score7Label->Location = System::Drawing::Point(488, 254);
			this->score7Label->Name = L"score7Label";
			this->score7Label->Size = System::Drawing::Size(33, 13);
			this->score7Label->TabIndex = 121;
			this->score7Label->Text = L"score";
			// 
			// score6Label
			// 
			this->score6Label->AutoSize = true;
			this->score6Label->Location = System::Drawing::Point(488, 225);
			this->score6Label->Name = L"score6Label";
			this->score6Label->Size = System::Drawing::Size(33, 13);
			this->score6Label->TabIndex = 120;
			this->score6Label->Text = L"score";
			// 
			// score5Label
			// 
			this->score5Label->AutoSize = true;
			this->score5Label->Location = System::Drawing::Point(488, 196);
			this->score5Label->Name = L"score5Label";
			this->score5Label->Size = System::Drawing::Size(33, 13);
			this->score5Label->TabIndex = 119;
			this->score5Label->Text = L"score";
			// 
			// score4Label
			// 
			this->score4Label->AutoSize = true;
			this->score4Label->Location = System::Drawing::Point(488, 167);
			this->score4Label->Name = L"score4Label";
			this->score4Label->Size = System::Drawing::Size(33, 13);
			this->score4Label->TabIndex = 118;
			this->score4Label->Text = L"score";
			// 
			// score3Label
			// 
			this->score3Label->AutoSize = true;
			this->score3Label->Location = System::Drawing::Point(488, 138);
			this->score3Label->Name = L"score3Label";
			this->score3Label->Size = System::Drawing::Size(33, 13);
			this->score3Label->TabIndex = 117;
			this->score3Label->Text = L"score";
			// 
			// score2Label
			// 
			this->score2Label->AutoSize = true;
			this->score2Label->Location = System::Drawing::Point(488, 109);
			this->score2Label->Name = L"score2Label";
			this->score2Label->Size = System::Drawing::Size(33, 13);
			this->score2Label->TabIndex = 116;
			this->score2Label->Text = L"score";
			// 
			// score1Label
			// 
			this->score1Label->AutoSize = true;
			this->score1Label->Location = System::Drawing::Point(488, 80);
			this->score1Label->Name = L"score1Label";
			this->score1Label->Size = System::Drawing::Size(33, 13);
			this->score1Label->TabIndex = 115;
			this->score1Label->Text = L"score";
			// 
			// time10Label
			// 
			this->time10Label->AutoSize = true;
			this->time10Label->Location = System::Drawing::Point(394, 341);
			this->time10Label->Name = L"time10Label";
			this->time10Label->Size = System::Drawing::Size(26, 13);
			this->time10Label->TabIndex = 114;
			this->time10Label->Text = L"time";
			// 
			// time9Label
			// 
			this->time9Label->AutoSize = true;
			this->time9Label->Location = System::Drawing::Point(394, 312);
			this->time9Label->Name = L"time9Label";
			this->time9Label->Size = System::Drawing::Size(26, 13);
			this->time9Label->TabIndex = 113;
			this->time9Label->Text = L"time";
			// 
			// time8Label
			// 
			this->time8Label->AutoSize = true;
			this->time8Label->Location = System::Drawing::Point(394, 283);
			this->time8Label->Name = L"time8Label";
			this->time8Label->Size = System::Drawing::Size(26, 13);
			this->time8Label->TabIndex = 112;
			this->time8Label->Text = L"time";
			// 
			// time7Label
			// 
			this->time7Label->AutoSize = true;
			this->time7Label->Location = System::Drawing::Point(394, 254);
			this->time7Label->Name = L"time7Label";
			this->time7Label->Size = System::Drawing::Size(26, 13);
			this->time7Label->TabIndex = 111;
			this->time7Label->Text = L"time";
			// 
			// time6Label
			// 
			this->time6Label->AutoSize = true;
			this->time6Label->Location = System::Drawing::Point(394, 225);
			this->time6Label->Name = L"time6Label";
			this->time6Label->Size = System::Drawing::Size(26, 13);
			this->time6Label->TabIndex = 110;
			this->time6Label->Text = L"time";
			// 
			// time5Label
			// 
			this->time5Label->AutoSize = true;
			this->time5Label->Location = System::Drawing::Point(394, 196);
			this->time5Label->Name = L"time5Label";
			this->time5Label->Size = System::Drawing::Size(26, 13);
			this->time5Label->TabIndex = 109;
			this->time5Label->Text = L"time";
			// 
			// time4Label
			// 
			this->time4Label->AutoSize = true;
			this->time4Label->Location = System::Drawing::Point(394, 167);
			this->time4Label->Name = L"time4Label";
			this->time4Label->Size = System::Drawing::Size(26, 13);
			this->time4Label->TabIndex = 108;
			this->time4Label->Text = L"time";
			// 
			// time3Label
			// 
			this->time3Label->AutoSize = true;
			this->time3Label->Location = System::Drawing::Point(394, 138);
			this->time3Label->Name = L"time3Label";
			this->time3Label->Size = System::Drawing::Size(26, 13);
			this->time3Label->TabIndex = 107;
			this->time3Label->Text = L"time";
			// 
			// time2Label
			// 
			this->time2Label->AutoSize = true;
			this->time2Label->Location = System::Drawing::Point(394, 109);
			this->time2Label->Name = L"time2Label";
			this->time2Label->Size = System::Drawing::Size(26, 13);
			this->time2Label->TabIndex = 106;
			this->time2Label->Text = L"time";
			// 
			// time1Label
			// 
			this->time1Label->AutoSize = true;
			this->time1Label->Location = System::Drawing::Point(394, 80);
			this->time1Label->Name = L"time1Label";
			this->time1Label->Size = System::Drawing::Size(26, 13);
			this->time1Label->TabIndex = 105;
			this->time1Label->Text = L"time";
			// 
			// noOfQueens10Label
			// 
			this->noOfQueens10Label->AutoSize = true;
			this->noOfQueens10Label->Location = System::Drawing::Point(283, 341);
			this->noOfQueens10Label->Name = L"noOfQueens10Label";
			this->noOfQueens10Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens10Label->TabIndex = 104;
			this->noOfQueens10Label->Text = L"# of queens";
			// 
			// noOfQueens9Label
			// 
			this->noOfQueens9Label->AutoSize = true;
			this->noOfQueens9Label->Location = System::Drawing::Point(283, 312);
			this->noOfQueens9Label->Name = L"noOfQueens9Label";
			this->noOfQueens9Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens9Label->TabIndex = 103;
			this->noOfQueens9Label->Text = L"# of queens";
			// 
			// noOfQueens8Label
			// 
			this->noOfQueens8Label->AutoSize = true;
			this->noOfQueens8Label->Location = System::Drawing::Point(283, 283);
			this->noOfQueens8Label->Name = L"noOfQueens8Label";
			this->noOfQueens8Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens8Label->TabIndex = 102;
			this->noOfQueens8Label->Text = L"# of queens";
			// 
			// noOfQueens7Label
			// 
			this->noOfQueens7Label->AutoSize = true;
			this->noOfQueens7Label->Location = System::Drawing::Point(283, 254);
			this->noOfQueens7Label->Name = L"noOfQueens7Label";
			this->noOfQueens7Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens7Label->TabIndex = 101;
			this->noOfQueens7Label->Text = L"# of queens";
			// 
			// noOfQueens6Label
			// 
			this->noOfQueens6Label->AutoSize = true;
			this->noOfQueens6Label->Location = System::Drawing::Point(283, 225);
			this->noOfQueens6Label->Name = L"noOfQueens6Label";
			this->noOfQueens6Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens6Label->TabIndex = 100;
			this->noOfQueens6Label->Text = L"# of queens";
			// 
			// noOfQueens5Label
			// 
			this->noOfQueens5Label->AutoSize = true;
			this->noOfQueens5Label->Location = System::Drawing::Point(283, 196);
			this->noOfQueens5Label->Name = L"noOfQueens5Label";
			this->noOfQueens5Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens5Label->TabIndex = 99;
			this->noOfQueens5Label->Text = L"# of queens";
			// 
			// noOfQueens4Label
			// 
			this->noOfQueens4Label->AutoSize = true;
			this->noOfQueens4Label->Location = System::Drawing::Point(283, 167);
			this->noOfQueens4Label->Name = L"noOfQueens4Label";
			this->noOfQueens4Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens4Label->TabIndex = 98;
			this->noOfQueens4Label->Text = L"# of queens";
			// 
			// noOfQueens3Label
			// 
			this->noOfQueens3Label->AutoSize = true;
			this->noOfQueens3Label->Location = System::Drawing::Point(283, 138);
			this->noOfQueens3Label->Name = L"noOfQueens3Label";
			this->noOfQueens3Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens3Label->TabIndex = 97;
			this->noOfQueens3Label->Text = L"# of queens";
			// 
			// noOfQueens2Label
			// 
			this->noOfQueens2Label->AutoSize = true;
			this->noOfQueens2Label->Location = System::Drawing::Point(283, 109);
			this->noOfQueens2Label->Name = L"noOfQueens2Label";
			this->noOfQueens2Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens2Label->TabIndex = 96;
			this->noOfQueens2Label->Text = L"# of queens";
			// 
			// noOfQueens1Label
			// 
			this->noOfQueens1Label->AutoSize = true;
			this->noOfQueens1Label->Location = System::Drawing::Point(283, 80);
			this->noOfQueens1Label->Name = L"noOfQueens1Label";
			this->noOfQueens1Label->Size = System::Drawing::Size(64, 13);
			this->noOfQueens1Label->TabIndex = 95;
			this->noOfQueens1Label->Text = L"# of queens";
			// 
			// name10Label
			// 
			this->name10Label->AutoSize = true;
			this->name10Label->Location = System::Drawing::Point(75, 341);
			this->name10Label->Name = L"name10Label";
			this->name10Label->Size = System::Drawing::Size(33, 13);
			this->name10Label->TabIndex = 94;
			this->name10Label->Text = L"name";
			// 
			// name9Label
			// 
			this->name9Label->AutoSize = true;
			this->name9Label->Location = System::Drawing::Point(75, 312);
			this->name9Label->Name = L"name9Label";
			this->name9Label->Size = System::Drawing::Size(33, 13);
			this->name9Label->TabIndex = 93;
			this->name9Label->Text = L"name";
			// 
			// name8Label
			// 
			this->name8Label->AutoSize = true;
			this->name8Label->Location = System::Drawing::Point(75, 283);
			this->name8Label->Name = L"name8Label";
			this->name8Label->Size = System::Drawing::Size(33, 13);
			this->name8Label->TabIndex = 92;
			this->name8Label->Text = L"name";
			// 
			// name7Label
			// 
			this->name7Label->AutoSize = true;
			this->name7Label->Location = System::Drawing::Point(75, 254);
			this->name7Label->Name = L"name7Label";
			this->name7Label->Size = System::Drawing::Size(33, 13);
			this->name7Label->TabIndex = 91;
			this->name7Label->Text = L"name";
			// 
			// name6Label
			// 
			this->name6Label->AutoSize = true;
			this->name6Label->Location = System::Drawing::Point(75, 225);
			this->name6Label->Name = L"name6Label";
			this->name6Label->Size = System::Drawing::Size(33, 13);
			this->name6Label->TabIndex = 90;
			this->name6Label->Text = L"name";
			// 
			// name5Label
			// 
			this->name5Label->AutoSize = true;
			this->name5Label->Location = System::Drawing::Point(75, 196);
			this->name5Label->Name = L"name5Label";
			this->name5Label->Size = System::Drawing::Size(33, 13);
			this->name5Label->TabIndex = 89;
			this->name5Label->Text = L"name";
			// 
			// name4Label
			// 
			this->name4Label->AutoSize = true;
			this->name4Label->Location = System::Drawing::Point(75, 167);
			this->name4Label->Name = L"name4Label";
			this->name4Label->Size = System::Drawing::Size(33, 13);
			this->name4Label->TabIndex = 88;
			this->name4Label->Text = L"name";
			// 
			// name3Label
			// 
			this->name3Label->AutoSize = true;
			this->name3Label->Location = System::Drawing::Point(75, 138);
			this->name3Label->Name = L"name3Label";
			this->name3Label->Size = System::Drawing::Size(33, 13);
			this->name3Label->TabIndex = 87;
			this->name3Label->Text = L"name";
			// 
			// name2Label
			// 
			this->name2Label->AutoSize = true;
			this->name2Label->Location = System::Drawing::Point(75, 109);
			this->name2Label->Name = L"name2Label";
			this->name2Label->Size = System::Drawing::Size(33, 13);
			this->name2Label->TabIndex = 86;
			this->name2Label->Text = L"name";
			// 
			// name1Label
			// 
			this->name1Label->AutoSize = true;
			this->name1Label->Location = System::Drawing::Point(75, 80);
			this->name1Label->Name = L"name1Label";
			this->name1Label->Size = System::Drawing::Size(33, 13);
			this->name1Label->TabIndex = 85;
			this->name1Label->Text = L"name";
			// 
			// num10Label
			// 
			this->num10Label->AutoSize = true;
			this->num10Label->Location = System::Drawing::Point(37, 341);
			this->num10Label->Name = L"num10Label";
			this->num10Label->Size = System::Drawing::Size(22, 13);
			this->num10Label->TabIndex = 84;
			this->num10Label->Text = L"10.";
			// 
			// num9Label
			// 
			this->num9Label->AutoSize = true;
			this->num9Label->Location = System::Drawing::Point(43, 312);
			this->num9Label->Name = L"num9Label";
			this->num9Label->Size = System::Drawing::Size(16, 13);
			this->num9Label->TabIndex = 83;
			this->num9Label->Text = L"9.";
			// 
			// num8Label
			// 
			this->num8Label->AutoSize = true;
			this->num8Label->Location = System::Drawing::Point(43, 283);
			this->num8Label->Name = L"num8Label";
			this->num8Label->Size = System::Drawing::Size(16, 13);
			this->num8Label->TabIndex = 82;
			this->num8Label->Text = L"8.";
			// 
			// num7Label
			// 
			this->num7Label->AutoSize = true;
			this->num7Label->Location = System::Drawing::Point(43, 254);
			this->num7Label->Name = L"num7Label";
			this->num7Label->Size = System::Drawing::Size(16, 13);
			this->num7Label->TabIndex = 81;
			this->num7Label->Text = L"7.";
			// 
			// num6Label
			// 
			this->num6Label->AutoSize = true;
			this->num6Label->Location = System::Drawing::Point(43, 225);
			this->num6Label->Name = L"num6Label";
			this->num6Label->Size = System::Drawing::Size(16, 13);
			this->num6Label->TabIndex = 80;
			this->num6Label->Text = L"6.";
			// 
			// num5Label
			// 
			this->num5Label->AutoSize = true;
			this->num5Label->Location = System::Drawing::Point(43, 196);
			this->num5Label->Name = L"num5Label";
			this->num5Label->Size = System::Drawing::Size(16, 13);
			this->num5Label->TabIndex = 79;
			this->num5Label->Text = L"5.";
			// 
			// num4Label
			// 
			this->num4Label->AutoSize = true;
			this->num4Label->Location = System::Drawing::Point(43, 167);
			this->num4Label->Name = L"num4Label";
			this->num4Label->Size = System::Drawing::Size(16, 13);
			this->num4Label->TabIndex = 78;
			this->num4Label->Text = L"4.";
			// 
			// num3Label
			// 
			this->num3Label->AutoSize = true;
			this->num3Label->Location = System::Drawing::Point(43, 138);
			this->num3Label->Name = L"num3Label";
			this->num3Label->Size = System::Drawing::Size(16, 13);
			this->num3Label->TabIndex = 77;
			this->num3Label->Text = L"3.";
			// 
			// num2Label
			// 
			this->num2Label->AutoSize = true;
			this->num2Label->Location = System::Drawing::Point(43, 109);
			this->num2Label->Name = L"num2Label";
			this->num2Label->Size = System::Drawing::Size(16, 13);
			this->num2Label->TabIndex = 76;
			this->num2Label->Text = L"2.";
			// 
			// num1Label
			// 
			this->num1Label->AutoSize = true;
			this->num1Label->Location = System::Drawing::Point(43, 80);
			this->num1Label->Name = L"num1Label";
			this->num1Label->Size = System::Drawing::Size(16, 13);
			this->num1Label->TabIndex = 75;
			this->num1Label->Text = L"1.";
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->Location = System::Drawing::Point(394, 50);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(30, 13);
			this->timeLabel->TabIndex = 74;
			this->timeLabel->Text = L"Time";
			// 
			// scoreLabel
			// 
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->Location = System::Drawing::Point(488, 50);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(35, 13);
			this->scoreLabel->TabIndex = 73;
			this->scoreLabel->Text = L"Score";
			// 
			// difficultyLabel
			// 
			this->difficultyLabel->AutoSize = true;
			this->difficultyLabel->Location = System::Drawing::Point(283, 50);
			this->difficultyLabel->Name = L"difficultyLabel";
			this->difficultyLabel->Size = System::Drawing::Size(66, 13);
			this->difficultyLabel->TabIndex = 72;
			this->difficultyLabel->Text = L"# of Queens";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(75, 50);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(35, 13);
			this->nameLabel->TabIndex = 71;
			this->nameLabel->Text = L"Name";
			// 
			// closeButton
			// 
			this->closeButton->Location = System::Drawing::Point(255, 381);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(75, 23);
			this->closeButton->TabIndex = 70;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &leaderBoard::closeButton_Click);
			// 
			// posLabel
			// 
			this->posLabel->AutoSize = true;
			this->posLabel->Location = System::Drawing::Point(34, 50);
			this->posLabel->Name = L"posLabel";
			this->posLabel->Size = System::Drawing::Size(25, 13);
			this->posLabel->TabIndex = 69;
			this->posLabel->Text = L"Pos";
			// 
			// headerLabel
			// 
			this->headerLabel->AutoSize = true;
			this->headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headerLabel->Location = System::Drawing::Point(222, 19);
			this->headerLabel->Name = L"headerLabel";
			this->headerLabel->Size = System::Drawing::Size(140, 18);
			this->headerLabel->TabIndex = 68;
			this->headerLabel->Text = L"TOP 10 SCORES";
			// 
			// leaderBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 441);
			this->Controls->Add(this->date10Label);
			this->Controls->Add(this->date9Label);
			this->Controls->Add(this->date8Label);
			this->Controls->Add(this->date7Label);
			this->Controls->Add(this->date6Label);
			this->Controls->Add(this->date5Label);
			this->Controls->Add(this->date4Label);
			this->Controls->Add(this->date3Label);
			this->Controls->Add(this->date2Label);
			this->Controls->Add(this->date1Label);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->score10Label);
			this->Controls->Add(this->score9Label);
			this->Controls->Add(this->score8Label);
			this->Controls->Add(this->score7Label);
			this->Controls->Add(this->score6Label);
			this->Controls->Add(this->score5Label);
			this->Controls->Add(this->score4Label);
			this->Controls->Add(this->score3Label);
			this->Controls->Add(this->score2Label);
			this->Controls->Add(this->score1Label);
			this->Controls->Add(this->time10Label);
			this->Controls->Add(this->time9Label);
			this->Controls->Add(this->time8Label);
			this->Controls->Add(this->time7Label);
			this->Controls->Add(this->time6Label);
			this->Controls->Add(this->time5Label);
			this->Controls->Add(this->time4Label);
			this->Controls->Add(this->time3Label);
			this->Controls->Add(this->time2Label);
			this->Controls->Add(this->time1Label);
			this->Controls->Add(this->noOfQueens10Label);
			this->Controls->Add(this->noOfQueens9Label);
			this->Controls->Add(this->noOfQueens8Label);
			this->Controls->Add(this->noOfQueens7Label);
			this->Controls->Add(this->noOfQueens6Label);
			this->Controls->Add(this->noOfQueens5Label);
			this->Controls->Add(this->noOfQueens4Label);
			this->Controls->Add(this->noOfQueens3Label);
			this->Controls->Add(this->noOfQueens2Label);
			this->Controls->Add(this->noOfQueens1Label);
			this->Controls->Add(this->name10Label);
			this->Controls->Add(this->name9Label);
			this->Controls->Add(this->name8Label);
			this->Controls->Add(this->name7Label);
			this->Controls->Add(this->name6Label);
			this->Controls->Add(this->name5Label);
			this->Controls->Add(this->name4Label);
			this->Controls->Add(this->name3Label);
			this->Controls->Add(this->name2Label);
			this->Controls->Add(this->name1Label);
			this->Controls->Add(this->num10Label);
			this->Controls->Add(this->num9Label);
			this->Controls->Add(this->num8Label);
			this->Controls->Add(this->num7Label);
			this->Controls->Add(this->num6Label);
			this->Controls->Add(this->num5Label);
			this->Controls->Add(this->num4Label);
			this->Controls->Add(this->num3Label);
			this->Controls->Add(this->num2Label);
			this->Controls->Add(this->num1Label);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->difficultyLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->posLabel);
			this->Controls->Add(this->headerLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"leaderBoard";
			this->Text = L"leaderBoard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	};
}
