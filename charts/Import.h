#pragma once

#include <fstream>
#include <iostream>

#define MAX 100

namespace charts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Import
	/// </summary>
	public ref class Import : public System::Windows::Forms::Form
	{
	public:
		Import(void)
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
		~Import()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Import::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(196, 69);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"Chuj";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(415, 331);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(283, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"IMPORTED FUNCTION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(49, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"IMPORT!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Import::button1_Click);
			// 
			// Import
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(637, 451);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Import";
			this->Text = L"Import";
			this->Load += gcnew System::EventHandler(this, &Import::Import_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Import_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 this -> chart1 -> Visible = false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 using namespace std;
				 int tab[ MAX ];
				 int tab1[ MAX ];
				 ifstream file;
				 file.open( "C:\\Users\\Miko³aj\\Desktop\\Programming Language\\wczytywanie z pliku\\input_output\\input_output\\siatka.txt");
				 if( file.fail( ) )
				 {
					MessageBox::Show("Nie da sie!!! ");
				 	exit(1);
				 }
				 for( int i = 0; i < 8; i++)
				 	file>>tab[i]>>tab1[i];
				 for( int i = 0; i < 8; i++)
					cout<<tab[i]<<" "<<tab1[i] <<endl;

				 this -> chart1 -> Visible = true;
				 for( int i = 0 ; i < 8 ; i++)
					this -> chart1 -> Series["Chuj"] -> Points -> AddXY( tab[i] , tab1[i] );
			 }
};
}
