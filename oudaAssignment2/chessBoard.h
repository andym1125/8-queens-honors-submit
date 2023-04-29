#pragma once
#include"score.h"
#include "enterScore.h"
#include <iostream>
#include <vector>
namespace oudaAssignment2 {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	using namespace System::Media;

	/// <summary>
	/// Summary for chessBoard
	/// </summary>


	public ref class chessBoard : public System::Windows::Forms::Form
	{
	public:
		chessBoard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer = Stopwatch::StartNew();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~chessBoard()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label13;
	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ frown;
	private: System::Windows::Forms::Button^ NewGame;
	private: System::Windows::Forms::PictureBox^ Empty;
	private: System::Windows::Forms::PictureBox^ A7;
	private: System::Windows::Forms::PictureBox^ A8;
	private: System::Windows::Forms::PictureBox^ A6;
	private: System::Windows::Forms::PictureBox^ A5;
	private: System::Windows::Forms::PictureBox^ A4;
	private: System::Windows::Forms::PictureBox^ A3;
	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ B8;
	private: System::Windows::Forms::PictureBox^ B7;
	private: System::Windows::Forms::PictureBox^ B6;
	private: System::Windows::Forms::PictureBox^ B5;
	private: System::Windows::Forms::PictureBox^ B4;
	private: System::Windows::Forms::PictureBox^ B3;
	private: System::Windows::Forms::PictureBox^ B2;
		   //private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
		   //private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;
	private: System::Windows::Forms::PictureBox^ B1;
	private: System::Windows::Forms::PictureBox^ C8;
	private: System::Windows::Forms::PictureBox^ C7;
	private: System::Windows::Forms::PictureBox^ C6;
	private: System::Windows::Forms::PictureBox^ C5;
	private: System::Windows::Forms::PictureBox^ C4;
	private: System::Windows::Forms::PictureBox^ C3;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ D8;
	private: System::Windows::Forms::PictureBox^ D7;
	private: System::Windows::Forms::PictureBox^ D6;
	private: System::Windows::Forms::PictureBox^ D5;
	private: System::Windows::Forms::PictureBox^ D4;
	private: System::Windows::Forms::PictureBox^ D3;
	private: System::Windows::Forms::PictureBox^ D2;
	private: System::Windows::Forms::PictureBox^ D1;
	private: System::Windows::Forms::PictureBox^ E8;
	private: System::Windows::Forms::PictureBox^ E7;
	private: System::Windows::Forms::PictureBox^ E6;
	private: System::Windows::Forms::PictureBox^ E5;
	private: System::Windows::Forms::PictureBox^ E4;
	private: System::Windows::Forms::PictureBox^ E3;
	private: System::Windows::Forms::PictureBox^ E2;
	private: System::Windows::Forms::PictureBox^ E1;
	private: System::Windows::Forms::PictureBox^ F8;
	private: System::Windows::Forms::PictureBox^ F7;
	private: System::Windows::Forms::PictureBox^ F6;
	private: System::Windows::Forms::PictureBox^ F5;
	private: System::Windows::Forms::PictureBox^ F4;
	private: System::Windows::Forms::PictureBox^ F3;
	private: System::Windows::Forms::PictureBox^ F2;
	private: System::Windows::Forms::PictureBox^ F1;
	private: System::Windows::Forms::PictureBox^ G8;
	private: System::Windows::Forms::PictureBox^ G7;
	private: System::Windows::Forms::PictureBox^ G6;
	private: System::Windows::Forms::PictureBox^ G5;
	private: System::Windows::Forms::PictureBox^ G4;
	private: System::Windows::Forms::PictureBox^ G3;
	private: System::Windows::Forms::PictureBox^ G2;
	private: System::Windows::Forms::PictureBox^ G1;
	private: System::Windows::Forms::PictureBox^ H8;
	private: System::Windows::Forms::PictureBox^ H7;
	private: System::Windows::Forms::PictureBox^ H6;
	private: System::Windows::Forms::PictureBox^ H5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ H4;
	private: System::Windows::Forms::PictureBox^ H3;
	private: System::Windows::Forms::PictureBox^ H2;
	private: System::Windows::Forms::PictureBox^ H1;
	private: System::Windows::Forms::Button^ EnterQueen;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
	private: System::Windows::Forms::PictureBox^ smile;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelscore;
















	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ f8r;

	private: System::Windows::Forms::PictureBox^ d8r;

	private: System::Windows::Forms::PictureBox^ b8r;

	private: System::Windows::Forms::PictureBox^ a7r;
	private: System::Windows::Forms::PictureBox^ c7r;
	private: System::Windows::Forms::PictureBox^ e7r;
	private: System::Windows::Forms::PictureBox^ g7r;
	private: System::Windows::Forms::PictureBox^ h8r;




	private: System::Windows::Forms::PictureBox^ h6r;

	private: System::Windows::Forms::PictureBox^ f6r;

	private: System::Windows::Forms::PictureBox^ d6r;

	private: System::Windows::Forms::PictureBox^ b6r;
	private: System::Windows::Forms::PictureBox^ c5r;
	private: System::Windows::Forms::PictureBox^ e5r;
	private: System::Windows::Forms::PictureBox^ g5r;




	private: System::Windows::Forms::PictureBox^ a5r;
	private: System::Windows::Forms::PictureBox^ b4r;
	private: System::Windows::Forms::PictureBox^ d4r;
	private: System::Windows::Forms::PictureBox^ f4r;
	private: System::Windows::Forms::PictureBox^ h4r;




	private: System::Windows::Forms::PictureBox^ e3r;

	private: System::Windows::Forms::PictureBox^ c3r;

	private: System::Windows::Forms::PictureBox^ a3r;
	private: System::Windows::Forms::PictureBox^ g3r;

	private: System::Windows::Forms::PictureBox^ b2r;
	private: System::Windows::Forms::PictureBox^ d2r;
	private: System::Windows::Forms::PictureBox^ f2r;
	private: System::Windows::Forms::PictureBox^ h2r;





	private: System::Windows::Forms::PictureBox^ g1r;

	private: System::Windows::Forms::PictureBox^ e1r;

	private: System::Windows::Forms::PictureBox^ c1r;

	private: System::Windows::Forms::PictureBox^ a1r;
	private: System::Windows::Forms::PictureBox^ a8r;
	private: System::Windows::Forms::PictureBox^ c8r;
	private: System::Windows::Forms::PictureBox^ e8r;
	private: System::Windows::Forms::PictureBox^ g8r;




	private: System::Windows::Forms::PictureBox^ b7r;
	private: System::Windows::Forms::PictureBox^ d7r;
	private: System::Windows::Forms::PictureBox^ f7r;
	private: System::Windows::Forms::PictureBox^ h7r;




	private: System::Windows::Forms::PictureBox^ g6r;

	private: System::Windows::Forms::PictureBox^ e6r;

	private: System::Windows::Forms::PictureBox^ c6r;

	private: System::Windows::Forms::PictureBox^ a6r;
	private: System::Windows::Forms::PictureBox^ f5r;
	private: System::Windows::Forms::PictureBox^ h5r;


	private: System::Windows::Forms::PictureBox^ d5r;

	private: System::Windows::Forms::PictureBox^ b5r;
	private: System::Windows::Forms::PictureBox^ e4r;
	private: System::Windows::Forms::PictureBox^ g4r;



	private: System::Windows::Forms::PictureBox^ c4r;

	private: System::Windows::Forms::PictureBox^ a4r;
	private: System::Windows::Forms::PictureBox^ b3r;
	private: System::Windows::Forms::PictureBox^ d3r;
	private: System::Windows::Forms::PictureBox^ f3r;
	private: System::Windows::Forms::PictureBox^ h3r;




	private: System::Windows::Forms::PictureBox^ g2r;

	private: System::Windows::Forms::PictureBox^ e2r;

	private: System::Windows::Forms::PictureBox^ c2r;

	private: System::Windows::Forms::PictureBox^ a2r;
	private: System::Windows::Forms::PictureBox^ b1r;
	private: System::Windows::Forms::PictureBox^ d1r;
	private: System::Windows::Forms::PictureBox^ f1r;
	private: System::Windows::Forms::PictureBox^ h1r;












	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::CheckBox^ hint;
	private: System::Windows::Forms::CheckBox^ help;
private: System::Windows::Forms::Label^ helplabel;





	private: System::Windows::Forms::Button^ button3;
	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chessBoard::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->frown = (gcnew System::Windows::Forms::PictureBox());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->A7 = (gcnew System::Windows::Forms::PictureBox());
			this->A8 = (gcnew System::Windows::Forms::PictureBox());
			this->A6 = (gcnew System::Windows::Forms::PictureBox());
			this->A5 = (gcnew System::Windows::Forms::PictureBox());
			this->A4 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B8 = (gcnew System::Windows::Forms::PictureBox());
			this->B7 = (gcnew System::Windows::Forms::PictureBox());
			this->B6 = (gcnew System::Windows::Forms::PictureBox());
			this->B5 = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C8 = (gcnew System::Windows::Forms::PictureBox());
			this->C7 = (gcnew System::Windows::Forms::PictureBox());
			this->C6 = (gcnew System::Windows::Forms::PictureBox());
			this->C5 = (gcnew System::Windows::Forms::PictureBox());
			this->C4 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->D8 = (gcnew System::Windows::Forms::PictureBox());
			this->D7 = (gcnew System::Windows::Forms::PictureBox());
			this->D6 = (gcnew System::Windows::Forms::PictureBox());
			this->D5 = (gcnew System::Windows::Forms::PictureBox());
			this->D4 = (gcnew System::Windows::Forms::PictureBox());
			this->D3 = (gcnew System::Windows::Forms::PictureBox());
			this->D2 = (gcnew System::Windows::Forms::PictureBox());
			this->D1 = (gcnew System::Windows::Forms::PictureBox());
			this->E8 = (gcnew System::Windows::Forms::PictureBox());
			this->E7 = (gcnew System::Windows::Forms::PictureBox());
			this->E6 = (gcnew System::Windows::Forms::PictureBox());
			this->E5 = (gcnew System::Windows::Forms::PictureBox());
			this->E4 = (gcnew System::Windows::Forms::PictureBox());
			this->E3 = (gcnew System::Windows::Forms::PictureBox());
			this->E2 = (gcnew System::Windows::Forms::PictureBox());
			this->E1 = (gcnew System::Windows::Forms::PictureBox());
			this->F8 = (gcnew System::Windows::Forms::PictureBox());
			this->F7 = (gcnew System::Windows::Forms::PictureBox());
			this->F6 = (gcnew System::Windows::Forms::PictureBox());
			this->F5 = (gcnew System::Windows::Forms::PictureBox());
			this->F4 = (gcnew System::Windows::Forms::PictureBox());
			this->F3 = (gcnew System::Windows::Forms::PictureBox());
			this->F2 = (gcnew System::Windows::Forms::PictureBox());
			this->F1 = (gcnew System::Windows::Forms::PictureBox());
			this->G8 = (gcnew System::Windows::Forms::PictureBox());
			this->G7 = (gcnew System::Windows::Forms::PictureBox());
			this->G6 = (gcnew System::Windows::Forms::PictureBox());
			this->G5 = (gcnew System::Windows::Forms::PictureBox());
			this->G4 = (gcnew System::Windows::Forms::PictureBox());
			this->G3 = (gcnew System::Windows::Forms::PictureBox());
			this->G2 = (gcnew System::Windows::Forms::PictureBox());
			this->G1 = (gcnew System::Windows::Forms::PictureBox());
			this->H8 = (gcnew System::Windows::Forms::PictureBox());
			this->H7 = (gcnew System::Windows::Forms::PictureBox());
			this->H6 = (gcnew System::Windows::Forms::PictureBox());
			this->H5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->H4 = (gcnew System::Windows::Forms::PictureBox());
			this->H3 = (gcnew System::Windows::Forms::PictureBox());
			this->H2 = (gcnew System::Windows::Forms::PictureBox());
			this->H1 = (gcnew System::Windows::Forms::PictureBox());
			this->EnterQueen = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->smile = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->f8r = (gcnew System::Windows::Forms::PictureBox());
			this->d8r = (gcnew System::Windows::Forms::PictureBox());
			this->b8r = (gcnew System::Windows::Forms::PictureBox());
			this->a7r = (gcnew System::Windows::Forms::PictureBox());
			this->c7r = (gcnew System::Windows::Forms::PictureBox());
			this->e7r = (gcnew System::Windows::Forms::PictureBox());
			this->g7r = (gcnew System::Windows::Forms::PictureBox());
			this->h8r = (gcnew System::Windows::Forms::PictureBox());
			this->h6r = (gcnew System::Windows::Forms::PictureBox());
			this->f6r = (gcnew System::Windows::Forms::PictureBox());
			this->d6r = (gcnew System::Windows::Forms::PictureBox());
			this->b6r = (gcnew System::Windows::Forms::PictureBox());
			this->c5r = (gcnew System::Windows::Forms::PictureBox());
			this->e5r = (gcnew System::Windows::Forms::PictureBox());
			this->g5r = (gcnew System::Windows::Forms::PictureBox());
			this->a5r = (gcnew System::Windows::Forms::PictureBox());
			this->b4r = (gcnew System::Windows::Forms::PictureBox());
			this->d4r = (gcnew System::Windows::Forms::PictureBox());
			this->f4r = (gcnew System::Windows::Forms::PictureBox());
			this->h4r = (gcnew System::Windows::Forms::PictureBox());
			this->e3r = (gcnew System::Windows::Forms::PictureBox());
			this->c3r = (gcnew System::Windows::Forms::PictureBox());
			this->a3r = (gcnew System::Windows::Forms::PictureBox());
			this->g3r = (gcnew System::Windows::Forms::PictureBox());
			this->b2r = (gcnew System::Windows::Forms::PictureBox());
			this->d2r = (gcnew System::Windows::Forms::PictureBox());
			this->f2r = (gcnew System::Windows::Forms::PictureBox());
			this->h2r = (gcnew System::Windows::Forms::PictureBox());
			this->g1r = (gcnew System::Windows::Forms::PictureBox());
			this->e1r = (gcnew System::Windows::Forms::PictureBox());
			this->c1r = (gcnew System::Windows::Forms::PictureBox());
			this->a1r = (gcnew System::Windows::Forms::PictureBox());
			this->a8r = (gcnew System::Windows::Forms::PictureBox());
			this->c8r = (gcnew System::Windows::Forms::PictureBox());
			this->e8r = (gcnew System::Windows::Forms::PictureBox());
			this->g8r = (gcnew System::Windows::Forms::PictureBox());
			this->b7r = (gcnew System::Windows::Forms::PictureBox());
			this->d7r = (gcnew System::Windows::Forms::PictureBox());
			this->f7r = (gcnew System::Windows::Forms::PictureBox());
			this->h7r = (gcnew System::Windows::Forms::PictureBox());
			this->g6r = (gcnew System::Windows::Forms::PictureBox());
			this->e6r = (gcnew System::Windows::Forms::PictureBox());
			this->c6r = (gcnew System::Windows::Forms::PictureBox());
			this->a6r = (gcnew System::Windows::Forms::PictureBox());
			this->f5r = (gcnew System::Windows::Forms::PictureBox());
			this->h5r = (gcnew System::Windows::Forms::PictureBox());
			this->d5r = (gcnew System::Windows::Forms::PictureBox());
			this->b5r = (gcnew System::Windows::Forms::PictureBox());
			this->e4r = (gcnew System::Windows::Forms::PictureBox());
			this->g4r = (gcnew System::Windows::Forms::PictureBox());
			this->c4r = (gcnew System::Windows::Forms::PictureBox());
			this->a4r = (gcnew System::Windows::Forms::PictureBox());
			this->b3r = (gcnew System::Windows::Forms::PictureBox());
			this->d3r = (gcnew System::Windows::Forms::PictureBox());
			this->f3r = (gcnew System::Windows::Forms::PictureBox());
			this->h3r = (gcnew System::Windows::Forms::PictureBox());
			this->g2r = (gcnew System::Windows::Forms::PictureBox());
			this->e2r = (gcnew System::Windows::Forms::PictureBox());
			this->c2r = (gcnew System::Windows::Forms::PictureBox());
			this->a2r = (gcnew System::Windows::Forms::PictureBox());
			this->b1r = (gcnew System::Windows::Forms::PictureBox());
			this->d1r = (gcnew System::Windows::Forms::PictureBox());
			this->f1r = (gcnew System::Windows::Forms::PictureBox());
			this->h1r = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelscore = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->hint = (gcnew System::Windows::Forms::CheckBox());
			this->help = (gcnew System::Windows::Forms::CheckBox());
			this->helplabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g8r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h7r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a6r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b5r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a4r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h3r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f1r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h1r))->BeginInit();
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(554, 290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 24);
			this->label13->TabIndex = 321;
			this->label13->Text = L"Enter Queen";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(554, 266);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 24);
			this->label12->TabIndex = 320;
			this->label12->Text = L"then click";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(554, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 24);
			this->label11->TabIndex = 319;
			this->label11->Text = L"position here,";
			// 
			// frown
			// 
			this->frown->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"frown.Image")));
			this->frown->Location = System::Drawing::Point(558, 90);
			this->frown->Name = L"frown";
			this->frown->Size = System::Drawing::Size(100, 106);
			this->frown->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->frown->TabIndex = 318;
			this->frown->TabStop = false;
			this->frown->Visible = false;
			// 
			// NewGame
			// 
			this->NewGame->Location = System::Drawing::Point(558, 466);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(102, 24);
			this->NewGame->TabIndex = 316;
			this->NewGame->Text = L"NewGame";
			this->NewGame->UseVisualStyleBackColor = true;
			this->NewGame->Click += gcnew System::EventHandler(this, &chessBoard::NewGame_Click);
			// 
			// A7
			// 
			this->A7->AccessibleName = L"A7";
			this->A7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7.Image")));
			this->A7->Location = System::Drawing::Point(68, 130);
			this->A7->Margin = System::Windows::Forms::Padding(1);
			this->A7->MaximumSize = System::Drawing::Size(45, 45);
			this->A7->MinimumSize = System::Drawing::Size(20, 20);
			this->A7->Name = L"A7";
			this->A7->Size = System::Drawing::Size(45, 45);
			this->A7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A7->TabIndex = 255;
			this->A7->TabStop = false;
			this->A7->Visible = false;
			// 
			// A8
			// 
			this->A8->AccessibleName = L"A8";
			this->A8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8.Image")));
			this->A8->Location = System::Drawing::Point(68, 73);
			this->A8->Margin = System::Windows::Forms::Padding(1);
			this->A8->MaximumSize = System::Drawing::Size(45, 45);
			this->A8->MinimumSize = System::Drawing::Size(20, 20);
			this->A8->Name = L"A8";
			this->A8->Size = System::Drawing::Size(45, 45);
			this->A8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A8->TabIndex = 256;
			this->A8->TabStop = false;
			this->A8->Visible = false;
			// 
			// A6
			// 
			this->A6->AccessibleName = L"A6";
			this->A6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6.Image")));
			this->A6->Location = System::Drawing::Point(67, 184);
			this->A6->Margin = System::Windows::Forms::Padding(1);
			this->A6->MaximumSize = System::Drawing::Size(45, 45);
			this->A6->MinimumSize = System::Drawing::Size(20, 20);
			this->A6->Name = L"A6";
			this->A6->Size = System::Drawing::Size(45, 45);
			this->A6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A6->TabIndex = 254;
			this->A6->TabStop = false;
			this->A6->Visible = false;
			// 
			// A5
			// 
			this->A5->AccessibleName = L"A5";
			this->A5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5.Image")));
			this->A5->Location = System::Drawing::Point(68, 241);
			this->A5->Margin = System::Windows::Forms::Padding(1);
			this->A5->MaximumSize = System::Drawing::Size(45, 45);
			this->A5->MinimumSize = System::Drawing::Size(20, 20);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(45, 45);
			this->A5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A5->TabIndex = 253;
			this->A5->TabStop = false;
			this->A5->Visible = false;
			// 
			// A4
			// 
			this->A4->AccessibleName = L"A4";
			this->A4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4.Image")));
			this->A4->Location = System::Drawing::Point(68, 289);
			this->A4->Margin = System::Windows::Forms::Padding(1);
			this->A4->MaximumSize = System::Drawing::Size(45, 45);
			this->A4->MinimumSize = System::Drawing::Size(20, 20);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(45, 45);
			this->A4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A4->TabIndex = 252;
			this->A4->TabStop = false;
			this->A4->Visible = false;
			// 
			// A3
			// 
			this->A3->AccessibleName = L"A3";
			this->A3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(68, 345);
			this->A3->Margin = System::Windows::Forms::Padding(1);
			this->A3->MaximumSize = System::Drawing::Size(45, 45);
			this->A3->MinimumSize = System::Drawing::Size(20, 20);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(45, 45);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A3->TabIndex = 251;
			this->A3->TabStop = false;
			this->A3->Visible = false;
			// 
			// A2
			// 
			this->A2->AccessibleName = L"A2";
			this->A2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(67, 402);
			this->A2->Margin = System::Windows::Forms::Padding(1);
			this->A2->MaximumSize = System::Drawing::Size(45, 45);
			this->A2->MinimumSize = System::Drawing::Size(20, 20);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(45, 45);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A2->TabIndex = 250;
			this->A2->TabStop = false;
			this->A2->Visible = false;
			// 
			// A1
			// 
			this->A1->AccessibleName = L"A1";
			this->A1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(68, 457);
			this->A1->Margin = System::Windows::Forms::Padding(1);
			this->A1->MaximumSize = System::Drawing::Size(45, 45);
			this->A1->MinimumSize = System::Drawing::Size(20, 20);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(45, 45);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A1->TabIndex = 249;
			this->A1->TabStop = false;
			this->A1->Visible = false;
			// 
			// B8
			// 
			this->B8->AccessibleName = L"B8";
			this->B8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B8.Image")));
			this->B8->Location = System::Drawing::Point(128, 73);
			this->B8->Margin = System::Windows::Forms::Padding(1);
			this->B8->MaximumSize = System::Drawing::Size(45, 45);
			this->B8->MinimumSize = System::Drawing::Size(20, 20);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(45, 45);
			this->B8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B8->TabIndex = 264;
			this->B8->TabStop = false;
			this->B8->Visible = false;
			// 
			// B7
			// 
			this->B7->AccessibleName = L"B7";
			this->B7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7.Image")));
			this->B7->Location = System::Drawing::Point(128, 130);
			this->B7->Margin = System::Windows::Forms::Padding(1);
			this->B7->MaximumSize = System::Drawing::Size(45, 45);
			this->B7->MinimumSize = System::Drawing::Size(20, 20);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(45, 45);
			this->B7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B7->TabIndex = 263;
			this->B7->TabStop = false;
			this->B7->Visible = false;
			// 
			// B6
			// 
			this->B6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6.Image")));
			this->B6->Location = System::Drawing::Point(127, 184);
			this->B6->Margin = System::Windows::Forms::Padding(1);
			this->B6->MaximumSize = System::Drawing::Size(45, 45);
			this->B6->MinimumSize = System::Drawing::Size(20, 20);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(45, 45);
			this->B6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B6->TabIndex = 262;
			this->B6->TabStop = false;
			this->B6->Visible = false;
			// 
			// B5
			// 
			this->B5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5.Image")));
			this->B5->Location = System::Drawing::Point(128, 241);
			this->B5->Margin = System::Windows::Forms::Padding(1);
			this->B5->MaximumSize = System::Drawing::Size(45, 45);
			this->B5->MinimumSize = System::Drawing::Size(20, 20);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(45, 45);
			this->B5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B5->TabIndex = 261;
			this->B5->TabStop = false;
			this->B5->Visible = false;
			// 
			// B4
			// 
			this->B4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4.Image")));
			this->B4->Location = System::Drawing::Point(128, 289);
			this->B4->Margin = System::Windows::Forms::Padding(1);
			this->B4->MaximumSize = System::Drawing::Size(45, 45);
			this->B4->MinimumSize = System::Drawing::Size(20, 20);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(45, 45);
			this->B4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B4->TabIndex = 260;
			this->B4->TabStop = false;
			this->B4->Visible = false;
			// 
			// B3
			// 
			this->B3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(128, 345);
			this->B3->Margin = System::Windows::Forms::Padding(1);
			this->B3->MaximumSize = System::Drawing::Size(45, 45);
			this->B3->MinimumSize = System::Drawing::Size(20, 20);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(45, 45);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B3->TabIndex = 259;
			this->B3->TabStop = false;
			this->B3->Visible = false;
			// 
			// B2
			// 
			this->B2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(127, 402);
			this->B2->Margin = System::Windows::Forms::Padding(1);
			this->B2->MaximumSize = System::Drawing::Size(45, 45);
			this->B2->MinimumSize = System::Drawing::Size(20, 20);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(45, 45);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B2->TabIndex = 258;
			this->B2->TabStop = false;
			this->B2->Visible = false;
			// 
			// B1
			// 
			this->B1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(128, 457);
			this->B1->Margin = System::Windows::Forms::Padding(1);
			this->B1->MaximumSize = System::Drawing::Size(45, 45);
			this->B1->MinimumSize = System::Drawing::Size(20, 20);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(45, 45);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B1->TabIndex = 257;
			this->B1->TabStop = false;
			this->B1->Visible = false;
			// 
			// C8
			// 
			this->C8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C8.Image")));
			this->C8->Location = System::Drawing::Point(179, 73);
			this->C8->Margin = System::Windows::Forms::Padding(1);
			this->C8->MaximumSize = System::Drawing::Size(45, 45);
			this->C8->MinimumSize = System::Drawing::Size(20, 20);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(45, 45);
			this->C8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C8->TabIndex = 272;
			this->C8->TabStop = false;
			this->C8->Visible = false;
			// 
			// C7
			// 
			this->C7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7.Image")));
			this->C7->Location = System::Drawing::Point(179, 130);
			this->C7->Margin = System::Windows::Forms::Padding(1);
			this->C7->MaximumSize = System::Drawing::Size(45, 45);
			this->C7->MinimumSize = System::Drawing::Size(20, 20);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(45, 45);
			this->C7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C7->TabIndex = 271;
			this->C7->TabStop = false;
			this->C7->Visible = false;
			// 
			// C6
			// 
			this->C6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6.Image")));
			this->C6->Location = System::Drawing::Point(178, 184);
			this->C6->Margin = System::Windows::Forms::Padding(1);
			this->C6->MaximumSize = System::Drawing::Size(45, 45);
			this->C6->MinimumSize = System::Drawing::Size(20, 20);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(45, 45);
			this->C6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C6->TabIndex = 270;
			this->C6->TabStop = false;
			this->C6->Visible = false;
			// 
			// C5
			// 
			this->C5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5.Image")));
			this->C5->Location = System::Drawing::Point(179, 241);
			this->C5->Margin = System::Windows::Forms::Padding(1);
			this->C5->MaximumSize = System::Drawing::Size(45, 45);
			this->C5->MinimumSize = System::Drawing::Size(20, 20);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(45, 45);
			this->C5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C5->TabIndex = 269;
			this->C5->TabStop = false;
			this->C5->Visible = false;
			// 
			// C4
			// 
			this->C4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4.Image")));
			this->C4->Location = System::Drawing::Point(179, 289);
			this->C4->Margin = System::Windows::Forms::Padding(1);
			this->C4->MaximumSize = System::Drawing::Size(45, 45);
			this->C4->MinimumSize = System::Drawing::Size(20, 20);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(45, 45);
			this->C4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C4->TabIndex = 268;
			this->C4->TabStop = false;
			this->C4->Visible = false;
			// 
			// C3
			// 
			this->C3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(179, 345);
			this->C3->Margin = System::Windows::Forms::Padding(1);
			this->C3->MaximumSize = System::Drawing::Size(45, 45);
			this->C3->MinimumSize = System::Drawing::Size(20, 20);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(45, 45);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C3->TabIndex = 267;
			this->C3->TabStop = false;
			this->C3->Visible = false;
			// 
			// C2
			// 
			this->C2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(178, 402);
			this->C2->Margin = System::Windows::Forms::Padding(1);
			this->C2->MaximumSize = System::Drawing::Size(45, 45);
			this->C2->MinimumSize = System::Drawing::Size(20, 20);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(45, 45);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C2->TabIndex = 266;
			this->C2->TabStop = false;
			this->C2->Visible = false;
			// 
			// C1
			// 
			this->C1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(179, 457);
			this->C1->Margin = System::Windows::Forms::Padding(1);
			this->C1->MaximumSize = System::Drawing::Size(45, 45);
			this->C1->MinimumSize = System::Drawing::Size(20, 20);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(45, 45);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C1->TabIndex = 265;
			this->C1->TabStop = false;
			this->C1->Visible = false;
			// 
			// D8
			// 
			this->D8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D8.Image")));
			this->D8->Location = System::Drawing::Point(233, 73);
			this->D8->Margin = System::Windows::Forms::Padding(1);
			this->D8->MaximumSize = System::Drawing::Size(45, 45);
			this->D8->MinimumSize = System::Drawing::Size(20, 20);
			this->D8->Name = L"D8";
			this->D8->Size = System::Drawing::Size(45, 45);
			this->D8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D8->TabIndex = 280;
			this->D8->TabStop = false;
			this->D8->Visible = false;
			// 
			// D7
			// 
			this->D7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D7.Image")));
			this->D7->Location = System::Drawing::Point(233, 130);
			this->D7->Margin = System::Windows::Forms::Padding(1);
			this->D7->MaximumSize = System::Drawing::Size(45, 45);
			this->D7->MinimumSize = System::Drawing::Size(20, 20);
			this->D7->Name = L"D7";
			this->D7->Size = System::Drawing::Size(45, 45);
			this->D7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D7->TabIndex = 279;
			this->D7->TabStop = false;
			this->D7->Visible = false;
			// 
			// D6
			// 
			this->D6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D6.Image")));
			this->D6->Location = System::Drawing::Point(232, 184);
			this->D6->Margin = System::Windows::Forms::Padding(1);
			this->D6->MaximumSize = System::Drawing::Size(45, 45);
			this->D6->MinimumSize = System::Drawing::Size(20, 20);
			this->D6->Name = L"D6";
			this->D6->Size = System::Drawing::Size(45, 45);
			this->D6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D6->TabIndex = 278;
			this->D6->TabStop = false;
			this->D6->Visible = false;
			// 
			// D5
			// 
			this->D5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D5.Image")));
			this->D5->Location = System::Drawing::Point(233, 241);
			this->D5->Margin = System::Windows::Forms::Padding(1);
			this->D5->MaximumSize = System::Drawing::Size(45, 45);
			this->D5->MinimumSize = System::Drawing::Size(20, 20);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(45, 45);
			this->D5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D5->TabIndex = 277;
			this->D5->TabStop = false;
			this->D5->Visible = false;
			// 
			// D4
			// 
			this->D4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4.Image")));
			this->D4->Location = System::Drawing::Point(233, 289);
			this->D4->Margin = System::Windows::Forms::Padding(1);
			this->D4->MaximumSize = System::Drawing::Size(45, 45);
			this->D4->MinimumSize = System::Drawing::Size(20, 20);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(45, 45);
			this->D4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D4->TabIndex = 276;
			this->D4->TabStop = false;
			this->D4->Visible = false;
			// 
			// D3
			// 
			this->D3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3.Image")));
			this->D3->Location = System::Drawing::Point(233, 345);
			this->D3->Margin = System::Windows::Forms::Padding(1);
			this->D3->MaximumSize = System::Drawing::Size(45, 45);
			this->D3->MinimumSize = System::Drawing::Size(20, 20);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(45, 45);
			this->D3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D3->TabIndex = 275;
			this->D3->TabStop = false;
			this->D3->Visible = false;
			// 
			// D2
			// 
			this->D2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2.Image")));
			this->D2->Location = System::Drawing::Point(232, 402);
			this->D2->Margin = System::Windows::Forms::Padding(1);
			this->D2->MaximumSize = System::Drawing::Size(45, 45);
			this->D2->MinimumSize = System::Drawing::Size(20, 20);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(45, 45);
			this->D2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D2->TabIndex = 274;
			this->D2->TabStop = false;
			this->D2->Visible = false;
			// 
			// D1
			// 
			this->D1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1.Image")));
			this->D1->Location = System::Drawing::Point(233, 457);
			this->D1->Margin = System::Windows::Forms::Padding(1);
			this->D1->MaximumSize = System::Drawing::Size(45, 45);
			this->D1->MinimumSize = System::Drawing::Size(20, 20);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(45, 45);
			this->D1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D1->TabIndex = 273;
			this->D1->TabStop = false;
			this->D1->Visible = false;
			// 
			// E8
			// 
			this->E8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E8.Image")));
			this->E8->Location = System::Drawing::Point(286, 73);
			this->E8->Margin = System::Windows::Forms::Padding(1);
			this->E8->MaximumSize = System::Drawing::Size(45, 45);
			this->E8->MinimumSize = System::Drawing::Size(20, 20);
			this->E8->Name = L"E8";
			this->E8->Size = System::Drawing::Size(45, 45);
			this->E8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E8->TabIndex = 288;
			this->E8->TabStop = false;
			this->E8->Visible = false;
			// 
			// E7
			// 
			this->E7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E7.Image")));
			this->E7->Location = System::Drawing::Point(286, 130);
			this->E7->Margin = System::Windows::Forms::Padding(1);
			this->E7->MaximumSize = System::Drawing::Size(45, 45);
			this->E7->MinimumSize = System::Drawing::Size(20, 20);
			this->E7->Name = L"E7";
			this->E7->Size = System::Drawing::Size(45, 45);
			this->E7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E7->TabIndex = 287;
			this->E7->TabStop = false;
			this->E7->Visible = false;
			// 
			// E6
			// 
			this->E6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E6.Image")));
			this->E6->Location = System::Drawing::Point(285, 184);
			this->E6->Margin = System::Windows::Forms::Padding(1);
			this->E6->MaximumSize = System::Drawing::Size(45, 45);
			this->E6->MinimumSize = System::Drawing::Size(20, 20);
			this->E6->Name = L"E6";
			this->E6->Size = System::Drawing::Size(45, 45);
			this->E6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E6->TabIndex = 286;
			this->E6->TabStop = false;
			this->E6->Visible = false;
			// 
			// E5
			// 
			this->E5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E5.Image")));
			this->E5->Location = System::Drawing::Point(286, 241);
			this->E5->Margin = System::Windows::Forms::Padding(1);
			this->E5->MaximumSize = System::Drawing::Size(45, 45);
			this->E5->MinimumSize = System::Drawing::Size(20, 20);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(45, 45);
			this->E5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E5->TabIndex = 285;
			this->E5->TabStop = false;
			this->E5->Visible = false;
			// 
			// E4
			// 
			this->E4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4.Image")));
			this->E4->Location = System::Drawing::Point(286, 289);
			this->E4->Margin = System::Windows::Forms::Padding(1);
			this->E4->MaximumSize = System::Drawing::Size(45, 45);
			this->E4->MinimumSize = System::Drawing::Size(20, 20);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(45, 45);
			this->E4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E4->TabIndex = 284;
			this->E4->TabStop = false;
			this->E4->Visible = false;
			// 
			// E3
			// 
			this->E3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3.Image")));
			this->E3->Location = System::Drawing::Point(286, 345);
			this->E3->Margin = System::Windows::Forms::Padding(1);
			this->E3->MaximumSize = System::Drawing::Size(45, 45);
			this->E3->MinimumSize = System::Drawing::Size(20, 20);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(45, 45);
			this->E3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E3->TabIndex = 283;
			this->E3->TabStop = false;
			this->E3->Visible = false;
			// 
			// E2
			// 
			this->E2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2.Image")));
			this->E2->Location = System::Drawing::Point(285, 402);
			this->E2->Margin = System::Windows::Forms::Padding(1);
			this->E2->MaximumSize = System::Drawing::Size(45, 45);
			this->E2->MinimumSize = System::Drawing::Size(20, 20);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(45, 45);
			this->E2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E2->TabIndex = 282;
			this->E2->TabStop = false;
			this->E2->Visible = false;
			// 
			// E1
			// 
			this->E1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1.Image")));
			this->E1->Location = System::Drawing::Point(286, 457);
			this->E1->Margin = System::Windows::Forms::Padding(1);
			this->E1->MaximumSize = System::Drawing::Size(45, 45);
			this->E1->MinimumSize = System::Drawing::Size(20, 20);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(45, 45);
			this->E1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E1->TabIndex = 281;
			this->E1->TabStop = false;
			this->E1->Visible = false;
			// 
			// F8
			// 
			this->F8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F8.Image")));
			this->F8->Location = System::Drawing::Point(339, 73);
			this->F8->Margin = System::Windows::Forms::Padding(1);
			this->F8->MaximumSize = System::Drawing::Size(45, 45);
			this->F8->MinimumSize = System::Drawing::Size(20, 20);
			this->F8->Name = L"F8";
			this->F8->Size = System::Drawing::Size(45, 45);
			this->F8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F8->TabIndex = 298;
			this->F8->TabStop = false;
			this->F8->Visible = false;
			// 
			// F7
			// 
			this->F7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F7.Image")));
			this->F7->Location = System::Drawing::Point(339, 130);
			this->F7->Margin = System::Windows::Forms::Padding(1);
			this->F7->MaximumSize = System::Drawing::Size(45, 45);
			this->F7->MinimumSize = System::Drawing::Size(20, 20);
			this->F7->Name = L"F7";
			this->F7->Size = System::Drawing::Size(45, 45);
			this->F7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F7->TabIndex = 296;
			this->F7->TabStop = false;
			this->F7->Visible = false;
			// 
			// F6
			// 
			this->F6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F6.Image")));
			this->F6->Location = System::Drawing::Point(338, 184);
			this->F6->Margin = System::Windows::Forms::Padding(1);
			this->F6->MaximumSize = System::Drawing::Size(45, 45);
			this->F6->MinimumSize = System::Drawing::Size(20, 20);
			this->F6->Name = L"F6";
			this->F6->Size = System::Drawing::Size(45, 45);
			this->F6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F6->TabIndex = 294;
			this->F6->TabStop = false;
			this->F6->Visible = false;
			// 
			// F5
			// 
			this->F5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F5.Image")));
			this->F5->Location = System::Drawing::Point(339, 241);
			this->F5->Margin = System::Windows::Forms::Padding(1);
			this->F5->MaximumSize = System::Drawing::Size(45, 45);
			this->F5->MinimumSize = System::Drawing::Size(20, 20);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(45, 45);
			this->F5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F5->TabIndex = 293;
			this->F5->TabStop = false;
			this->F5->Visible = false;
			// 
			// F4
			// 
			this->F4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F4.Image")));
			this->F4->Location = System::Drawing::Point(339, 289);
			this->F4->Margin = System::Windows::Forms::Padding(1);
			this->F4->MaximumSize = System::Drawing::Size(45, 45);
			this->F4->MinimumSize = System::Drawing::Size(20, 20);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(45, 45);
			this->F4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F4->TabIndex = 292;
			this->F4->TabStop = false;
			this->F4->Visible = false;
			// 
			// F3
			// 
			this->F3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3.Image")));
			this->F3->Location = System::Drawing::Point(339, 345);
			this->F3->Margin = System::Windows::Forms::Padding(1);
			this->F3->MaximumSize = System::Drawing::Size(45, 45);
			this->F3->MinimumSize = System::Drawing::Size(20, 20);
			this->F3->Name = L"F3";
			this->F3->Size = System::Drawing::Size(45, 45);
			this->F3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F3->TabIndex = 291;
			this->F3->TabStop = false;
			this->F3->Visible = false;
			// 
			// F2
			// 
			this->F2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2.Image")));
			this->F2->Location = System::Drawing::Point(338, 402);
			this->F2->Margin = System::Windows::Forms::Padding(1);
			this->F2->MaximumSize = System::Drawing::Size(45, 45);
			this->F2->MinimumSize = System::Drawing::Size(20, 20);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(45, 45);
			this->F2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F2->TabIndex = 290;
			this->F2->TabStop = false;
			this->F2->Visible = false;
			// 
			// F1
			// 
			this->F1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1.Image")));
			this->F1->Location = System::Drawing::Point(339, 457);
			this->F1->Margin = System::Windows::Forms::Padding(1);
			this->F1->MaximumSize = System::Drawing::Size(45, 45);
			this->F1->MinimumSize = System::Drawing::Size(20, 20);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(45, 45);
			this->F1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F1->TabIndex = 289;
			this->F1->TabStop = false;
			this->F1->Visible = false;
			// 
			// G8
			// 
			this->G8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G8.Image")));
			this->G8->Location = System::Drawing::Point(394, 73);
			this->G8->Margin = System::Windows::Forms::Padding(1);
			this->G8->MaximumSize = System::Drawing::Size(45, 45);
			this->G8->MinimumSize = System::Drawing::Size(20, 20);
			this->G8->Name = L"G8";
			this->G8->Size = System::Drawing::Size(45, 45);
			this->G8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G8->TabIndex = 306;
			this->G8->TabStop = false;
			this->G8->Visible = false;
			// 
			// G7
			// 
			this->G7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G7.Image")));
			this->G7->Location = System::Drawing::Point(394, 130);
			this->G7->Margin = System::Windows::Forms::Padding(1);
			this->G7->MaximumSize = System::Drawing::Size(45, 45);
			this->G7->MinimumSize = System::Drawing::Size(20, 20);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(45, 45);
			this->G7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G7->TabIndex = 305;
			this->G7->TabStop = false;
			this->G7->Visible = false;
			// 
			// G6
			// 
			this->G6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G6.Image")));
			this->G6->Location = System::Drawing::Point(393, 184);
			this->G6->Margin = System::Windows::Forms::Padding(1);
			this->G6->MaximumSize = System::Drawing::Size(45, 45);
			this->G6->MinimumSize = System::Drawing::Size(20, 20);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(45, 45);
			this->G6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G6->TabIndex = 304;
			this->G6->TabStop = false;
			this->G6->Visible = false;
			// 
			// G5
			// 
			this->G5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G5.Image")));
			this->G5->Location = System::Drawing::Point(394, 241);
			this->G5->Margin = System::Windows::Forms::Padding(1);
			this->G5->MaximumSize = System::Drawing::Size(45, 45);
			this->G5->MinimumSize = System::Drawing::Size(20, 20);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(45, 45);
			this->G5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G5->TabIndex = 303;
			this->G5->TabStop = false;
			this->G5->Visible = false;
			// 
			// G4
			// 
			this->G4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G4.Image")));
			this->G4->Location = System::Drawing::Point(394, 289);
			this->G4->Margin = System::Windows::Forms::Padding(1);
			this->G4->MaximumSize = System::Drawing::Size(45, 45);
			this->G4->MinimumSize = System::Drawing::Size(20, 20);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(45, 45);
			this->G4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G4->TabIndex = 302;
			this->G4->TabStop = false;
			this->G4->Visible = false;
			// 
			// G3
			// 
			this->G3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3.Image")));
			this->G3->Location = System::Drawing::Point(394, 345);
			this->G3->Margin = System::Windows::Forms::Padding(1);
			this->G3->MaximumSize = System::Drawing::Size(45, 45);
			this->G3->MinimumSize = System::Drawing::Size(20, 20);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(45, 45);
			this->G3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G3->TabIndex = 301;
			this->G3->TabStop = false;
			this->G3->Visible = false;
			// 
			// G2
			// 
			this->G2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2.Image")));
			this->G2->Location = System::Drawing::Point(393, 402);
			this->G2->Margin = System::Windows::Forms::Padding(1);
			this->G2->MaximumSize = System::Drawing::Size(45, 45);
			this->G2->MinimumSize = System::Drawing::Size(20, 20);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(45, 45);
			this->G2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G2->TabIndex = 300;
			this->G2->TabStop = false;
			this->G2->Visible = false;
			// 
			// G1
			// 
			this->G1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1.Image")));
			this->G1->Location = System::Drawing::Point(394, 457);
			this->G1->Margin = System::Windows::Forms::Padding(1);
			this->G1->MaximumSize = System::Drawing::Size(45, 45);
			this->G1->MinimumSize = System::Drawing::Size(20, 20);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(45, 45);
			this->G1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G1->TabIndex = 299;
			this->G1->TabStop = false;
			this->G1->Visible = false;
			// 
			// H8
			// 
			this->H8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H8.Image")));
			this->H8->Location = System::Drawing::Point(451, 73);
			this->H8->Margin = System::Windows::Forms::Padding(1);
			this->H8->MaximumSize = System::Drawing::Size(45, 45);
			this->H8->MinimumSize = System::Drawing::Size(20, 20);
			this->H8->Name = L"H8";
			this->H8->Size = System::Drawing::Size(45, 45);
			this->H8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H8->TabIndex = 314;
			this->H8->TabStop = false;
			this->H8->Visible = false;
			// 
			// H7
			// 
			this->H7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7.Image")));
			this->H7->Location = System::Drawing::Point(452, 130);
			this->H7->Margin = System::Windows::Forms::Padding(1);
			this->H7->MaximumSize = System::Drawing::Size(45, 45);
			this->H7->MinimumSize = System::Drawing::Size(20, 20);
			this->H7->Name = L"H7";
			this->H7->Size = System::Drawing::Size(45, 45);
			this->H7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H7->TabIndex = 313;
			this->H7->TabStop = false;
			this->H7->Visible = false;
			// 
			// H6
			// 
			this->H6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6.Image")));
			this->H6->Location = System::Drawing::Point(451, 184);
			this->H6->Margin = System::Windows::Forms::Padding(1);
			this->H6->MaximumSize = System::Drawing::Size(45, 45);
			this->H6->MinimumSize = System::Drawing::Size(20, 20);
			this->H6->Name = L"H6";
			this->H6->Size = System::Drawing::Size(45, 45);
			this->H6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H6->TabIndex = 312;
			this->H6->TabStop = false;
			this->H6->Visible = false;
			// 
			// H5
			// 
			this->H5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5.Image")));
			this->H5->Location = System::Drawing::Point(452, 241);
			this->H5->Margin = System::Windows::Forms::Padding(1);
			this->H5->MaximumSize = System::Drawing::Size(45, 45);
			this->H5->MinimumSize = System::Drawing::Size(20, 20);
			this->H5->Name = L"H5";
			this->H5->Size = System::Drawing::Size(45, 45);
			this->H5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H5->TabIndex = 311;
			this->H5->TabStop = false;
			this->H5->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(554, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 315;
			this->label1->Text = L"Put Queen ";
			// 
			// H4
			// 
			this->H4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4.Image")));
			this->H4->Location = System::Drawing::Point(452, 289);
			this->H4->Margin = System::Windows::Forms::Padding(1);
			this->H4->MaximumSize = System::Drawing::Size(45, 45);
			this->H4->MinimumSize = System::Drawing::Size(20, 20);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(45, 45);
			this->H4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H4->TabIndex = 310;
			this->H4->TabStop = false;
			this->H4->Visible = false;
			// 
			// H3
			// 
			this->H3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3.Image")));
			this->H3->Location = System::Drawing::Point(452, 345);
			this->H3->Margin = System::Windows::Forms::Padding(1);
			this->H3->MaximumSize = System::Drawing::Size(45, 45);
			this->H3->MinimumSize = System::Drawing::Size(20, 20);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(45, 45);
			this->H3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H3->TabIndex = 309;
			this->H3->TabStop = false;
			this->H3->Visible = false;
			// 
			// H2
			// 
			this->H2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2.Image")));
			this->H2->Location = System::Drawing::Point(451, 402);
			this->H2->Margin = System::Windows::Forms::Padding(1);
			this->H2->MaximumSize = System::Drawing::Size(45, 45);
			this->H2->MinimumSize = System::Drawing::Size(20, 20);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(45, 45);
			this->H2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H2->TabIndex = 308;
			this->H2->TabStop = false;
			this->H2->Visible = false;
			// 
			// H1
			// 
			this->H1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1.Image")));
			this->H1->Location = System::Drawing::Point(452, 457);
			this->H1->Margin = System::Windows::Forms::Padding(1);
			this->H1->MaximumSize = System::Drawing::Size(45, 45);
			this->H1->MinimumSize = System::Drawing::Size(20, 20);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(45, 45);
			this->H1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H1->TabIndex = 307;
			this->H1->TabStop = false;
			this->H1->Visible = false;
			// 
			// EnterQueen
			// 
			this->EnterQueen->Location = System::Drawing::Point(558, 359);
			this->EnterQueen->Name = L"EnterQueen";
			this->EnterQueen->Size = System::Drawing::Size(102, 23);
			this->EnterQueen->TabIndex = 297;
			this->EnterQueen->Text = L"Enter Queen";
			this->EnterQueen->UseVisualStyleBackColor = true;
			this->EnterQueen->Click += gcnew System::EventHandler(this, &chessBoard::EnterQueen_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(558, 327);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 20);
			this->textBox1->TabIndex = 295;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 37);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->MaximumSize = System::Drawing::Size(500, 500);
			this->pictureBox1->MinimumSize = System::Drawing::Size(480, 480);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 248;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->DoubleClick += gcnew System::EventHandler(this, &chessBoard::pictureBox1_DoubleClick);
			// 
			// smile
			// 
			this->smile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smile.Image")));
			this->smile->Location = System::Drawing::Point(558, 90);
			this->smile->Name = L"smile";
			this->smile->Size = System::Drawing::Size(100, 106);
			this->smile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->smile->TabIndex = 317;
			this->smile->TabStop = false;
			this->smile->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// f8r
			// 
			this->f8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f8r.BackgroundImage")));
			this->f8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f8r->Location = System::Drawing::Point(339, 73);
			this->f8r->Name = L"f8r";
			this->f8r->Size = System::Drawing::Size(45, 45);
			this->f8r->TabIndex = 326;
			this->f8r->TabStop = false;
			this->f8r->Visible = false;
			// 
			// d8r
			// 
			this->d8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d8r.BackgroundImage")));
			this->d8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d8r->Location = System::Drawing::Point(233, 73);
			this->d8r->Name = L"d8r";
			this->d8r->Size = System::Drawing::Size(45, 45);
			this->d8r->TabIndex = 327;
			this->d8r->TabStop = false;
			this->d8r->Visible = false;
			// 
			// b8r
			// 
			this->b8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b8r.BackgroundImage")));
			this->b8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b8r->Location = System::Drawing::Point(123, 73);
			this->b8r->Name = L"b8r";
			this->b8r->Size = System::Drawing::Size(45, 45);
			this->b8r->TabIndex = 328;
			this->b8r->TabStop = false;
			this->b8r->Visible = false;
			// 
			// a7r
			// 
			this->a7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a7r.BackgroundImage")));
			this->a7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a7r->Location = System::Drawing::Point(68, 130);
			this->a7r->Name = L"a7r";
			this->a7r->Size = System::Drawing::Size(45, 45);
			this->a7r->TabIndex = 329;
			this->a7r->TabStop = false;
			this->a7r->Visible = false;
			// 
			// c7r
			// 
			this->c7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c7r.BackgroundImage")));
			this->c7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c7r->Location = System::Drawing::Point(179, 130);
			this->c7r->Name = L"c7r";
			this->c7r->Size = System::Drawing::Size(45, 45);
			this->c7r->TabIndex = 330;
			this->c7r->TabStop = false;
			this->c7r->Visible = false;
			// 
			// e7r
			// 
			this->e7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e7r.BackgroundImage")));
			this->e7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e7r->Location = System::Drawing::Point(286, 130);
			this->e7r->Name = L"e7r";
			this->e7r->Size = System::Drawing::Size(45, 45);
			this->e7r->TabIndex = 331;
			this->e7r->TabStop = false;
			this->e7r->Visible = false;
			// 
			// g7r
			// 
			this->g7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g7r.BackgroundImage")));
			this->g7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g7r->Location = System::Drawing::Point(393, 130);
			this->g7r->Name = L"g7r";
			this->g7r->Size = System::Drawing::Size(45, 45);
			this->g7r->TabIndex = 332;
			this->g7r->TabStop = false;
			this->g7r->Visible = false;
			// 
			// h8r
			// 
			this->h8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h8r.BackgroundImage")));
			this->h8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h8r->Location = System::Drawing::Point(451, 73);
			this->h8r->Name = L"h8r";
			this->h8r->Size = System::Drawing::Size(45, 45);
			this->h8r->TabIndex = 333;
			this->h8r->TabStop = false;
			this->h8r->Visible = false;
			// 
			// h6r
			// 
			this->h6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h6r.BackgroundImage")));
			this->h6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h6r->Location = System::Drawing::Point(451, 184);
			this->h6r->Name = L"h6r";
			this->h6r->Size = System::Drawing::Size(45, 45);
			this->h6r->TabIndex = 334;
			this->h6r->TabStop = false;
			this->h6r->Visible = false;
			// 
			// f6r
			// 
			this->f6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f6r.BackgroundImage")));
			this->f6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f6r->Location = System::Drawing::Point(339, 184);
			this->f6r->Name = L"f6r";
			this->f6r->Size = System::Drawing::Size(45, 45);
			this->f6r->TabIndex = 335;
			this->f6r->TabStop = false;
			this->f6r->Visible = false;
			// 
			// d6r
			// 
			this->d6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d6r.BackgroundImage")));
			this->d6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d6r->Location = System::Drawing::Point(233, 184);
			this->d6r->Name = L"d6r";
			this->d6r->Size = System::Drawing::Size(45, 45);
			this->d6r->TabIndex = 336;
			this->d6r->TabStop = false;
			this->d6r->Visible = false;
			// 
			// b6r
			// 
			this->b6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b6r.BackgroundImage")));
			this->b6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b6r->Location = System::Drawing::Point(125, 184);
			this->b6r->Name = L"b6r";
			this->b6r->Size = System::Drawing::Size(45, 45);
			this->b6r->TabIndex = 337;
			this->b6r->TabStop = false;
			this->b6r->Visible = false;
			// 
			// c5r
			// 
			this->c5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c5r.BackgroundImage")));
			this->c5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c5r->Location = System::Drawing::Point(179, 240);
			this->c5r->Name = L"c5r";
			this->c5r->Size = System::Drawing::Size(45, 45);
			this->c5r->TabIndex = 338;
			this->c5r->TabStop = false;
			this->c5r->Visible = false;
			// 
			// e5r
			// 
			this->e5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e5r.BackgroundImage")));
			this->e5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e5r->Location = System::Drawing::Point(286, 240);
			this->e5r->Name = L"e5r";
			this->e5r->Size = System::Drawing::Size(45, 45);
			this->e5r->TabIndex = 339;
			this->e5r->TabStop = false;
			this->e5r->Visible = false;
			// 
			// g5r
			// 
			this->g5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g5r.BackgroundImage")));
			this->g5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g5r->Location = System::Drawing::Point(394, 240);
			this->g5r->Name = L"g5r";
			this->g5r->Size = System::Drawing::Size(45, 45);
			this->g5r->TabIndex = 340;
			this->g5r->TabStop = false;
			this->g5r->Visible = false;
			// 
			// a5r
			// 
			this->a5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a5r.BackgroundImage")));
			this->a5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a5r->Location = System::Drawing::Point(68, 240);
			this->a5r->Name = L"a5r";
			this->a5r->Size = System::Drawing::Size(45, 45);
			this->a5r->TabIndex = 341;
			this->a5r->TabStop = false;
			this->a5r->Visible = false;
			// 
			// b4r
			// 
			this->b4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b4r.BackgroundImage")));
			this->b4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b4r->Location = System::Drawing::Point(127, 290);
			this->b4r->Name = L"b4r";
			this->b4r->Size = System::Drawing::Size(45, 45);
			this->b4r->TabIndex = 342;
			this->b4r->TabStop = false;
			this->b4r->Visible = false;
			// 
			// d4r
			// 
			this->d4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d4r.BackgroundImage")));
			this->d4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d4r->Location = System::Drawing::Point(233, 290);
			this->d4r->Name = L"d4r";
			this->d4r->Size = System::Drawing::Size(45, 45);
			this->d4r->TabIndex = 343;
			this->d4r->TabStop = false;
			this->d4r->Visible = false;
			// 
			// f4r
			// 
			this->f4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f4r.BackgroundImage")));
			this->f4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f4r->Location = System::Drawing::Point(339, 290);
			this->f4r->Name = L"f4r";
			this->f4r->Size = System::Drawing::Size(45, 45);
			this->f4r->TabIndex = 344;
			this->f4r->TabStop = false;
			this->f4r->Visible = false;
			// 
			// h4r
			// 
			this->h4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h4r.BackgroundImage")));
			this->h4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h4r->Location = System::Drawing::Point(452, 289);
			this->h4r->Name = L"h4r";
			this->h4r->Size = System::Drawing::Size(45, 45);
			this->h4r->TabIndex = 345;
			this->h4r->TabStop = false;
			this->h4r->Visible = false;
			// 
			// e3r
			// 
			this->e3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e3r.BackgroundImage")));
			this->e3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e3r->Location = System::Drawing::Point(286, 345);
			this->e3r->Name = L"e3r";
			this->e3r->Size = System::Drawing::Size(45, 45);
			this->e3r->TabIndex = 346;
			this->e3r->TabStop = false;
			this->e3r->Visible = false;
			// 
			// c3r
			// 
			this->c3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3r.BackgroundImage")));
			this->c3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c3r->Location = System::Drawing::Point(179, 345);
			this->c3r->Name = L"c3r";
			this->c3r->Size = System::Drawing::Size(45, 45);
			this->c3r->TabIndex = 347;
			this->c3r->TabStop = false;
			this->c3r->Visible = false;
			// 
			// a3r
			// 
			this->a3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3r.BackgroundImage")));
			this->a3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a3r->Location = System::Drawing::Point(67, 345);
			this->a3r->Name = L"a3r";
			this->a3r->Size = System::Drawing::Size(45, 45);
			this->a3r->TabIndex = 348;
			this->a3r->TabStop = false;
			this->a3r->Visible = false;
			// 
			// g3r
			// 
			this->g3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g3r.BackgroundImage")));
			this->g3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g3r->Location = System::Drawing::Point(394, 345);
			this->g3r->Name = L"g3r";
			this->g3r->Size = System::Drawing::Size(45, 45);
			this->g3r->TabIndex = 349;
			this->g3r->TabStop = false;
			this->g3r->Visible = false;
			// 
			// b2r
			// 
			this->b2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2r.BackgroundImage")));
			this->b2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b2r->Location = System::Drawing::Point(123, 402);
			this->b2r->Name = L"b2r";
			this->b2r->Size = System::Drawing::Size(45, 45);
			this->b2r->TabIndex = 350;
			this->b2r->TabStop = false;
			this->b2r->Visible = false;
			// 
			// d2r
			// 
			this->d2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d2r.BackgroundImage")));
			this->d2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d2r->Location = System::Drawing::Point(233, 402);
			this->d2r->Name = L"d2r";
			this->d2r->Size = System::Drawing::Size(45, 45);
			this->d2r->TabIndex = 351;
			this->d2r->TabStop = false;
			this->d2r->Visible = false;
			// 
			// f2r
			// 
			this->f2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f2r.BackgroundImage")));
			this->f2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f2r->Location = System::Drawing::Point(339, 402);
			this->f2r->Name = L"f2r";
			this->f2r->Size = System::Drawing::Size(45, 45);
			this->f2r->TabIndex = 352;
			this->f2r->TabStop = false;
			this->f2r->Visible = false;
			// 
			// h2r
			// 
			this->h2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h2r.BackgroundImage")));
			this->h2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h2r->Location = System::Drawing::Point(451, 402);
			this->h2r->Name = L"h2r";
			this->h2r->Size = System::Drawing::Size(45, 45);
			this->h2r->TabIndex = 353;
			this->h2r->TabStop = false;
			this->h2r->Visible = false;
			// 
			// g1r
			// 
			this->g1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g1r.BackgroundImage")));
			this->g1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g1r->Location = System::Drawing::Point(394, 457);
			this->g1r->Name = L"g1r";
			this->g1r->Size = System::Drawing::Size(45, 45);
			this->g1r->TabIndex = 354;
			this->g1r->TabStop = false;
			this->g1r->Visible = false;
			// 
			// e1r
			// 
			this->e1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e1r.BackgroundImage")));
			this->e1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e1r->Location = System::Drawing::Point(286, 457);
			this->e1r->Name = L"e1r";
			this->e1r->Size = System::Drawing::Size(45, 45);
			this->e1r->TabIndex = 355;
			this->e1r->TabStop = false;
			this->e1r->Visible = false;
			// 
			// c1r
			// 
			this->c1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1r.BackgroundImage")));
			this->c1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c1r->Location = System::Drawing::Point(179, 457);
			this->c1r->Name = L"c1r";
			this->c1r->Size = System::Drawing::Size(45, 45);
			this->c1r->TabIndex = 356;
			this->c1r->TabStop = false;
			this->c1r->Visible = false;
			// 
			// a1r
			// 
			this->a1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1r.BackgroundImage")));
			this->a1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a1r->Location = System::Drawing::Point(68, 457);
			this->a1r->Name = L"a1r";
			this->a1r->Size = System::Drawing::Size(45, 45);
			this->a1r->TabIndex = 357;
			this->a1r->TabStop = false;
			this->a1r->Visible = false;
			// 
			// a8r
			// 
			this->a8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a8r.BackgroundImage")));
			this->a8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a8r->Location = System::Drawing::Point(67, 73);
			this->a8r->Name = L"a8r";
			this->a8r->Size = System::Drawing::Size(45, 45);
			this->a8r->TabIndex = 358;
			this->a8r->TabStop = false;
			this->a8r->Visible = false;
			// 
			// c8r
			// 
			this->c8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c8r.BackgroundImage")));
			this->c8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c8r->Location = System::Drawing::Point(179, 73);
			this->c8r->Name = L"c8r";
			this->c8r->Size = System::Drawing::Size(45, 45);
			this->c8r->TabIndex = 359;
			this->c8r->TabStop = false;
			this->c8r->Visible = false;
			// 
			// e8r
			// 
			this->e8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e8r.BackgroundImage")));
			this->e8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e8r->Location = System::Drawing::Point(284, 73);
			this->e8r->Name = L"e8r";
			this->e8r->Size = System::Drawing::Size(45, 45);
			this->e8r->TabIndex = 360;
			this->e8r->TabStop = false;
			this->e8r->Visible = false;
			// 
			// g8r
			// 
			this->g8r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g8r.BackgroundImage")));
			this->g8r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g8r->Location = System::Drawing::Point(394, 73);
			this->g8r->Name = L"g8r";
			this->g8r->Size = System::Drawing::Size(45, 45);
			this->g8r->TabIndex = 361;
			this->g8r->TabStop = false;
			this->g8r->Visible = false;
			// 
			// b7r
			// 
			this->b7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b7r.BackgroundImage")));
			this->b7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b7r->Location = System::Drawing::Point(125, 130);
			this->b7r->Name = L"b7r";
			this->b7r->Size = System::Drawing::Size(45, 45);
			this->b7r->TabIndex = 362;
			this->b7r->TabStop = false;
			this->b7r->Visible = false;
			// 
			// d7r
			// 
			this->d7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d7r.BackgroundImage")));
			this->d7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d7r->Location = System::Drawing::Point(235, 130);
			this->d7r->Name = L"d7r";
			this->d7r->Size = System::Drawing::Size(45, 45);
			this->d7r->TabIndex = 363;
			this->d7r->TabStop = false;
			this->d7r->Visible = false;
			// 
			// f7r
			// 
			this->f7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f7r.BackgroundImage")));
			this->f7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f7r->Location = System::Drawing::Point(339, 130);
			this->f7r->Name = L"f7r";
			this->f7r->Size = System::Drawing::Size(45, 45);
			this->f7r->TabIndex = 364;
			this->f7r->TabStop = false;
			this->f7r->Visible = false;
			// 
			// h7r
			// 
			this->h7r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h7r.BackgroundImage")));
			this->h7r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h7r->Location = System::Drawing::Point(451, 130);
			this->h7r->Name = L"h7r";
			this->h7r->Size = System::Drawing::Size(45, 45);
			this->h7r->TabIndex = 365;
			this->h7r->TabStop = false;
			this->h7r->Visible = false;
			// 
			// g6r
			// 
			this->g6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g6r.BackgroundImage")));
			this->g6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g6r->Location = System::Drawing::Point(394, 184);
			this->g6r->Name = L"g6r";
			this->g6r->Size = System::Drawing::Size(45, 45);
			this->g6r->TabIndex = 366;
			this->g6r->TabStop = false;
			this->g6r->Visible = false;
			// 
			// e6r
			// 
			this->e6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e6r.BackgroundImage")));
			this->e6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e6r->Location = System::Drawing::Point(285, 184);
			this->e6r->Name = L"e6r";
			this->e6r->Size = System::Drawing::Size(45, 45);
			this->e6r->TabIndex = 367;
			this->e6r->TabStop = false;
			this->e6r->Visible = false;
			// 
			// c6r
			// 
			this->c6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c6r.BackgroundImage")));
			this->c6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c6r->Location = System::Drawing::Point(179, 184);
			this->c6r->Name = L"c6r";
			this->c6r->Size = System::Drawing::Size(45, 45);
			this->c6r->TabIndex = 368;
			this->c6r->TabStop = false;
			this->c6r->Visible = false;
			// 
			// a6r
			// 
			this->a6r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a6r.BackgroundImage")));
			this->a6r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a6r->Location = System::Drawing::Point(68, 184);
			this->a6r->Name = L"a6r";
			this->a6r->Size = System::Drawing::Size(45, 45);
			this->a6r->TabIndex = 369;
			this->a6r->TabStop = false;
			this->a6r->Visible = false;
			// 
			// f5r
			// 
			this->f5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f5r.BackgroundImage")));
			this->f5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f5r->Location = System::Drawing::Point(339, 241);
			this->f5r->Name = L"f5r";
			this->f5r->Size = System::Drawing::Size(45, 45);
			this->f5r->TabIndex = 370;
			this->f5r->TabStop = false;
			this->f5r->Visible = false;
			// 
			// h5r
			// 
			this->h5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h5r.BackgroundImage")));
			this->h5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h5r->Location = System::Drawing::Point(451, 240);
			this->h5r->Name = L"h5r";
			this->h5r->Size = System::Drawing::Size(45, 45);
			this->h5r->TabIndex = 371;
			this->h5r->TabStop = false;
			this->h5r->Visible = false;
			// 
			// d5r
			// 
			this->d5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d5r.BackgroundImage")));
			this->d5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d5r->Location = System::Drawing::Point(233, 240);
			this->d5r->Name = L"d5r";
			this->d5r->Size = System::Drawing::Size(45, 45);
			this->d5r->TabIndex = 372;
			this->d5r->TabStop = false;
			this->d5r->Visible = false;
			// 
			// b5r
			// 
			this->b5r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b5r.BackgroundImage")));
			this->b5r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b5r->Location = System::Drawing::Point(127, 242);
			this->b5r->Name = L"b5r";
			this->b5r->Size = System::Drawing::Size(45, 45);
			this->b5r->TabIndex = 373;
			this->b5r->TabStop = false;
			this->b5r->Visible = false;
			// 
			// e4r
			// 
			this->e4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e4r.BackgroundImage")));
			this->e4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e4r->Location = System::Drawing::Point(286, 291);
			this->e4r->Name = L"e4r";
			this->e4r->Size = System::Drawing::Size(45, 45);
			this->e4r->TabIndex = 374;
			this->e4r->TabStop = false;
			this->e4r->Visible = false;
			// 
			// g4r
			// 
			this->g4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g4r.BackgroundImage")));
			this->g4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g4r->Location = System::Drawing::Point(394, 291);
			this->g4r->Name = L"g4r";
			this->g4r->Size = System::Drawing::Size(45, 45);
			this->g4r->TabIndex = 375;
			this->g4r->TabStop = false;
			this->g4r->Visible = false;
			// 
			// c4r
			// 
			this->c4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c4r.BackgroundImage")));
			this->c4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c4r->Location = System::Drawing::Point(177, 289);
			this->c4r->Name = L"c4r";
			this->c4r->Size = System::Drawing::Size(45, 45);
			this->c4r->TabIndex = 376;
			this->c4r->TabStop = false;
			this->c4r->Visible = false;
			// 
			// a4r
			// 
			this->a4r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a4r.BackgroundImage")));
			this->a4r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a4r->Location = System::Drawing::Point(67, 291);
			this->a4r->Name = L"a4r";
			this->a4r->Size = System::Drawing::Size(45, 45);
			this->a4r->TabIndex = 377;
			this->a4r->TabStop = false;
			this->a4r->Visible = false;
			// 
			// b3r
			// 
			this->b3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3r.BackgroundImage")));
			this->b3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b3r->Location = System::Drawing::Point(127, 345);
			this->b3r->Name = L"b3r";
			this->b3r->Size = System::Drawing::Size(45, 45);
			this->b3r->TabIndex = 378;
			this->b3r->TabStop = false;
			this->b3r->Visible = false;
			// 
			// d3r
			// 
			this->d3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d3r.BackgroundImage")));
			this->d3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d3r->Location = System::Drawing::Point(235, 345);
			this->d3r->Name = L"d3r";
			this->d3r->Size = System::Drawing::Size(45, 45);
			this->d3r->TabIndex = 379;
			this->d3r->TabStop = false;
			this->d3r->Visible = false;
			// 
			// f3r
			// 
			this->f3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f3r.BackgroundImage")));
			this->f3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f3r->Location = System::Drawing::Point(339, 345);
			this->f3r->Name = L"f3r";
			this->f3r->Size = System::Drawing::Size(45, 45);
			this->f3r->TabIndex = 380;
			this->f3r->TabStop = false;
			this->f3r->Visible = false;
			// 
			// h3r
			// 
			this->h3r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h3r.BackgroundImage")));
			this->h3r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h3r->Location = System::Drawing::Point(452, 345);
			this->h3r->Name = L"h3r";
			this->h3r->Size = System::Drawing::Size(45, 45);
			this->h3r->TabIndex = 381;
			this->h3r->TabStop = false;
			this->h3r->Visible = false;
			// 
			// g2r
			// 
			this->g2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"g2r.BackgroundImage")));
			this->g2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g2r->Location = System::Drawing::Point(394, 402);
			this->g2r->Name = L"g2r";
			this->g2r->Size = System::Drawing::Size(45, 45);
			this->g2r->TabIndex = 382;
			this->g2r->TabStop = false;
			this->g2r->Visible = false;
			// 
			// e2r
			// 
			this->e2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"e2r.BackgroundImage")));
			this->e2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e2r->Location = System::Drawing::Point(286, 402);
			this->e2r->Name = L"e2r";
			this->e2r->Size = System::Drawing::Size(45, 45);
			this->e2r->TabIndex = 383;
			this->e2r->TabStop = false;
			this->e2r->Visible = false;
			// 
			// c2r
			// 
			this->c2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2r.BackgroundImage")));
			this->c2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c2r->Location = System::Drawing::Point(179, 402);
			this->c2r->Name = L"c2r";
			this->c2r->Size = System::Drawing::Size(45, 45);
			this->c2r->TabIndex = 384;
			this->c2r->TabStop = false;
			this->c2r->Visible = false;
			// 
			// a2r
			// 
			this->a2r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2r.BackgroundImage")));
			this->a2r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a2r->Location = System::Drawing::Point(67, 402);
			this->a2r->Name = L"a2r";
			this->a2r->Size = System::Drawing::Size(45, 45);
			this->a2r->TabIndex = 385;
			this->a2r->TabStop = false;
			this->a2r->Visible = false;
			// 
			// b1r
			// 
			this->b1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1r.BackgroundImage")));
			this->b1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b1r->Location = System::Drawing::Point(123, 457);
			this->b1r->Name = L"b1r";
			this->b1r->Size = System::Drawing::Size(45, 45);
			this->b1r->TabIndex = 386;
			this->b1r->TabStop = false;
			this->b1r->Visible = false;
			// 
			// d1r
			// 
			this->d1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"d1r.BackgroundImage")));
			this->d1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d1r->Location = System::Drawing::Point(233, 457);
			this->d1r->Name = L"d1r";
			this->d1r->Size = System::Drawing::Size(45, 45);
			this->d1r->TabIndex = 387;
			this->d1r->TabStop = false;
			this->d1r->Visible = false;
			// 
			// f1r
			// 
			this->f1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"f1r.BackgroundImage")));
			this->f1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f1r->Location = System::Drawing::Point(339, 457);
			this->f1r->Name = L"f1r";
			this->f1r->Size = System::Drawing::Size(45, 45);
			this->f1r->TabIndex = 388;
			this->f1r->TabStop = false;
			this->f1r->Visible = false;
			// 
			// h1r
			// 
			this->h1r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"h1r.BackgroundImage")));
			this->h1r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h1r->Location = System::Drawing::Point(452, 457);
			this->h1r->Name = L"h1r";
			this->h1r->Size = System::Drawing::Size(45, 45);
			this->h1r->TabIndex = 389;
			this->h1r->TabStop = false;
			this->h1r->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(583, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 322;
			this->label2->Text = L"Score";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 323;
			this->button1->Text = L"Remove Queen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chessBoard::button1_Click);
			// 
			// labelscore
			// 
			this->labelscore->AutoSize = true;
			this->labelscore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelscore->Location = System::Drawing::Point(583, 46);
			this->labelscore->Name = L"labelscore";
			this->labelscore->Size = System::Drawing::Size(21, 24);
			this->labelscore->TabIndex = 324;
			this->labelscore->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(559, 496);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 25);
			this->button3->TabIndex = 326;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &chessBoard::button3_Click);
			// 
			// hint
			// 
			this->hint->AutoSize = true;
			this->hint->Location = System::Drawing::Point(558, 420);
			this->hint->Name = L"hint";
			this->hint->Size = System::Drawing::Size(48, 17);
			this->hint->TabIndex = 390;
			this->hint->Text = L"hints";
			this->hint->UseVisualStyleBackColor = true;
			this->hint->CheckedChanged += gcnew System::EventHandler(this, &chessBoard::hint_CheckedChanged);
			// 
			// help
			// 
			this->help->AutoSize = true;
			this->help->Location = System::Drawing::Point(558, 443);
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(58, 17);
			this->help->TabIndex = 391;
			this->help->Text = L"help ->";
			this->help->UseVisualStyleBackColor = true;
			this->help->CheckedChanged += gcnew System::EventHandler(this, &chessBoard::help_CheckedChanged);
			// 
			// helplabel
			// 
			this->helplabel->AutoSize = true;
			this->helplabel->Location = System::Drawing::Point(608, 444);
			this->helplabel->Name = L"helplabel";
			this->helplabel->Size = System::Drawing::Size(0, 13);
			this->helplabel->TabIndex = 392;
			// 
			// chessBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 575);
			this->Controls->Add(this->helplabel);
			this->Controls->Add(this->help);
			this->Controls->Add(this->hint);
			this->Controls->Add(this->h1r);
			this->Controls->Add(this->f1r);
			this->Controls->Add(this->d1r);
			this->Controls->Add(this->b1r);
			this->Controls->Add(this->a2r);
			this->Controls->Add(this->c2r);
			this->Controls->Add(this->e2r);
			this->Controls->Add(this->g2r);
			this->Controls->Add(this->h3r);
			this->Controls->Add(this->f3r);
			this->Controls->Add(this->d3r);
			this->Controls->Add(this->b3r);
			this->Controls->Add(this->a4r);
			this->Controls->Add(this->c4r);
			this->Controls->Add(this->g4r);
			this->Controls->Add(this->e4r);
			this->Controls->Add(this->b5r);
			this->Controls->Add(this->d5r);
			this->Controls->Add(this->h5r);
			this->Controls->Add(this->f5r);
			this->Controls->Add(this->a6r);
			this->Controls->Add(this->c6r);
			this->Controls->Add(this->e6r);
			this->Controls->Add(this->g6r);
			this->Controls->Add(this->h7r);
			this->Controls->Add(this->f7r);
			this->Controls->Add(this->d7r);
			this->Controls->Add(this->b7r);
			this->Controls->Add(this->g8r);
			this->Controls->Add(this->e8r);
			this->Controls->Add(this->c8r);
			this->Controls->Add(this->a8r);
			this->Controls->Add(this->a1r);
			this->Controls->Add(this->c1r);
			this->Controls->Add(this->e1r);
			this->Controls->Add(this->g1r);
			this->Controls->Add(this->h2r);
			this->Controls->Add(this->f2r);
			this->Controls->Add(this->d2r);
			this->Controls->Add(this->b2r);
			this->Controls->Add(this->g3r);
			this->Controls->Add(this->a3r);
			this->Controls->Add(this->c3r);
			this->Controls->Add(this->e3r);
			this->Controls->Add(this->h4r);
			this->Controls->Add(this->f4r);
			this->Controls->Add(this->d4r);
			this->Controls->Add(this->b4r);
			this->Controls->Add(this->a5r);
			this->Controls->Add(this->g5r);
			this->Controls->Add(this->e5r);
			this->Controls->Add(this->c5r);
			this->Controls->Add(this->b6r);
			this->Controls->Add(this->d6r);
			this->Controls->Add(this->f6r);
			this->Controls->Add(this->h6r);
			this->Controls->Add(this->h8r);
			this->Controls->Add(this->g7r);
			this->Controls->Add(this->e7r);
			this->Controls->Add(this->c7r);
			this->Controls->Add(this->a7r);
			this->Controls->Add(this->b8r);
			this->Controls->Add(this->d8r);
			this->Controls->Add(this->f8r);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->labelscore);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->frown);
			this->Controls->Add(this->NewGame);
			this->Controls->Add(this->A7);
			this->Controls->Add(this->A8);
			this->Controls->Add(this->A6);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->C8);
			this->Controls->Add(this->C7);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->D8);
			this->Controls->Add(this->D7);
			this->Controls->Add(this->D6);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->E8);
			this->Controls->Add(this->E7);
			this->Controls->Add(this->E6);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->E3);
			this->Controls->Add(this->E2);
			this->Controls->Add(this->E1);
			this->Controls->Add(this->F8);
			this->Controls->Add(this->F7);
			this->Controls->Add(this->F6);
			this->Controls->Add(this->F5);
			this->Controls->Add(this->F4);
			this->Controls->Add(this->F3);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->G8);
			this->Controls->Add(this->G7);
			this->Controls->Add(this->G6);
			this->Controls->Add(this->G5);
			this->Controls->Add(this->G4);
			this->Controls->Add(this->G3);
			this->Controls->Add(this->G2);
			this->Controls->Add(this->G1);
			this->Controls->Add(this->H8);
			this->Controls->Add(this->H7);
			this->Controls->Add(this->H6);
			this->Controls->Add(this->H5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->H4);
			this->Controls->Add(this->H3);
			this->Controls->Add(this->H2);
			this->Controls->Add(this->H1);
			this->Controls->Add(this->EnterQueen);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->smile);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"chessBoard";
			this->Text = L"chessBoard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g8r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h7r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a6r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b5r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a4r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h3r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->g2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->e2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->f1r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->h1r))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// added to the display board edition

		//global variable to count number of safe queens entered
	public: char numberOfQueens = 0;

		  //global var for score
		  Int32 score = 0;
		  Int32 penalty = 0;
		  //time
		  Diagnostics::Stopwatch^ timer;
		  Int32 sec;
		  int solutions = 92;

	private: virtual System::Void EnterQueen_Click(System::Object^ sender, System::EventArgs^ e) sealed {

		char qXshift, qYshift, CurrentQX, CurrentQY;

		//set up ChessBoard array - used to calculate queens' "star" positions
		array<String^, 2>^ ChessBoard = gcnew array<String^, 2>(10, 10);

		//queen position input through GUI
		String^ queenINPUT = textBox1->Text;
		String^ QUEENinput = queenINPUT->ToUpper();
		PictureBox^ queenBox = ShowQueens(QUEENinput);
		if (queenBox == Empty)
			return;


		fillChessboard(ChessBoard);
		for (char xi = 1; xi < 9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					qXshift = xi, qYshift = yj;
					queenposition(qXshift, qYshift, ChessBoard);
				}
			}
		}
		ShowBullets(ChessBoard);


		//conversion of current queen coordinates string^->char
		{
			if (QUEENinput->Substring(0, 1) == "A") CurrentQX = 1;
			if (QUEENinput->Substring(0, 1) == "B") CurrentQX = 2;
			if (QUEENinput->Substring(0, 1) == "C") CurrentQX = 3;
			if (QUEENinput->Substring(0, 1) == "D") CurrentQX = 4;
			if (QUEENinput->Substring(0, 1) == "E") CurrentQX = 5;
			if (QUEENinput->Substring(0, 1) == "F") CurrentQX = 6;
			if (QUEENinput->Substring(0, 1) == "G") CurrentQX = 7;
			if (QUEENinput->Substring(0, 1) == "H") CurrentQX = 8;

			if (QUEENinput->Substring(1, 1) == "1") CurrentQY = 1;
			if (QUEENinput->Substring(1, 1) == "2") CurrentQY = 2;
			if (QUEENinput->Substring(1, 1) == "3") CurrentQY = 3;
			if (QUEENinput->Substring(1, 1) == "4") CurrentQY = 4;
			if (QUEENinput->Substring(1, 1) == "5") CurrentQY = 5;
			if (QUEENinput->Substring(1, 1) == "6") CurrentQY = 6;
			if (QUEENinput->Substring(1, 1) == "7") CurrentQY = 7;
			if (QUEENinput->Substring(1, 1) == "8") CurrentQY = 8;
		}


		//making "frown" if queen's position is bad or "smile" if  queen's position is good
		if (ChessBoard[CurrentQX, CurrentQY] == "q" || ChessBoard[CurrentQX, CurrentQY] == "Q")
		{
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\ringout.wav");
			simpleSound->Play();
			score -= 50;
			penalty++;
			labelscore->Text = score + "";
			frown->Visible = true;

		}
		else
		{
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\tada.wav");
			simpleSound->Play();
			score += 100;
			labelscore->Text = score + "";
			smile->Visible = true;
			numberOfQueens = numberOfQueens + 1;
			//making queens' pictures visible

			{
				if (A1->Name == QUEENinput)  A1->Visible = true;
				else if (A2->Name == QUEENinput)  A2->Visible = true;
				else if (A3->Name == QUEENinput)  A3->Visible = true;
				else if (A4->Name == QUEENinput)  A4->Visible = true;
				else if (A5->Name == QUEENinput)  A5->Visible = true;
				else if (A6->Name == QUEENinput)  A6->Visible = true;
				else if (A7->Name == QUEENinput)  A7->Visible = true;
				else if (A8->Name == QUEENinput)  A8->Visible = true;
				else if (B1->Name == QUEENinput)  B1->Visible = true;
				else if (B2->Name == QUEENinput)  B2->Visible = true;
				else if (B3->Name == QUEENinput)  B3->Visible = true;
				else if (B4->Name == QUEENinput)  B4->Visible = true;
				else if (B5->Name == QUEENinput)  B5->Visible = true;
				else if (B6->Name == QUEENinput)  B6->Visible = true;
				else if (B7->Name == QUEENinput)  B7->Visible = true;
				else if (B8->Name == QUEENinput)  B8->Visible = true;
				else if (C1->Name == QUEENinput)  C1->Visible = true;
				else if (C2->Name == QUEENinput)  C2->Visible = true;
				else if (C3->Name == QUEENinput)  C3->Visible = true;
				else if (C4->Name == QUEENinput)  C4->Visible = true;
				else if (C5->Name == QUEENinput)  C5->Visible = true;
				else if (C6->Name == QUEENinput)  C6->Visible = true;
				else if (C7->Name == QUEENinput)  C7->Visible = true;
				else if (C8->Name == QUEENinput)  C8->Visible = true;
				else if (D1->Name == QUEENinput)  D1->Visible = true;
				else if (D2->Name == QUEENinput)  D2->Visible = true;
				else if (D3->Name == QUEENinput)  D3->Visible = true;
				else if (D4->Name == QUEENinput)  D4->Visible = true;
				else if (D5->Name == QUEENinput)  D5->Visible = true;
				else if (D6->Name == QUEENinput)  D6->Visible = true;
				else if (D7->Name == QUEENinput)  D7->Visible = true;
				else if (D8->Name == QUEENinput)  D8->Visible = true;
				else if (E1->Name == QUEENinput)  E1->Visible = true;
				else if (E2->Name == QUEENinput)  E2->Visible = true;
				else if (E3->Name == QUEENinput)  E3->Visible = true;
				else if (E4->Name == QUEENinput)  E4->Visible = true;
				else if (E5->Name == QUEENinput)  E5->Visible = true;
				else if (E6->Name == QUEENinput)  E6->Visible = true;
				else if (E7->Name == QUEENinput)  E7->Visible = true;
				else if (E8->Name == QUEENinput)  E8->Visible = true;
				else if (F1->Name == QUEENinput)  F1->Visible = true;
				else if (F2->Name == QUEENinput)  F2->Visible = true;
				else if (F3->Name == QUEENinput)  F3->Visible = true;
				else if (F4->Name == QUEENinput)  F4->Visible = true;
				else if (F5->Name == QUEENinput)  F5->Visible = true;
				else if (F6->Name == QUEENinput)  F6->Visible = true;
				else if (F7->Name == QUEENinput)  F7->Visible = true;
				else if (F8->Name == QUEENinput)  F8->Visible = true;
				else if (G1->Name == QUEENinput)  G1->Visible = true;
				else if (G2->Name == QUEENinput)  G2->Visible = true;
				else if (G3->Name == QUEENinput)  G3->Visible = true;
				else if (G4->Name == QUEENinput)  G4->Visible = true;
				else if (G5->Name == QUEENinput)  G5->Visible = true;
				else if (G6->Name == QUEENinput)  G6->Visible = true;
				else if (G7->Name == QUEENinput)  G7->Visible = true;
				else if (G8->Name == QUEENinput)  G8->Visible = true;
				else if (H1->Name == QUEENinput)  H1->Visible = true;
				else if (H2->Name == QUEENinput)  H2->Visible = true;
				else if (H3->Name == QUEENinput)  H3->Visible = true;
				else if (H4->Name == QUEENinput)  H4->Visible = true;
				else if (H5->Name == QUEENinput)  H5->Visible = true;
				else if (H6->Name == QUEENinput)  H6->Visible = true;
				else if (H7->Name == QUEENinput)  H7->Visible = true;
				else if (H8->Name == QUEENinput)  H8->Visible = true;
			}


			congrat(numberOfQueens);
		}

		ClearBullets();
		queenBox->Visible = true;
		ChessBoard[CurrentQX, CurrentQY] = "Q";
		ShowQueens(QUEENinput);
		queenposition(CurrentQX, CurrentQY, ChessBoard);
		ShowBullets(ChessBoard);
		helplabel->Text = checkPossibleSolutions();

	}



		   // New Game dialogue
	private: System::Void NewGame_Click(System::Object^ sender, System::EventArgs^ e) {	// New Game dialogue
		//end timer
		timer->Stop();


		frown->Visible = true;
		System::Media::SoundPlayer^ simpleSound = gcnew
			System::Media::SoundPlayer("c:\\windows\\media\\ringout.wav");
		simpleSound->Play();
		if (in_highscore())
			add_score(" !!! Why ??? Anyway A New Game will START NOW ..... ");
		else
			MessageBox::Show(" !!! Why ??? Anyway A New Game will START NOW ..... ");		// New Game dialogue
		{
			A1->Visible = false;		// remove queens from chessboard
			A2->Visible = false;		// remove queens from chessboard
			A3->Visible = false;		// remove queens from chessboard
			A4->Visible = false;		// remove queens from chessboard
			A5->Visible = false;		// remove queens from chessboard
			A6->Visible = false;		// remove queens from chessboard
			A7->Visible = false;		// remove queens from chessboard
			A8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			B1->Visible = false;		// remove queens from chessboard
			B2->Visible = false;		// remove queens from chessboard
			B3->Visible = false;		// remove queens from chessboard
			B4->Visible = false;		// remove queens from chessboard
			B5->Visible = false;		// remove queens from chessboard
			B6->Visible = false;		// remove queens from chessboard
			B7->Visible = false;		// remove queens from chessboard
			B8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			C1->Visible = false;		// remove queens from chessboard
			C2->Visible = false;		// remove queens from chessboard
			C3->Visible = false;		// remove queens from chessboard
			C4->Visible = false;		// remove queens from chessboard
			C5->Visible = false;		// remove queens from chessboard
			C6->Visible = false;		// remove queens from chessboard
			C7->Visible = false;		// remove queens from chessboard
			C8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			D1->Visible = false;		// remove queens from chessboard
			D2->Visible = false;		// remove queens from chessboard
			D3->Visible = false;		// remove queens from chessboard
			D4->Visible = false;		// remove queens from chessboard
			D5->Visible = false;		// remove queens from chessboard
			D6->Visible = false;		// remove queens from chessboard
			D7->Visible = false;		// remove queens from chessboard
			D8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			E1->Visible = false;		// remove queens from chessboard
			E2->Visible = false;		// remove queens from chessboard
			E3->Visible = false;		// remove queens from chessboard
			E4->Visible = false;		// remove queens from chessboard
			E5->Visible = false;		// remove queens from chessboard
			E6->Visible = false;		// remove queens from chessboard
			E7->Visible = false;		// remove queens from chessboard
			E8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			F1->Visible = false;		// remove queens from chessboard
			F2->Visible = false;		// remove queens from chessboard
			F3->Visible = false;		// remove queens from chessboard
			F4->Visible = false;		// remove queens from chessboard
			F5->Visible = false;		// remove queens from chessboard
			F6->Visible = false;		// remove queens from chessboard
			F7->Visible = false;		// remove queens from chessboard
			F8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			G1->Visible = false;		// remove queens from chessboard
			G2->Visible = false;		// remove queens from chessboard
			G3->Visible = false;		// remove queens from chessboard
			G4->Visible = false;		// remove queens from chessboard
			G5->Visible = false;		// remove queens from chessboard
			G6->Visible = false;		// remove queens from chessboard
			G7->Visible = false;		// remove queens from chessboard
			G8->Visible = false;		// remove queens from chessboard
			// remove queens from chessboard
			H1->Visible = false;		// remove queens from chessboard
			H2->Visible = false;		// remove queens from chessboard
			H3->Visible = false;		// remove queens from chessboard
			H4->Visible = false;		// remove queens from chessboard
			H5->Visible = false;		// remove queens from chessboard
			H6->Visible = false;		// remove queens from chessboard
			H7->Visible = false;		// remove queens from chessboard
			H8->Visible = false;		// remove queens from chessboard
		}
		smile->Visible = false;		// remove smile
		frown->Visible = false;		// remove frown

		numberOfQueens = 0;         //set up number of safe queens to 0
		score = 0;
		penalty = 0;
		timer = Stopwatch::StartNew();
		helplabel->Text = 92 + " possible solutions";


		clearboard();
	}

		   // Make the given Queen visible, and return false if the input was invalid
	private: PictureBox^ ShowQueens(String^ QUEENinput)
	{
		//making queens' pictures visible
		if (A1->Name == QUEENinput)  return A1;
		else if (A2->Name == QUEENinput)  return A2;
		else if (A3->Name == QUEENinput)  return A3;
		else if (A4->Name == QUEENinput)return  A4;
		else if (A5->Name == QUEENinput) return A5;
		else if (A6->Name == QUEENinput) return A6;
		else if (A7->Name == QUEENinput)return  A7;
		else if (A8->Name == QUEENinput) return A8;
		else if (B1->Name == QUEENinput) return B1;
		else if (B2->Name == QUEENinput) return B2;
		else if (B3->Name == QUEENinput) return B3;
		else if (B4->Name == QUEENinput)return  B4;
		else if (B5->Name == QUEENinput) return B5;
		else if (B6->Name == QUEENinput) return B6;
		else if (B7->Name == QUEENinput) return B7;
		else if (B8->Name == QUEENinput)return  B8;
		else if (C1->Name == QUEENinput) return C1;
		else if (C2->Name == QUEENinput) return C2;
		else if (C3->Name == QUEENinput) return C3;
		else if (C4->Name == QUEENinput)return  C4;
		else if (C5->Name == QUEENinput) return C5;
		else if (C6->Name == QUEENinput) return C6;
		else if (C7->Name == QUEENinput)return  C7;
		else if (C8->Name == QUEENinput)return  C8;
		else if (D1->Name == QUEENinput)return  D1;
		else if (D2->Name == QUEENinput)return  D2;
		else if (D3->Name == QUEENinput) return D3;
		else if (D4->Name == QUEENinput)return  D4;
		else if (D5->Name == QUEENinput) return D5;
		else if (D6->Name == QUEENinput) return D6;
		else if (D7->Name == QUEENinput) return D7;
		else if (D8->Name == QUEENinput) return D8;
		else if (E1->Name == QUEENinput) return E1;
		else if (E2->Name == QUEENinput) return E2;
		else if (E3->Name == QUEENinput) return E3;
		else if (E4->Name == QUEENinput) return E4;
		else if (E5->Name == QUEENinput) return E5;
		else if (E6->Name == QUEENinput) return E6;
		else if (E7->Name == QUEENinput) return E7;
		else if (E8->Name == QUEENinput) return E8;
		else if (F1->Name == QUEENinput) return F1;
		else if (F2->Name == QUEENinput) return F2;
		else if (F3->Name == QUEENinput) return F3;
		else if (F4->Name == QUEENinput) return F4;
		else if (F5->Name == QUEENinput) return F5;
		else if (F6->Name == QUEENinput) return F6;
		else if (F7->Name == QUEENinput) return F7;
		else if (F8->Name == QUEENinput) return F8;
		else if (G1->Name == QUEENinput) return G1;
		else if (G2->Name == QUEENinput) return G2;
		else if (G3->Name == QUEENinput) return G3;
		else if (G4->Name == QUEENinput) return G4;
		else if (G5->Name == QUEENinput) return G5;
		else if (G6->Name == QUEENinput) return G6;
		else if (G7->Name == QUEENinput) return G7;
		else if (G8->Name == QUEENinput) return G8;
		else if (H1->Name == QUEENinput) return H1;
		else if (H2->Name == QUEENinput) return H2;
		else if (H3->Name == QUEENinput) return H3;
		else if (H4->Name == QUEENinput) return H4;
		else if (H5->Name == QUEENinput) return H5;
		else if (H6->Name == QUEENinput) return H6;
		else if (H7->Name == QUEENinput) return H7;
		else if (H8->Name == QUEENinput) return H8;
		else {
			MessageBox::Show("INPUT ACCEPTIBLE RANGE is  A1....H8");
			return Empty;
		}
	}

		   void ShowBullets(array<String^, 2>^ chessboard)
		   {
			   if (!hint->Checked)
				   return;

			   if (chessboard[1, 1] == "q") a1r->Visible = true;
			   if (chessboard[1, 2] == "q") a2r->Visible = true;
			   if (chessboard[1, 3] == "q") a3r->Visible = true;
			   if (chessboard[1, 4] == "q") a4r->Visible = true;
			   if (chessboard[1, 5] == "q") a5r->Visible = true;
			   if (chessboard[1, 6] == "q") a6r->Visible = true;
			   if (chessboard[1, 7] == "q") a7r->Visible = true;
			   if (chessboard[1, 8] == "q") a8r->Visible = true;
			   if (chessboard[2, 1] == "q") b1r->Visible = true;
			   if (chessboard[2, 2] == "q") b2r->Visible = true;
			   if (chessboard[2, 3] == "q") b3r->Visible = true;
			   if (chessboard[2, 4] == "q") b4r->Visible = true;
			   if (chessboard[2, 5] == "q") b5r->Visible = true;
			   if (chessboard[2, 6] == "q") b6r->Visible = true;
			   if (chessboard[2, 7] == "q") b7r->Visible = true;
			   if (chessboard[2, 8] == "q") b8r->Visible = true;
			   if (chessboard[3, 1] == "q") c1r->Visible = true;
			   if (chessboard[3, 2] == "q") c2r->Visible = true;
			   if (chessboard[3, 3] == "q") c3r->Visible = true;
			   if (chessboard[3, 4] == "q") c4r->Visible = true;
			   if (chessboard[3, 5] == "q") c5r->Visible = true;
			   if (chessboard[3, 6] == "q") c6r->Visible = true;
			   if (chessboard[3, 7] == "q") c7r->Visible = true;
			   if (chessboard[3, 8] == "q") c8r->Visible = true;
			   if (chessboard[4, 1] == "q") d1r->Visible = true;
			   if (chessboard[4, 2] == "q") d2r->Visible = true;
			   if (chessboard[4, 3] == "q") d3r->Visible = true;
			   if (chessboard[4, 4] == "q") d4r->Visible = true;
			   if (chessboard[4, 5] == "q") d5r->Visible = true;
			   if (chessboard[4, 6] == "q") d6r->Visible = true;
			   if (chessboard[4, 7] == "q") d7r->Visible = true;
			   if (chessboard[4, 8] == "q") d8r->Visible = true;
			   if (chessboard[5, 1] == "q") e1r->Visible = true;
			   if (chessboard[5, 2] == "q") e2r->Visible = true;
			   if (chessboard[5, 3] == "q") e3r->Visible = true;
			   if (chessboard[5, 4] == "q") e4r->Visible = true;
			   if (chessboard[5, 5] == "q") e5r->Visible = true;
			   if (chessboard[5, 6] == "q") e6r->Visible = true;
			   if (chessboard[5, 7] == "q") e7r->Visible = true;
			   if (chessboard[5, 8] == "q") e8r->Visible = true;
			   if (chessboard[6, 1] == "q") f1r->Visible = true;
			   if (chessboard[6, 2] == "q") f2r->Visible = true;
			   if (chessboard[6, 3] == "q") f3r->Visible = true;
			   if (chessboard[6, 4] == "q") f4r->Visible = true;
			   if (chessboard[6, 5] == "q") f5r->Visible = true;
			   if (chessboard[6, 6] == "q") f6r->Visible = true;
			   if (chessboard[6, 7] == "q") f7r->Visible = true;
			   if (chessboard[6, 8] == "q") f8r->Visible = true;
			   if (chessboard[7, 1] == "q") g1r->Visible = true;
			   if (chessboard[7, 2] == "q") g2r->Visible = true;
			   if (chessboard[7, 3] == "q") g3r->Visible = true;
			   if (chessboard[7, 4] == "q") g4r->Visible = true;
			   if (chessboard[7, 5] == "q") g5r->Visible = true;
			   if (chessboard[7, 6] == "q") g6r->Visible = true;
			   if (chessboard[7, 7] == "q") g7r->Visible = true;
			   if (chessboard[7, 8] == "q") g8r->Visible = true;
			   if (chessboard[8, 1] == "q") h1r->Visible = true;
			   if (chessboard[8, 2] == "q") h2r->Visible = true;
			   if (chessboard[8, 3] == "q") h3r->Visible = true;
			   if (chessboard[8, 4] == "q") h4r->Visible = true;
			   if (chessboard[8, 5] == "q") h5r->Visible = true;
			   if (chessboard[8, 6] == "q") h6r->Visible = true;
			   if (chessboard[8, 7] == "q") h7r->Visible = true;
			   if (chessboard[8, 8] == "q") h8r->Visible = true;
		   }

		   void ClearBullets()
		   {
			   a1r->Visible = false;
			   a2r->Visible = false;
			   a3r->Visible = false;
			   a4r->Visible = false;
			   a5r->Visible = false;
			   a6r->Visible = false;
			   a7r->Visible = false;
			   a8r->Visible = false;
			   b1r->Visible = false;
			   b2r->Visible = false;
			   b3r->Visible = false;
			   b4r->Visible = false;
			   b5r->Visible = false;
			   b6r->Visible = false;
			   b7r->Visible = false;
			   b8r->Visible = false;
			   c1r->Visible = false;
			   c2r->Visible = false;
			   c3r->Visible = false;
			   c4r->Visible = false;
			   c5r->Visible = false;
			   c6r->Visible = false;
			   c7r->Visible = false;
			   c8r->Visible = false;
			   d1r->Visible = false;
			   d2r->Visible = false;
			   d3r->Visible = false;
			   d4r->Visible = false;
			   d5r->Visible = false;
			   d6r->Visible = false;
			   d7r->Visible = false;
			   d8r->Visible = false;
			   e1r->Visible = false;
			   e2r->Visible = false;
			   e3r->Visible = false;
			   e4r->Visible = false;
			   e5r->Visible = false;
			   e6r->Visible = false;
			   e7r->Visible = false;
			   e8r->Visible = false;
			   f1r->Visible = false;
			   f2r->Visible = false;
			   f3r->Visible = false;
			   f4r->Visible = false;
			   f5r->Visible = false;
			   f6r->Visible = false;
			   f7r->Visible = false;
			   f8r->Visible = false;
			   g1r->Visible = false;
			   g2r->Visible = false;
			   g3r->Visible = false;
			   g4r->Visible = false;
			   g5r->Visible = false;
			   g6r->Visible = false;
			   g7r->Visible = false;
			   g8r->Visible = false;
			   h1r->Visible = false;
			   h2r->Visible = false;
			   h3r->Visible = false;
			   h4r->Visible = false;
			   h5r->Visible = false;
			   h6r->Visible = false;
			   h7r->Visible = false;
			   h8r->Visible = false;
		   }

		   void fillChessboard(array<String^, 2>^ ChessBoard)
		   {
			   if (A1->Visible == true) ChessBoard[1, 1] = "Q";
			   if (A2->Visible == true) ChessBoard[1, 2] = "Q";
			   if (A3->Visible == true) ChessBoard[1, 3] = "Q";
			   if (A4->Visible == true) ChessBoard[1, 4] = "Q";
			   if (A5->Visible == true) ChessBoard[1, 5] = "Q";
			   if (A6->Visible == true) ChessBoard[1, 6] = "Q";
			   if (A7->Visible == true) ChessBoard[1, 7] = "Q";
			   if (A8->Visible == true) ChessBoard[1, 8] = "Q";

			   if (B1->Visible == true) ChessBoard[2, 1] = "Q";
			   if (B2->Visible == true) ChessBoard[2, 2] = "Q";
			   if (B3->Visible == true) ChessBoard[2, 3] = "Q";
			   if (B4->Visible == true) ChessBoard[2, 4] = "Q";
			   if (B5->Visible == true) ChessBoard[2, 5] = "Q";
			   if (B6->Visible == true) ChessBoard[2, 6] = "Q";
			   if (B7->Visible == true) ChessBoard[2, 7] = "Q";
			   if (B8->Visible == true) ChessBoard[2, 8] = "Q";

			   if (C1->Visible == true) ChessBoard[3, 1] = "Q";
			   if (C2->Visible == true) ChessBoard[3, 2] = "Q";
			   if (C3->Visible == true) ChessBoard[3, 3] = "Q";
			   if (C4->Visible == true) ChessBoard[3, 4] = "Q";
			   if (C5->Visible == true) ChessBoard[3, 5] = "Q";
			   if (C6->Visible == true) ChessBoard[3, 6] = "Q";
			   if (C7->Visible == true) ChessBoard[3, 7] = "Q";
			   if (C8->Visible == true) ChessBoard[3, 8] = "Q";

			   if (D1->Visible == true) ChessBoard[4, 1] = "Q";
			   if (D2->Visible == true) ChessBoard[4, 2] = "Q";
			   if (D3->Visible == true) ChessBoard[4, 3] = "Q";
			   if (D4->Visible == true) ChessBoard[4, 4] = "Q";
			   if (D5->Visible == true) ChessBoard[4, 5] = "Q";
			   if (D6->Visible == true) ChessBoard[4, 6] = "Q";
			   if (D7->Visible == true) ChessBoard[4, 7] = "Q";
			   if (D8->Visible == true) ChessBoard[4, 8] = "Q";

			   if (E1->Visible == true) ChessBoard[5, 1] = "Q";
			   if (E2->Visible == true) ChessBoard[5, 2] = "Q";
			   if (E3->Visible == true) ChessBoard[5, 3] = "Q";
			   if (E4->Visible == true) ChessBoard[5, 4] = "Q";
			   if (E5->Visible == true) ChessBoard[5, 5] = "Q";
			   if (E6->Visible == true) ChessBoard[5, 6] = "Q";
			   if (E7->Visible == true) ChessBoard[5, 7] = "Q";
			   if (E8->Visible == true) ChessBoard[5, 8] = "Q";

			   if (F1->Visible == true) ChessBoard[6, 1] = "Q";
			   if (F2->Visible == true) ChessBoard[6, 2] = "Q";
			   if (F3->Visible == true) ChessBoard[6, 3] = "Q";
			   if (F4->Visible == true) ChessBoard[6, 4] = "Q";
			   if (F5->Visible == true) ChessBoard[6, 5] = "Q";
			   if (F6->Visible == true) ChessBoard[6, 6] = "Q";
			   if (F7->Visible == true) ChessBoard[6, 7] = "Q";
			   if (F8->Visible == true) ChessBoard[6, 8] = "Q";

			   if (G1->Visible == true) ChessBoard[7, 1] = "Q";
			   if (G2->Visible == true) ChessBoard[7, 2] = "Q";
			   if (G3->Visible == true) ChessBoard[7, 3] = "Q";
			   if (G4->Visible == true) ChessBoard[7, 4] = "Q";
			   if (G5->Visible == true) ChessBoard[7, 5] = "Q";
			   if (G6->Visible == true) ChessBoard[7, 6] = "Q";
			   if (G7->Visible == true) ChessBoard[7, 7] = "Q";
			   if (G8->Visible == true) ChessBoard[7, 8] = "Q";

			   if (H1->Visible == true) ChessBoard[8, 1] = "Q";
			   if (H2->Visible == true) ChessBoard[8, 2] = "Q";
			   if (H3->Visible == true) ChessBoard[8, 3] = "Q";
			   if (H4->Visible == true) ChessBoard[8, 4] = "Q";
			   if (H5->Visible == true) ChessBoard[8, 5] = "Q";
			   if (H6->Visible == true) ChessBoard[8, 6] = "Q";
			   if (H7->Visible == true) ChessBoard[8, 7] = "Q";
			   if (H8->Visible == true) ChessBoard[8, 8] = "Q";
		   }

		   //Congratulation message function
		   void congrat(char QueenNumber) {
			   //add to highscore if needed
			   if (QueenNumber == 8 && in_highscore()) {
				   add_score(" Congratulations! All 8 queens are safe");
				   clearboard();
			   }
			   else if (QueenNumber == 8) {
				   MessageBox::Show(" Congratulations! All 8 queens are safe");
				   clearboard();
			   }

		   }

		   // queenposition function evaluates queens' positions on chessboard 
		   char queenposition(char qX_shift, char qY_shift, array<String^, 2>^ Chess_Board)
		   {

			   for (char j = 1; j < 9; j++)
			   {
				   //horizontal fields "shot through" by queens
				   if (Chess_Board[qX_shift, j] != "Q") Chess_Board[qX_shift, j] = "q";

				   //vertical fields "shot through"  by queens
				   if (Chess_Board[j, qY_shift] != "Q") Chess_Board[j, qY_shift] = "q";
			   }

			   //diagonal fields "shot through"  by queens
			   char xnew = qX_shift;
			   char ynew = qY_shift;

			   while ((xnew < 9) || (ynew < 9)) {
				   if ((xnew == 8) || (ynew == 8)) break;
				   xnew = xnew + 1;
				   ynew = ynew + 1;
				   if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
				   if ((xnew == 8) || (ynew == 8)) break;
			   }

			   xnew = qX_shift;
			   ynew = qY_shift;
			   while ((xnew >= 1) || (ynew >= 1)) {
				   if ((xnew == 1) || (ynew == 1)) break;
				   xnew = xnew - 1;
				   ynew = ynew - 1;

				   if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
				   if ((xnew == 1) || (ynew == 1)) break;
			   }

			   xnew = qX_shift;
			   ynew = qY_shift;
			   while ((xnew >= 1) || (ynew < 9)) {
				   if ((xnew == 1) || (ynew == 8)) break;
				   xnew = xnew - 1;
				   ynew = ynew + 1;

				   if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
				   if ((xnew == 1) || (ynew == 8)) break;
			   }

			   xnew = qX_shift;
			   ynew = qY_shift;
			   while ((xnew < 9) || (ynew >= 1)) {
				   if ((xnew == 8) || (ynew == 1)) break;
				   xnew = xnew + 1;
				   ynew = ynew - 1;

				   if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
				   if ((xnew == 8) || (ynew == 1)) break;
			   }
			   return 0;
		   }

		   std::vector<std::vector<int>> solveNQueens() {
			   std::vector<std::vector<int>> solutions;
			   for (int c0 = 0; c0 < 8; c0++)
			   {
				   for (int c1 = 0; c1 < 8; c1++)
				   {
					   if (c1 == c0 ||
						   c1 + 1 == c0 ||
						   1 - c1 == -c0)
						   continue;
					   for (int c2 = 0; c2 < 8; c2++)
					   {
						   if (c2 == c1 || c2 == c0 ||
							   c2 + 2 == c1 + 1 || c2 + 2 == c0 ||
							   2 - c2 == 1 - c1 || 2 - c2 == -c0)
							   continue;
						   for (int c3 = 0; c3 < 8; c3++)
						   {
							   if (c3 == c2 || c3 == c1 || c3 == c0 ||
								   c3 + 3 == c2 + 2 || c3 + 3 == c1 + 1 || c3 + 3 == c0 ||
								   3 - c3 == 2 - c2 || 3 - c3 == 1 - c1 || 3 - c3 == -c0)
								   continue;
							   for (int c4 = 0; c4 < 8; c4++)
							   {
								   if (c4 == c3 || c4 == c2 || c4 == c1 || c4 == c0 ||
									   c4 + 4 == c3 + 3 || c4 + 4 == c2 + 2 || c4 + 4 == c1 + 1 || c4 + 4 == c0 ||
									   4 - c4 == 3 - c3 || 4 - c4 == 2 - c2 || 4 - c4 == 1 - c1 || 4 - c4 == -c0)
									   continue;
								   for (int c5 = 0; c5 < 8; c5++)
								   {
									   if (c5 == c4 || c5 == c3 || c5 == c2 || c5 == c1 || c5 == c0 ||
										   c5 + 5 == c4 + 4 || c5 + 5 == c3 + 3 || c5 + 5 == c2 + 2 || c5 + 5 == c1 + 1 || c5 + 5 == c0 ||
										   5 - c5 == 4 - c4 || 5 - c5 == 3 - c3 || 5 - c5 == 2 - c2 || 5 - c5 == 1 - c1 || 5 - c5 == -c0)
										   continue;
									   for (int c6 = 0; c6 < 8; c6++)
									   {
										   if (c6 == c5 || c6 == c4 || c6 == c3 || c6 == c2 || c6 == c1 || c6 == c0 ||
											   c6 + 6 == c5 + 5 || c6 + 6 == c4 + 4 || c6 + 6 == c3 + 3 || c6 + 6 == c2 + 2 || c6 + 6 == c1 + 1 || c6 + 6 == c0 ||
											   6 - c6 == 5 - c5 || 6 - c6 == 4 - c4 || 6 - c6 == 3 - c3 || 6 - c6 == 2 - c2 || 6 - c6 == 1 - c1 || 6 - c6 == -c0)
											   continue;
										   // printChoices(std::vector<int>({c0, c1, c2, c3, c4, c5, c6}));

										   for (int c7 = 0; c7 < 8; c7++)
										   {
											   if (c7 == c6 || c7 == c5 || c7 == c4 || c7 == c3 || c7 == c2 || c7 == c1 || c7 == c0 ||
												   c7 + 7 == c6 + 6 || c7 + 7 == c5 + 5 || c7 + 7 == c4 + 4 || c7 + 7 == c3 + 3 || c7 + 7 == c2 + 2 || c7 + 7 == c1 + 1 || c7 + 7 == c0 ||
												   7 - c7 == 6 - c6 || 7 - c7 == 5 - c5 || 7 - c7 == 4 - c4 || 7 - c7 == 3 - c3 || 7 - c7 == 2 - c2 || 7 - c7 == 1 - c1 || 7 - c7 == -c0)
												   continue;
											   // printChoices(std::vector<int>({c0, c1, c2, c3, c4, c5, c6, c7}));
											   solutions.push_back(std::vector<int>({ c0, c1, c2, c3, c4, c5, c6, c7 }));
											   // sum++;
										   }
									   }
								   }
							   }
						   }
					   }
				   }
			   }
			   return solutions;
		   }

		   //Assumes there's no 
		   std::vector<int> vectorizeBoard() {
			   std::vector<int> ret;

			   if      (A1->Visible) ret.push_back(0);
			   else if (B1->Visible) ret.push_back(1);
			   else if (C1->Visible) ret.push_back(2);
			   else if (D1->Visible) ret.push_back(3);
			   else if (E1->Visible) ret.push_back(4);
			   else if (F1->Visible) ret.push_back(5);
			   else if (G1->Visible) ret.push_back(6);
			   else if (H1->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);


			   if      (A2->Visible) ret.push_back(0);
			   else if (B2->Visible) ret.push_back(1);
			   else if (C2->Visible) ret.push_back(2);
			   else if (D2->Visible) ret.push_back(3);
			   else if (E2->Visible) ret.push_back(4);
			   else if (F2->Visible) ret.push_back(5);
			   else if (G2->Visible) ret.push_back(6);
			   else if (H2->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if      (A3->Visible) ret.push_back(0);
			   else if (B3->Visible) ret.push_back(1);
			   else if (C3->Visible) ret.push_back(2);
			   else if (D3->Visible) ret.push_back(3);
			   else if (E3->Visible) ret.push_back(4);
			   else if (F3->Visible) ret.push_back(5);
			   else if (G3->Visible) ret.push_back(6);
			   else if (H3->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if      (A4->Visible) ret.push_back(0);
			   else if (B4->Visible) ret.push_back(1);
			   else if (C4->Visible) ret.push_back(2);
			   else if (D4->Visible) ret.push_back(3);
			   else if (E4->Visible) ret.push_back(4);
			   else if (F4->Visible) ret.push_back(5);
			   else if (G4->Visible) ret.push_back(6);
			   else if (H4->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if      (A5->Visible) ret.push_back(0);
			   else if (B5->Visible) ret.push_back(1);
			   else if (C5->Visible) ret.push_back(2);
			   else if (D5->Visible) ret.push_back(3);
			   else if (E5->Visible) ret.push_back(4);
			   else if (F5->Visible) ret.push_back(5);
			   else if (G5->Visible) ret.push_back(6);
			   else if (H5->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if      (A6->Visible) ret.push_back(0);
			   else if (B6->Visible) ret.push_back(1);
			   else if (C6->Visible) ret.push_back(2);
			   else if (D6->Visible) ret.push_back(3);
			   else if (E6->Visible) ret.push_back(4);
			   else if (F6->Visible) ret.push_back(5);
			   else if (G6->Visible) ret.push_back(6);
			   else if (H6->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if (A7->Visible) ret.push_back(0);
			   else if (B7->Visible) ret.push_back(1);
			   else if (C7->Visible) ret.push_back(2);
			   else if (D7->Visible) ret.push_back(3);
			   else if (E7->Visible) ret.push_back(4);
			   else if (F7->Visible) ret.push_back(5);
			   else if (G7->Visible) ret.push_back(6);
			   else if (H7->Visible) ret.push_back(7);
			   else				    ret.push_back(-1);

			   if      (A8->Visible) ret.push_back(0);
			   else if (B8->Visible) ret.push_back(1);
			   else if (C8->Visible) ret.push_back(2);
			   else if (D8->Visible) ret.push_back(3);
			   else if (E8->Visible) ret.push_back(4);
			   else if (F8->Visible) ret.push_back(5);
			   else if (G8->Visible) ret.push_back(6);
			   else if (H8->Visible) ret.push_back(7);
			   else				    ret.push_back(-1); 

			   //error bit 1
			   ret.push_back(2 <= (A1->Visible + B1->Visible + C1->Visible + D1->Visible + E1->Visible + F1->Visible + G1->Visible + H1->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A2->Visible + B2->Visible + C2->Visible + D2->Visible + E2->Visible + F2->Visible + G2->Visible + H2->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A3->Visible + B3->Visible + C3->Visible + D3->Visible + E3->Visible + F3->Visible + G3->Visible + H3->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A4->Visible + B4->Visible + C4->Visible + D4->Visible + E4->Visible + F4->Visible + G4->Visible + H4->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A5->Visible + B5->Visible + C5->Visible + D5->Visible + E5->Visible + F5->Visible + G5->Visible + H5->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A6->Visible + B6->Visible + C6->Visible + D6->Visible + E6->Visible + F6->Visible + G6->Visible + H6->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A7->Visible + B7->Visible + C7->Visible + D7->Visible + E7->Visible + F7->Visible + G7->Visible + H7->Visible));
			   ret.at(8) = ret.at(8) | (2 <= (A8->Visible + B8->Visible + C8->Visible + D8->Visible + E8->Visible + F8->Visible + G8->Visible + H8->Visible));
			   return ret;
		   }

		   String^ checkPossibleSolutions()
		   {
			   if (!help->Checked)
				   return "";

			   std::vector<int> board = vectorizeBoard();
			   std::vector<std::vector<int>> solutions = solveNQueens();

			   if (board.at(8))
				   return "No possible solutions";

			   int sum = 0;
			   for (int vi = 0; vi < solutions.size(); vi++)
			   {
				   std::vector<int> v = solutions.at(vi);
				   bool match = true;
				   for (int i = 0; i < 8 && match; i++)
				   {
					   if (board.at(i) != -1 && board.at(i) != v.at(i))
						   match = false;
				   }

				   if (match)
					   sum++;
			   }
			   return sum + " possible solutions";
		   }

		   //double click to add queen		
	private: System::Void pictureBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		//array to make it easy to index chess pieces
		array<array<PictureBox^>^>^ chesslist = gcnew array<array<PictureBox^>^>{
			gcnew array<PictureBox^>{A8, A7, A6, A5, A4, A3, A2, A1},
				gcnew array<PictureBox^>{B8, B7, B6, B5, B4, B3, B2, B1},
				gcnew array<PictureBox^>{C8, C7, C6, C5, C4, C3, C2, C1},
				gcnew array<PictureBox^>{D8, D7, D6, D5, D4, D3, D2, D1},
				gcnew array<PictureBox^>{E8, E7, E6, E5, E4, E3, E2, E1},
				gcnew array<PictureBox^>{F8, F7, F6, F5, F4, F3, F2, F1},
				gcnew array<PictureBox^>{G8, G7, G6, G5, G4, G3, G2, G1},
				gcnew array<PictureBox^>{H8, H7, H6, H5, H4, H3, H2, H1}
		};
		//get x y relative to chess board
		auto mouse = Cursor->Current;
		auto relativePoint = this->PointToClient(mouse->Position);
		auto x = (relativePoint.X - 63) / 55;
		auto y = (relativePoint.Y - 67) / 55;
		if (is_queen_valid(x + 1, 8 - y))//modfiy x,y due to different chessboard array setups (top-left to bot-right) to (bot-left to top-right)
		{
			chesslist[x][y]->Visible = true;
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\tada.wav");
			simpleSound->Play();
			smile->Visible = true;
			numberOfQueens = numberOfQueens + 1;

			score += 100;
			labelscore->Text = score + "";
			congrat(numberOfQueens);
		}
		else
		{
			System::Media::SoundPlayer^ simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\ringout.wav");
			simpleSound->Play();
			if (score >= 50)
				score -= 50;
			penalty++;
			labelscore->Text = score + "";
			frown->Visible = true;
		}
	}
		   //check if queen is in a valid position
	private: bool is_queen_valid(int CurrentQX, int CurrentQY)
	{
		char qXshift, qYshift;
		//set up ChessBoard array - used to calculate queens' "star" positions
		array<String^, 2>^ ChessBoard = gcnew array<String^, 2>(10, 10);

		//copying queens' positions from GUI chessboard to ChessBoard array
		{
			if (A1->Visible == true) ChessBoard[1, 1] = "Q";
			if (A2->Visible == true) ChessBoard[1, 2] = "Q";
			if (A3->Visible == true) ChessBoard[1, 3] = "Q";
			if (A4->Visible == true) ChessBoard[1, 4] = "Q";
			if (A5->Visible == true) ChessBoard[1, 5] = "Q";
			if (A6->Visible == true) ChessBoard[1, 6] = "Q";
			if (A7->Visible == true) ChessBoard[1, 7] = "Q";
			if (A8->Visible == true) ChessBoard[1, 8] = "Q";

			if (B1->Visible == true) ChessBoard[2, 1] = "Q";
			if (B2->Visible == true) ChessBoard[2, 2] = "Q";
			if (B3->Visible == true) ChessBoard[2, 3] = "Q";
			if (B4->Visible == true) ChessBoard[2, 4] = "Q";
			if (B5->Visible == true) ChessBoard[2, 5] = "Q";
			if (B6->Visible == true) ChessBoard[2, 6] = "Q";
			if (B7->Visible == true) ChessBoard[2, 7] = "Q";
			if (B8->Visible == true) ChessBoard[2, 8] = "Q";

			if (C1->Visible == true) ChessBoard[3, 1] = "Q";
			if (C2->Visible == true) ChessBoard[3, 2] = "Q";
			if (C3->Visible == true) ChessBoard[3, 3] = "Q";
			if (C4->Visible == true) ChessBoard[3, 4] = "Q";
			if (C5->Visible == true) ChessBoard[3, 5] = "Q";
			if (C6->Visible == true) ChessBoard[3, 6] = "Q";
			if (C7->Visible == true) ChessBoard[3, 7] = "Q";
			if (C8->Visible == true) ChessBoard[3, 8] = "Q";

			if (D1->Visible == true) ChessBoard[4, 1] = "Q";
			if (D2->Visible == true) ChessBoard[4, 2] = "Q";
			if (D3->Visible == true) ChessBoard[4, 3] = "Q";
			if (D4->Visible == true) ChessBoard[4, 4] = "Q";
			if (D5->Visible == true) ChessBoard[4, 5] = "Q";
			if (D6->Visible == true) ChessBoard[4, 6] = "Q";
			if (D7->Visible == true) ChessBoard[4, 7] = "Q";
			if (D8->Visible == true) ChessBoard[4, 8] = "Q";

			if (E1->Visible == true) ChessBoard[5, 1] = "Q";
			if (E2->Visible == true) ChessBoard[5, 2] = "Q";
			if (E3->Visible == true) ChessBoard[5, 3] = "Q";
			if (E4->Visible == true) ChessBoard[5, 4] = "Q";
			if (E5->Visible == true) ChessBoard[5, 5] = "Q";
			if (E6->Visible == true) ChessBoard[5, 6] = "Q";
			if (E7->Visible == true) ChessBoard[5, 7] = "Q";
			if (E8->Visible == true) ChessBoard[5, 8] = "Q";

			if (F1->Visible == true) ChessBoard[6, 1] = "Q";
			if (F2->Visible == true) ChessBoard[6, 2] = "Q";
			if (F3->Visible == true) ChessBoard[6, 3] = "Q";
			if (F4->Visible == true) ChessBoard[6, 4] = "Q";
			if (F5->Visible == true) ChessBoard[6, 5] = "Q";
			if (F6->Visible == true) ChessBoard[6, 6] = "Q";
			if (F7->Visible == true) ChessBoard[6, 7] = "Q";
			if (F8->Visible == true) ChessBoard[6, 8] = "Q";

			if (G1->Visible == true) ChessBoard[7, 1] = "Q";
			if (G2->Visible == true) ChessBoard[7, 2] = "Q";
			if (G3->Visible == true) ChessBoard[7, 3] = "Q";
			if (G4->Visible == true) ChessBoard[7, 4] = "Q";
			if (G5->Visible == true) ChessBoard[7, 5] = "Q";
			if (G6->Visible == true) ChessBoard[7, 6] = "Q";
			if (G7->Visible == true) ChessBoard[7, 7] = "Q";
			if (G8->Visible == true) ChessBoard[7, 8] = "Q";

			if (H1->Visible == true) ChessBoard[8, 1] = "Q";
			if (H2->Visible == true) ChessBoard[8, 2] = "Q";
			if (H3->Visible == true) ChessBoard[8, 3] = "Q";
			if (H4->Visible == true) ChessBoard[8, 4] = "Q";
			if (H5->Visible == true) ChessBoard[8, 5] = "Q";
			if (H6->Visible == true) ChessBoard[8, 6] = "Q";
			if (H7->Visible == true) ChessBoard[8, 7] = "Q";
			if (H8->Visible == true) ChessBoard[8, 8] = "Q";
		}

		// assignment of "q" to ChessBoard fields fired by queens - queens' "stars"

		for (char xi = 1; xi < 9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					qXshift = xi, qYshift = yj;
					queenposition(qXshift, qYshift, ChessBoard);
				}
			}

		}


		return !(ChessBoard[CurrentQX, CurrentQY] == "q" || ChessBoard[CurrentQX, CurrentQY] == "Q");


	}

		   //remove queen
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//create array for indexing queens
		array<array<PictureBox^>^>^ chesslist = gcnew array<array<PictureBox^>^>{
			gcnew array<PictureBox^>{A8, A7, A6, A5, A4, A3, A2, A1},
				gcnew array<PictureBox^>{B8, B7, B6, B5, B4, B3, B2, B1},
				gcnew array<PictureBox^>{C8, C7, C6, C5, C4, C3, C2, C1},
				gcnew array<PictureBox^>{D8, D7, D6, D5, D4, D3, D2, D1},
				gcnew array<PictureBox^>{E8, E7, E6, E5, E4, E3, E2, E1},
				gcnew array<PictureBox^>{F8, F7, F6, F5, F4, F3, F2, F1},
				gcnew array<PictureBox^>{G8, G7, G6, G5, G4, G3, G2, G1},
				gcnew array<PictureBox^>{H8, H7, H6, H5, H4, H3, H2, H1}
		};

		//get input
		String^ queenINPUT = (textBox1->Text)->ToUpper();

		//check valid input with regex
		if (!Regex::Match(queenINPUT, "[A-H][1-8]")->Success)
		{
			MessageBox::Show("INPUT ACCEPTIBLE RANGE is  A1....H8");
			return;
		}
		int x = queenINPUT[0] - 'A';
		int y = 8 - (queenINPUT[1] - '0');
		if (chesslist[x][y]->Visible)
		{
			if (score >= 50)
				score -= 50;
			chesslist[x][y]->Visible = false;
			numberOfQueens -= 1;
			penalty++;
			labelscore->Text = score + "";
		}

		helplabel->Text = checkPossibleSolutions();
		ClearBullets();
		array<String^, 2>^ ChessBoard = gcnew array<String^, 2>(10, 10);
		fillChessboard(ChessBoard);
		for (char xi = 1; xi < 9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					queenposition(xi, yj, ChessBoard);
				}
			}
		}
		ShowBullets(ChessBoard);
	}

		   //return true if current score in highscores
		   bool in_highscore() {
			   if (score == 0)
				   return false;
			   int score_amount = 0;
			   array<ScoreEntry^>^ scorelist = gcnew array<ScoreEntry^>(11);
			   read_scores(score_amount, scorelist);
			   return (score_amount < 10 || (score_amount == 10 && score > scorelist[9]->score));
		   }


		   //add score to score board
		   System::Void add_score(String^ message)
		   {
			   int score_amount = 0;

			   array<ScoreEntry^>^ scorelist = gcnew array<ScoreEntry^>(11);
			   read_scores(score_amount, scorelist);
			   if (score_amount < 10 || (score_amount == 10 && score > scorelist[9]->score))
			   {
				   auto time = (timer->ElapsedMilliseconds) / 1000;
				   DateTime date = DateTime::Now;
				   oudaAssignment2::enterScore enter(message, penalty, date.ToString("yyyy/MM/dd"), numberOfQueens, time, score, scorelist, score_amount);
				   enter.ShowDialog();
			   }

		   }
		   //reads in scores into array and, returns array lengh by reference
		   System::Void read_scores(int& amount, array<ScoreEntry^>^& scorelist)
		   {
			   try {
				   array<String^>^ words;
				   String^ line;
				   String^ delimStr = "|";
				   array<Char>^ delimiter = delimStr->ToCharArray();
				   StreamReader^ infile = File::OpenText("score_list.txt");
				   for (; ((line = infile->ReadLine()) != nullptr) && amount < 10;
					   amount++)
				   {
					   words = line->Split(delimiter);
					   String^ name = words[0];
					   String^ date = words[1];
					   UInt32 queens = Convert::ToUInt32(words[2]);
					   Int32 time = Convert::ToInt32(words[3]); //in seconds
					   Int32 score = Convert::ToInt32(words[4]);
					   scorelist[amount] = (gcnew ScoreEntry(name, date, queens, time, score));
				   }
				   infile->Close();

			   }
			   catch (Exception^ e) {
				   MessageBox::Show("Error Reading file");
			   }
		   }

		   //exit game button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		timer->Stop();
		if (in_highscore())
			add_score("!!! Why ??? Game will exit ");
		clearboard();
		this->Close();
	}
		   //clears board for new game
		   System::Void clearboard()
		   {
			   {
				   A1->Visible = false;		// remove queens from chessboard
				   A2->Visible = false;		// remove queens from chessboard
				   A3->Visible = false;		// remove queens from chessboard
				   A4->Visible = false;		// remove queens from chessboard
				   A5->Visible = false;		// remove queens from chessboard
				   A6->Visible = false;		// remove queens from chessboard
				   A7->Visible = false;		// remove queens from chessboard
				   A8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   B1->Visible = false;		// remove queens from chessboard
				   B2->Visible = false;		// remove queens from chessboard
				   B3->Visible = false;		// remove queens from chessboard
				   B4->Visible = false;		// remove queens from chessboard
				   B5->Visible = false;		// remove queens from chessboard
				   B6->Visible = false;		// remove queens from chessboard
				   B7->Visible = false;		// remove queens from chessboard
				   B8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   C1->Visible = false;		// remove queens from chessboard
				   C2->Visible = false;		// remove queens from chessboard
				   C3->Visible = false;		// remove queens from chessboard
				   C4->Visible = false;		// remove queens from chessboard
				   C5->Visible = false;		// remove queens from chessboard
				   C6->Visible = false;		// remove queens from chessboard
				   C7->Visible = false;		// remove queens from chessboard
				   C8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   D1->Visible = false;		// remove queens from chessboard
				   D2->Visible = false;		// remove queens from chessboard
				   D3->Visible = false;		// remove queens from chessboard
				   D4->Visible = false;		// remove queens from chessboard
				   D5->Visible = false;		// remove queens from chessboard
				   D6->Visible = false;		// remove queens from chessboard
				   D7->Visible = false;		// remove queens from chessboard
				   D8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   E1->Visible = false;		// remove queens from chessboard
				   E2->Visible = false;		// remove queens from chessboard
				   E3->Visible = false;		// remove queens from chessboard
				   E4->Visible = false;		// remove queens from chessboard
				   E5->Visible = false;		// remove queens from chessboard
				   E6->Visible = false;		// remove queens from chessboard
				   E7->Visible = false;		// remove queens from chessboard
				   E8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   F1->Visible = false;		// remove queens from chessboard
				   F2->Visible = false;		// remove queens from chessboard
				   F3->Visible = false;		// remove queens from chessboard
				   F4->Visible = false;		// remove queens from chessboard
				   F5->Visible = false;		// remove queens from chessboard
				   F6->Visible = false;		// remove queens from chessboard
				   F7->Visible = false;		// remove queens from chessboard
				   F8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   G1->Visible = false;		// remove queens from chessboard
				   G2->Visible = false;		// remove queens from chessboard
				   G3->Visible = false;		// remove queens from chessboard
				   G4->Visible = false;		// remove queens from chessboard
				   G5->Visible = false;		// remove queens from chessboard
				   G6->Visible = false;		// remove queens from chessboard
				   G7->Visible = false;		// remove queens from chessboard
				   G8->Visible = false;		// remove queens from chessboard
				   // remove queens from chessboard
				   H1->Visible = false;		// remove queens from chessboard
				   H2->Visible = false;		// remove queens from chessboard
				   H3->Visible = false;		// remove queens from chessboard
				   H4->Visible = false;		// remove queens from chessboard
				   H5->Visible = false;		// remove queens from chessboard
				   H6->Visible = false;		// remove queens from chessboard
				   H7->Visible = false;		// remove queens from chessboard
				   H8->Visible = false;		// remove queens from chessboard
			   }
			   smile->Visible = false;		// remove smile
			   frown->Visible = false;		// remove frown

			   numberOfQueens = 0;         //set up number of safe queens to 0
			   score = 0;
			   penalty = 0;
			   labelscore->Text = score + "";
			   timer = Stopwatch::StartNew();
			   ClearBullets();
		   }

	private: System::Void hint_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		ClearBullets();
		array<String^, 2>^ ChessBoard = gcnew array<String^, 2>(10, 10);
		fillChessboard(ChessBoard);
		for (char xi = 1; xi < 9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					queenposition(xi, yj, ChessBoard);
				}
			}
		}
		ShowBullets(ChessBoard);
	}
	private: System::Void help_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		ClearBullets();
		array<String^, 2>^ ChessBoard = gcnew array<String^, 2>(10, 10);
		fillChessboard(ChessBoard);
		for (char xi = 1; xi < 9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					queenposition(xi, yj, ChessBoard);
				}
			}
		}
		ShowBullets(ChessBoard);
		helplabel->Text = checkPossibleSolutions();
	}
};



}

