#pragma once
//#include <math.h>
#include "../Lab3/Lab3/Algorithms.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^ textBox_Simpson_0;
	private: System::Windows::Forms::TextBox^ textBox_Trapezoid_0;
	private: System::Windows::Forms::TextBox^ textBox_Rectangle_0;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Trapezoid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_N;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_Simpson_1;
	private: System::Windows::Forms::TextBox^ textBox_Trapezoid_1;
	private: System::Windows::Forms::TextBox^ textBox_Rectangle_1;

	private: System::Windows::Forms::TextBox^ textBox_Simpson_2;
	private: System::Windows::Forms::TextBox^ textBox_Trapezoid_2;
	private: System::Windows::Forms::TextBox^ textBox_Rectangle_2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_Real_f;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox_Real_f_cos10;
	private: System::Windows::Forms::TextBox^ textBox_Real_f_cos100;
	private: System::Windows::Forms::TextBox^ textBox_err_simpson_f;
	private: System::Windows::Forms::TextBox^ textBox_err_simpson_f_cos10;
	private: System::Windows::Forms::TextBox^ textBox_err_simpson_f_cos100;
	private: System::Windows::Forms::TextBox^ textBox_err_trapezoid_f;




	private: System::Windows::Forms::TextBox^ textBox_err_trapezoid_f_cos10;

	private: System::Windows::Forms::TextBox^ textBox_err_trapezoid_f_cos100;
	private: System::Windows::Forms::TextBox^ textBox_err_rectangle_f;


	private: System::Windows::Forms::TextBox^ textBox_err_rectangle_f_cos10;

	private: System::Windows::Forms::TextBox^ textBox_err_rectangle_f_cos100;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;






















	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Simpson_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Trapezoid_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Rectangle_0 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Trapezoid = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_Simpson_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Trapezoid_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Rectangle_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Simpson_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Trapezoid_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Rectangle_2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_Real_f = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_Real_f_cos10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Real_f_cos100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_simpson_f = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_simpson_f_cos10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_simpson_f_cos100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_trapezoid_f = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_trapezoid_f_cos10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_trapezoid_f_cos100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_rectangle_f = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_rectangle_f_cos10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_err_rectangle_f_cos100 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(37, 30);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(607, 397);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 597);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->n, this->F_1,
					this->F_2, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(650, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(682, 397);
			this->dataGridView1->TabIndex = 2;
			// 
			// n
			// 
			this->n->HeaderText = L"n";
			this->n->Name = L"n";
			this->n->ReadOnly = true;
			this->n->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"|Simpson - Real|";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 150;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"|Trapezoid - Real|";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"|Rectangle - Real|";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 511);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 511);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 513);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 510);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(246, 515);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(265, 511);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"1000";
			// 
			// textBox_Simpson_0
			// 
			this->textBox_Simpson_0->Location = System::Drawing::Point(494, 511);
			this->textBox_Simpson_0->Name = L"textBox_Simpson_0";
			this->textBox_Simpson_0->Size = System::Drawing::Size(100, 20);
			this->textBox_Simpson_0->TabIndex = 9;
			// 
			// textBox_Trapezoid_0
			// 
			this->textBox_Trapezoid_0->Location = System::Drawing::Point(494, 537);
			this->textBox_Trapezoid_0->Name = L"textBox_Trapezoid_0";
			this->textBox_Trapezoid_0->Size = System::Drawing::Size(100, 20);
			this->textBox_Trapezoid_0->TabIndex = 10;
			// 
			// textBox_Rectangle_0
			// 
			this->textBox_Rectangle_0->Location = System::Drawing::Point(494, 563);
			this->textBox_Rectangle_0->Name = L"textBox_Rectangle_0";
			this->textBox_Rectangle_0->Size = System::Drawing::Size(100, 20);
			this->textBox_Rectangle_0->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(441, 514);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Simpson";
			// 
			// Trapezoid
			// 
			this->Trapezoid->AutoSize = true;
			this->Trapezoid->Location = System::Drawing::Point(434, 540);
			this->Trapezoid->Name = L"Trapezoid";
			this->Trapezoid->Size = System::Drawing::Size(54, 13);
			this->Trapezoid->TabIndex = 13;
			this->Trapezoid->Text = L"Trapezoid";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(432, 566);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Rectangle";
			// 
			// textBox_N
			// 
			this->textBox_N->Location = System::Drawing::Point(706, 610);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(100, 20);
			this->textBox_N->TabIndex = 15;
			this->textBox_N->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(685, 613);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"N";
			// 
			// textBox_Simpson_1
			// 
			this->textBox_Simpson_1->Location = System::Drawing::Point(600, 511);
			this->textBox_Simpson_1->Name = L"textBox_Simpson_1";
			this->textBox_Simpson_1->Size = System::Drawing::Size(100, 20);
			this->textBox_Simpson_1->TabIndex = 17;
			// 
			// textBox_Trapezoid_1
			// 
			this->textBox_Trapezoid_1->Location = System::Drawing::Point(600, 537);
			this->textBox_Trapezoid_1->Name = L"textBox_Trapezoid_1";
			this->textBox_Trapezoid_1->Size = System::Drawing::Size(100, 20);
			this->textBox_Trapezoid_1->TabIndex = 18;
			// 
			// textBox_Rectangle_1
			// 
			this->textBox_Rectangle_1->Location = System::Drawing::Point(600, 563);
			this->textBox_Rectangle_1->Name = L"textBox_Rectangle_1";
			this->textBox_Rectangle_1->Size = System::Drawing::Size(100, 20);
			this->textBox_Rectangle_1->TabIndex = 19;
			// 
			// textBox_Simpson_2
			// 
			this->textBox_Simpson_2->Location = System::Drawing::Point(706, 511);
			this->textBox_Simpson_2->Name = L"textBox_Simpson_2";
			this->textBox_Simpson_2->Size = System::Drawing::Size(100, 20);
			this->textBox_Simpson_2->TabIndex = 20;
			// 
			// textBox_Trapezoid_2
			// 
			this->textBox_Trapezoid_2->Location = System::Drawing::Point(706, 537);
			this->textBox_Trapezoid_2->Name = L"textBox_Trapezoid_2";
			this->textBox_Trapezoid_2->Size = System::Drawing::Size(100, 20);
			this->textBox_Trapezoid_2->TabIndex = 21;
			// 
			// textBox_Rectangle_2
			// 
			this->textBox_Rectangle_2->Location = System::Drawing::Point(706, 563);
			this->textBox_Rectangle_2->Name = L"textBox_Rectangle_2";
			this->textBox_Rectangle_2->Size = System::Drawing::Size(100, 20);
			this->textBox_Rectangle_2->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(613, 469);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"f(x) + cos(10x)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(532, 469);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"f(x)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(716, 469);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"f(x) + cos(100x)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(489, 604);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(157, 25);
			this->label10->TabIndex = 26;
			this->label10->Text = L"f(x) = (x + 1) / x";
			// 
			// textBox_Real_f
			// 
			this->textBox_Real_f->Location = System::Drawing::Point(494, 485);
			this->textBox_Real_f->Name = L"textBox_Real_f";
			this->textBox_Real_f->Size = System::Drawing::Size(100, 20);
			this->textBox_Real_f->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(459, 488);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Real";
			// 
			// textBox_Real_f_cos10
			// 
			this->textBox_Real_f_cos10->Location = System::Drawing::Point(600, 485);
			this->textBox_Real_f_cos10->Name = L"textBox_Real_f_cos10";
			this->textBox_Real_f_cos10->Size = System::Drawing::Size(100, 20);
			this->textBox_Real_f_cos10->TabIndex = 29;
			// 
			// textBox_Real_f_cos100
			// 
			this->textBox_Real_f_cos100->Location = System::Drawing::Point(706, 485);
			this->textBox_Real_f_cos100->Name = L"textBox_Real_f_cos100";
			this->textBox_Real_f_cos100->Size = System::Drawing::Size(100, 20);
			this->textBox_Real_f_cos100->TabIndex = 30;
			// 
			// textBox_err_simpson_f
			// 
			this->textBox_err_simpson_f->Location = System::Drawing::Point(930, 511);
			this->textBox_err_simpson_f->Name = L"textBox_err_simpson_f";
			this->textBox_err_simpson_f->Size = System::Drawing::Size(130, 20);
			this->textBox_err_simpson_f->TabIndex = 31;
			// 
			// textBox_err_simpson_f_cos10
			// 
			this->textBox_err_simpson_f_cos10->Location = System::Drawing::Point(1066, 511);
			this->textBox_err_simpson_f_cos10->Name = L"textBox_err_simpson_f_cos10";
			this->textBox_err_simpson_f_cos10->Size = System::Drawing::Size(130, 20);
			this->textBox_err_simpson_f_cos10->TabIndex = 32;
			// 
			// textBox_err_simpson_f_cos100
			// 
			this->textBox_err_simpson_f_cos100->Location = System::Drawing::Point(1202, 511);
			this->textBox_err_simpson_f_cos100->Name = L"textBox_err_simpson_f_cos100";
			this->textBox_err_simpson_f_cos100->Size = System::Drawing::Size(130, 20);
			this->textBox_err_simpson_f_cos100->TabIndex = 33;
			// 
			// textBox_err_trapezoid_f
			// 
			this->textBox_err_trapezoid_f->Location = System::Drawing::Point(930, 537);
			this->textBox_err_trapezoid_f->Name = L"textBox_err_trapezoid_f";
			this->textBox_err_trapezoid_f->Size = System::Drawing::Size(130, 20);
			this->textBox_err_trapezoid_f->TabIndex = 34;
			// 
			// textBox_err_trapezoid_f_cos10
			// 
			this->textBox_err_trapezoid_f_cos10->Location = System::Drawing::Point(1066, 537);
			this->textBox_err_trapezoid_f_cos10->Name = L"textBox_err_trapezoid_f_cos10";
			this->textBox_err_trapezoid_f_cos10->Size = System::Drawing::Size(130, 20);
			this->textBox_err_trapezoid_f_cos10->TabIndex = 35;
			// 
			// textBox_err_trapezoid_f_cos100
			// 
			this->textBox_err_trapezoid_f_cos100->Location = System::Drawing::Point(1202, 537);
			this->textBox_err_trapezoid_f_cos100->Name = L"textBox_err_trapezoid_f_cos100";
			this->textBox_err_trapezoid_f_cos100->Size = System::Drawing::Size(130, 20);
			this->textBox_err_trapezoid_f_cos100->TabIndex = 36;
			// 
			// textBox_err_rectangle_f
			// 
			this->textBox_err_rectangle_f->Location = System::Drawing::Point(930, 563);
			this->textBox_err_rectangle_f->Name = L"textBox_err_rectangle_f";
			this->textBox_err_rectangle_f->Size = System::Drawing::Size(130, 20);
			this->textBox_err_rectangle_f->TabIndex = 37;
			// 
			// textBox_err_rectangle_f_cos10
			// 
			this->textBox_err_rectangle_f_cos10->Location = System::Drawing::Point(1066, 563);
			this->textBox_err_rectangle_f_cos10->Name = L"textBox_err_rectangle_f_cos10";
			this->textBox_err_rectangle_f_cos10->Size = System::Drawing::Size(130, 20);
			this->textBox_err_rectangle_f_cos10->TabIndex = 38;
			// 
			// textBox_err_rectangle_f_cos100
			// 
			this->textBox_err_rectangle_f_cos100->Location = System::Drawing::Point(1202, 563);
			this->textBox_err_rectangle_f_cos100->Name = L"textBox_err_rectangle_f_cos100";
			this->textBox_err_rectangle_f_cos100->Size = System::Drawing::Size(130, 20);
			this->textBox_err_rectangle_f_cos100->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(868, 566);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 42;
			this->label12->Text = L"Rectangle";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(870, 540);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 13);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Trapezoid";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(877, 514);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 13);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Simpson";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1101, 483);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 25);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Error";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1361, 662);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox_err_rectangle_f_cos100);
			this->Controls->Add(this->textBox_err_rectangle_f_cos10);
			this->Controls->Add(this->textBox_err_rectangle_f);
			this->Controls->Add(this->textBox_err_trapezoid_f_cos100);
			this->Controls->Add(this->textBox_err_trapezoid_f_cos10);
			this->Controls->Add(this->textBox_err_trapezoid_f);
			this->Controls->Add(this->textBox_err_simpson_f_cos100);
			this->Controls->Add(this->textBox_err_simpson_f_cos10);
			this->Controls->Add(this->textBox_err_simpson_f);
			this->Controls->Add(this->textBox_Real_f_cos100);
			this->Controls->Add(this->textBox_Real_f_cos10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_Real_f);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_Rectangle_2);
			this->Controls->Add(this->textBox_Trapezoid_2);
			this->Controls->Add(this->textBox_Simpson_2);
			this->Controls->Add(this->textBox_Rectangle_1);
			this->Controls->Add(this->textBox_Trapezoid_1);
			this->Controls->Add(this->textBox_Simpson_1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_N);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Trapezoid);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_Rectangle_0);
			this->Controls->Add(this->textBox_Trapezoid_0);
			this->Controls->Add(this->textBox_Simpson_0);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Lab3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double n = Convert::ToDouble(textBox3->Text);
		double h = (xmax - xmin) / n;

		double N = Convert::ToDouble(textBox_N->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		textBox_Simpson_0->Text = Convert::ToString(n_Simpson(N, xmin, xmax, 0));
		textBox_Simpson_1->Text = Convert::ToString(n_Simpson(N, xmin, xmax, 1));
		textBox_Simpson_2->Text = Convert::ToString(n_Simpson(N, xmin, xmax, 2));
		textBox_Trapezoid_0->Text = Convert::ToString(n_Trapezoid(N, xmin, xmax, 0));
		textBox_Trapezoid_1->Text = Convert::ToString(n_Trapezoid(N, xmin, xmax, 1));
		textBox_Trapezoid_2->Text = Convert::ToString(n_Trapezoid(N, xmin, xmax, 2));
		textBox_Rectangle_0->Text = Convert::ToString(n_Rectangle(N, xmin, xmax, 0));
		textBox_Rectangle_1->Text = Convert::ToString(n_Rectangle(N, xmin, xmax, 1));
		textBox_Rectangle_2->Text = Convert::ToString(n_Rectangle(N, xmin, xmax, 2));

		const double Real_f = 4.38629436111989;
		const double Real_f_cos10 = 4.43320830432185;
		const double Real_f_cos100 = 4.38287415968663;

		textBox_Real_f->Text = Convert::ToString(Real_f);
		textBox_Real_f_cos10->Text = Convert::ToString(Real_f_cos10);
		textBox_Real_f_cos100->Text = Convert::ToString(Real_f_cos100);

		textBox_err_simpson_f->Text = Convert::ToString(fabs(Real_f - n_Simpson(N, xmin, xmax, 0)));
		textBox_err_simpson_f_cos10->Text = Convert::ToString(fabs(Real_f_cos10 - n_Simpson(N, xmin, xmax, 1)));
		textBox_err_simpson_f_cos100->Text = Convert::ToString(fabs(Real_f_cos100 - n_Simpson(N, xmin, xmax, 2)));
		textBox_err_trapezoid_f->Text = Convert::ToString(fabs(Real_f - n_Trapezoid(N, xmin, xmax, 0)));
		textBox_err_trapezoid_f_cos10->Text = Convert::ToString(fabs(Real_f_cos10 - n_Trapezoid(N, xmin, xmax, 1)));
		textBox_err_trapezoid_f_cos100->Text = Convert::ToString(fabs(Real_f_cos100 - n_Trapezoid(N, xmin, xmax, 2)));
		textBox_err_rectangle_f->Text = Convert::ToString(fabs(Real_f - n_Rectangle(N, xmin, xmax, 0)));
		textBox_err_rectangle_f_cos10->Text = Convert::ToString(fabs(Real_f_cos10 - n_Rectangle(N, xmin, xmax, 1)));
		textBox_err_rectangle_f_cos100->Text = Convert::ToString(fabs(Real_f_cos100 - n_Rectangle(N, xmin, xmax, 2)));

/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// Список точек
		int i = 0;
		dataGridView1->Rows->Clear();
		for (double x = xmin; x <= xmax; x += h)
		{
			//Добавление на график
			f1_list->Add(x, function_f_x(x));
			f2_list->Add(x, function_f_plus_cos10x(x));
			f3_list->Add(x, function_f_plus_cos100x(x));
			/*
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x; 			
			dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			*/
			i++;
		}
		i = 0;
		int n_i = 1;
		int h_n_i = 2;
		for (n_i = 1; n_i <= 10000; n_i *= h_n_i)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = n_i;
			dataGridView1->Rows[i]->Cells[1]->Value = fabs(n_Simpson(n_i, xmin, xmax, 0) - Real_f);
			dataGridView1->Rows[i]->Cells[2]->Value = fabs(n_Trapezoid(n_i, xmin, xmax, 0) - Real_f);
			dataGridView1->Rows[i]->Cells[3]->Value = fabs(n_Rectangle(n_i, xmin, xmax, 0) - Real_f);
			i++;
		}
		double Err64, Err128;
		Err64 = Convert::ToDouble(dataGridView1->Rows[6]->Cells[1]->Value);
		Err128 = Convert::ToDouble(dataGridView1->Rows[7]->Cells[1]->Value);
		dataGridView1->Rows[i]->Cells[1]->Value = Err64 / Err128;

		Err64 = Convert::ToDouble(dataGridView1->Rows[6]->Cells[2]->Value);
		Err128 = Convert::ToDouble(dataGridView1->Rows[7]->Cells[2]->Value);
		dataGridView1->Rows[i]->Cells[2]->Value = Err64 / Err128;

		Err64 = Convert::ToDouble(dataGridView1->Rows[6]->Cells[3]->Value);
		Err128 = Convert::ToDouble(dataGridView1->Rows[7]->Cells[3]->Value);
		dataGridView1->Rows[i]->Cells[3]->Value = Err64 / Err128;

		/*
		double Err64 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[6]->Cells[1]->Value));
		double Err128 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[7]->Cells[1]->Value));
		dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToDouble(Err64 / Err128);

		Err64 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[6]->Cells[2]->Value));
		Err128 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[7]->Cells[2]->Value));
		dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToDouble(Err64 / Err128);

		Err64 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[6]->Cells[3]->Value));
		Err128 = fabs(Real_f - Convert::ToDouble(dataGridView1->Rows[7]->Cells[3]->Value));
		dataGridView1->Rows[i]->Cells[3]->Value = Convert::ToDouble(Err64 / Err128);
		*/

		

		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::None);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);
		LineItem Curve3 = panel->AddCurve("F3(x)", f3_list, Color::Green, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
