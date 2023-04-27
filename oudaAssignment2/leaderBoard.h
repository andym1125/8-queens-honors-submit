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
			array<Label^>^ namelist={label21,label20,label19,label18,label17,label16,label15,label14,label13,label12 };
			array<Label^>^ datelist = { label31,label30,label29,label28,label27,label26,label25,label24,label23,label22 };
			array<Label^>^ queenlist = { label41,label40,label39,label38,label37,label36,label35,label34,label33,label32 };
			array<Label^>^ timelist = { label51,label50,label49,label48,label47,label46,label45,label44,label43,label42 };
			array<Label^>^ scorelist_label = { label61,label60,label59,label58,label57,label56,label55,label54,label53,label52 };
			try {
				array<ScoreEntry^>^ scorelist = gcnew array<ScoreEntry^>(10);
				array<String^>^ words;
				String^ line;
				String^ delimStr = "|";
				array<Char>^ delimiter = delimStr->ToCharArray();
				StreamReader^ infile = File::OpenText("score_list.txt");
				for (int count=0; ((line = infile->ReadLine()) != nullptr) && count<10;
					count++)
				{
					words = line->Split(delimiter);
					namelist[count]->Text = words[0];
					datelist[count]->Text = words[1];
					queenlist[count]->Text = words[2];
					timelist[count]->Text = formatTime(words[3]);
					scorelist_label[count]->Text = words[4];
				}
				infile->Close();

			}
			catch (Exception^ e) {
				MessageBox::Show("Error Reading file: "+e->Message);
			}

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label67;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(leaderBoard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"3.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"4.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"5.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 320);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"6.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 357);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"7.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 394);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"8.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(34, 429);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"9.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 469);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"10.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(112, 469);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(112, 429);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"name";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(112, 394);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(112, 357);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 13);
			this->label15->TabIndex = 17;
			this->label15->Text = L"name";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(112, 320);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"name";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(112, 280);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"name";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(112, 239);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(33, 13);
			this->label18->TabIndex = 14;
			this->label18->Text = L"name";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(112, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(33, 13);
			this->label19->TabIndex = 13;
			this->label19->Text = L"name";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(112, 158);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(33, 13);
			this->label20->TabIndex = 12;
			this->label20->Text = L"name";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(112, 123);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(33, 13);
			this->label21->TabIndex = 11;
			this->label21->Text = L"name";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(282, 469);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 13);
			this->label22->TabIndex = 30;
			this->label22->Text = L"date";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(282, 429);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 29;
			this->label23->Text = L"date";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(282, 394);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 13);
			this->label24->TabIndex = 28;
			this->label24->Text = L"date";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(282, 357);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(28, 13);
			this->label25->TabIndex = 27;
			this->label25->Text = L"date";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(282, 320);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(28, 13);
			this->label26->TabIndex = 26;
			this->label26->Text = L"date";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(282, 280);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 13);
			this->label27->TabIndex = 25;
			this->label27->Text = L"date";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(282, 239);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(28, 13);
			this->label28->TabIndex = 24;
			this->label28->Text = L"date";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(282, 201);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(28, 13);
			this->label29->TabIndex = 23;
			this->label29->Text = L"date";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(282, 158);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(28, 13);
			this->label30->TabIndex = 22;
			this->label30->Text = L"date";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(282, 123);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(28, 13);
			this->label31->TabIndex = 21;
			this->label31->Text = L"date";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(396, 469);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(66, 13);
			this->label32->TabIndex = 40;
			this->label32->Text = L"# of Queens";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(396, 429);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(66, 13);
			this->label33->TabIndex = 39;
			this->label33->Text = L"# of Queens";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(396, 394);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(66, 13);
			this->label34->TabIndex = 38;
			this->label34->Text = L"# of Queens";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(396, 357);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(66, 13);
			this->label35->TabIndex = 37;
			this->label35->Text = L"# of Queens";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(396, 320);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(66, 13);
			this->label36->TabIndex = 36;
			this->label36->Text = L"# of Queens";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(396, 280);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(66, 13);
			this->label37->TabIndex = 35;
			this->label37->Text = L"# of Queens";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(396, 239);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(66, 13);
			this->label38->TabIndex = 34;
			this->label38->Text = L"# of Queens";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(396, 201);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(66, 13);
			this->label39->TabIndex = 33;
			this->label39->Text = L"# of Queens";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(396, 158);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(66, 13);
			this->label40->TabIndex = 32;
			this->label40->Text = L"# of Queens";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(396, 123);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(66, 13);
			this->label41->TabIndex = 31;
			this->label41->Text = L"# of Queens";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(506, 469);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(26, 13);
			this->label42->TabIndex = 50;
			this->label42->Text = L"time";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(506, 429);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(26, 13);
			this->label43->TabIndex = 49;
			this->label43->Text = L"time";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(506, 394);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(26, 13);
			this->label44->TabIndex = 48;
			this->label44->Text = L"time";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(506, 357);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(26, 13);
			this->label45->TabIndex = 47;
			this->label45->Text = L"time";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(506, 320);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(26, 13);
			this->label46->TabIndex = 46;
			this->label46->Text = L"time";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(506, 280);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(26, 13);
			this->label47->TabIndex = 45;
			this->label47->Text = L"time";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(506, 239);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(26, 13);
			this->label48->TabIndex = 44;
			this->label48->Text = L"time";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(506, 201);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(26, 13);
			this->label49->TabIndex = 43;
			this->label49->Text = L"time";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(506, 158);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(26, 13);
			this->label50->TabIndex = 42;
			this->label50->Text = L"time";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(506, 123);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(26, 13);
			this->label51->TabIndex = 41;
			this->label51->Text = L"time";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(619, 469);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(33, 13);
			this->label52->TabIndex = 60;
			this->label52->Text = L"score";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(619, 429);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(33, 13);
			this->label53->TabIndex = 59;
			this->label53->Text = L"score";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(619, 394);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(33, 13);
			this->label54->TabIndex = 58;
			this->label54->Text = L"score";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(619, 357);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(33, 13);
			this->label55->TabIndex = 57;
			this->label55->Text = L"score";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(619, 320);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(33, 13);
			this->label56->TabIndex = 56;
			this->label56->Text = L"score";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(619, 280);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(33, 13);
			this->label57->TabIndex = 55;
			this->label57->Text = L"score";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(619, 239);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(33, 13);
			this->label58->TabIndex = 54;
			this->label58->Text = L"score";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(619, 201);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(33, 13);
			this->label59->TabIndex = 53;
			this->label59->Text = L"score";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(619, 158);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(33, 13);
			this->label60->TabIndex = 52;
			this->label60->Text = L"score";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(619, 123);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(33, 13);
			this->label61->TabIndex = 51;
			this->label61->Text = L"score";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(112, 91);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(35, 13);
			this->label62->TabIndex = 61;
			this->label62->Text = L"Name";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(282, 91);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(30, 13);
			this->label63->TabIndex = 62;
			this->label63->Text = L"Date";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(396, 91);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(66, 13);
			this->label64->TabIndex = 63;
			this->label64->Text = L"# of Queens";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(506, 91);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(30, 13);
			this->label65->TabIndex = 64;
			this->label65->Text = L"Time";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(619, 91);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(35, 13);
			this->label66->TabIndex = 65;
			this->label66->Text = L"Score";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 66;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(311, 518);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 25);
			this->button2->TabIndex = 67;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &leaderBoard::button2_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(279, 28);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(217, 33);
			this->label67->TabIndex = 68;
			this->label67->Text = L"Top 10 Scores";
			// 
			// leaderBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 560);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"leaderBoard";
			this->Text = L"leaderBoard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

			String^ formatTime(String ^ time_s)
			{
				 int time_sec = Convert::ToInt32(time_s);
				 int time_min = time_sec / 60;
				 time_sec = time_sec - (60 * time_min);
				 return String::Format("{0}:{1,2:D2}", time_min,time_sec);
			}
};
}
