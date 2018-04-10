#pragma once

#include "About.h"
#include "Parabola.h"
#include "Import.h"

namespace charts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		System::ComponentModel::Container ^components;
		
		int a;
		int b;
		int x1;
		int x2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  lINEARToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  drawLinearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pARABOLAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  drawParabolaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iMPORTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  importGraphToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  authorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::TextBox^  textBox4;
			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->lINEARToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawLinearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pARABOLAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawParabolaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iMPORTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importGraphToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->authorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(200, 83);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"liniowy";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(415, 331);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(289, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"LINEAR FUNCTION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(105, 157);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(33, 23);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(105, 112);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 23);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(35, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"A:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(35, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"B:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(58, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"DRAW!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(35, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Coef";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(35, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Range of x";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(35, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"x2";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(35, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 23);
			this->label7->TabIndex = 12;
			this->label7->Text = L"x1:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(105, 254);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(33, 23);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(105, 299);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 23);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->lINEARToolStripMenuItem, 
				this->pARABOLAToolStripMenuItem, this->iMPORTToolStripMenuItem, this->aboutToolStripMenuItem, this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(637, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// lINEARToolStripMenuItem
			// 
			this->lINEARToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->drawLinearToolStripMenuItem});
			this->lINEARToolStripMenuItem->Name = L"lINEARToolStripMenuItem";
			this->lINEARToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->lINEARToolStripMenuItem->Text = L"LINEAR";
			this->lINEARToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lINEARToolStripMenuItem_Click);
			// 
			// drawLinearToolStripMenuItem
			// 
			this->drawLinearToolStripMenuItem->Name = L"drawLinearToolStripMenuItem";
			this->drawLinearToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->drawLinearToolStripMenuItem->Text = L"Draw Linear!!!";
			this->drawLinearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::drawLinearToolStripMenuItem_Click);
			// 
			// pARABOLAToolStripMenuItem
			// 
			this->pARABOLAToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->drawParabolaToolStripMenuItem});
			this->pARABOLAToolStripMenuItem->Name = L"pARABOLAToolStripMenuItem";
			this->pARABOLAToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->pARABOLAToolStripMenuItem->Text = L"PARABOLA";
			// 
			// drawParabolaToolStripMenuItem
			// 
			this->drawParabolaToolStripMenuItem->Name = L"drawParabolaToolStripMenuItem";
			this->drawParabolaToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->drawParabolaToolStripMenuItem->Text = L"Draw parabola!!!";
			this->drawParabolaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::drawParabolaToolStripMenuItem_Click);
			// 
			// iMPORTToolStripMenuItem
			// 
			this->iMPORTToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->importGraphToolStripMenuItem});
			this->iMPORTToolStripMenuItem->Name = L"iMPORTToolStripMenuItem";
			this->iMPORTToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->iMPORTToolStripMenuItem->Text = L"IMPORT";
			// 
			// importGraphToolStripMenuItem
			// 
			this->importGraphToolStripMenuItem->Name = L"importGraphToolStripMenuItem";
			this->importGraphToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->importGraphToolStripMenuItem->Text = L"Import Graph!!!";
			this->importGraphToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::importGraphToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->authorToolStripMenuItem});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->aboutToolStripMenuItem->Text = L"ABOUT";
			// 
			// authorToolStripMenuItem
			// 
			this->authorToolStripMenuItem->Name = L"authorToolStripMenuItem";
			this->authorToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->authorToolStripMenuItem->Text = L"Author :)";
			this->authorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::authorToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->quitToolStripMenuItem});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->exitToolStripMenuItem->Text = L"EXIT";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quitToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(637, 451);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"CHARTS";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 chart1->Visible = false;
			 a = -999;
			 b = -999;
			 x1 = 0;
			 x2 = 0;
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 a =  Int32::Parse( this -> textBox1 -> Text);
			 b =  Int32::Parse( this -> textBox2 -> Text);
			 x1 = Int32::Parse( this -> textBox3 -> Text);
			 x2 = Int32::Parse( this -> textBox4 -> Text);

			 if(a != -999 && b != -999 && x1 != 0 && x2 != 0 )
			 {
			 	this -> chart1 -> Visible = true;
				 for( int i = x1+1 ; i < x2+1; i++)
					this -> chart1 -> Series["liniowy"] -> Points -> AddXY( i , a * i + b  );
				
				MessageBox::Show("Zero point!: ( 0 ,"+ (double)(-b/a)+")" );
			 }
		 }

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e){}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void lINEARToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {}


private: System::Void authorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 About^ a = gcnew About();
			 a -> Show();
		 }
private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Application::Exit();
		 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){}
private: System::Void drawLinearToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Form1^ f = gcnew Form1();
			 f -> Show();
		 }
private: System::Void drawParabolaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Parabola^ fp = gcnew Parabola();
			 fp -> Show();
		 }

private: System::Void importGraphToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Import^ fi = gcnew Import();
				 fi -> Show();
			 }
	};
}

