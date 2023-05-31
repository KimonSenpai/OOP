#pragma once
#include "pch.h"

namespace CppCLRWinFormsProject {

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
			initMatrix = false;
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

	private: ModifiedMatrix^ matrix;
	private: int m, n;
	private: bool initMatrix;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ SetSize;
	private: System::Windows::Forms::TextBox^ SizeN;


	private: System::Windows::Forms::TextBox^ SizeM;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ ByRow;
	private: System::Windows::Forms::Button^ ByRowReq;


	private: System::Windows::Forms::TextBox^ ByRowQ;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ InMatrix;
	private: System::Windows::Forms::Button^ InMatrixReq;



	private: System::Windows::Forms::TextBox^ InMatrixQ;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ Matrix;
	private: System::Windows::Forms::DataGridView^ Resoult;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SetSize = (gcnew System::Windows::Forms::Button());
			this->SizeN = (gcnew System::Windows::Forms::TextBox());
			this->SizeM = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ByRow = (gcnew System::Windows::Forms::GroupBox());
			this->ByRowReq = (gcnew System::Windows::Forms::Button());
			this->ByRowQ = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->InMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->InMatrixReq = (gcnew System::Windows::Forms::Button());
			this->InMatrixQ = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Matrix = (gcnew System::Windows::Forms::DataGridView());
			this->Resoult = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->ByRow->SuspendLayout();
			this->InMatrix->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Resoult))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"M";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->SetSize);
			this->groupBox1->Controls->Add(this->SizeN);
			this->groupBox1->Controls->Add(this->SizeM);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(268, 85);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задание размеров матрицы";
			// 
			// SetSize
			// 
			this->SetSize->Location = System::Drawing::Point(162, 19);
			this->SetSize->Name = L"SetSize";
			this->SetSize->Size = System::Drawing::Size(93, 51);
			this->SetSize->TabIndex = 4;
			this->SetSize->Text = L"OK";
			this->SetSize->UseVisualStyleBackColor = true;
			this->SetSize->Click += gcnew System::EventHandler(this, &Form1::SetSize_Click);
			// 
			// SizeN
			// 
			this->SizeN->Location = System::Drawing::Point(41, 50);
			this->SizeN->Name = L"SizeN";
			this->SizeN->Size = System::Drawing::Size(100, 20);
			this->SizeN->TabIndex = 3;
			// 
			// SizeM
			// 
			this->SizeM->Location = System::Drawing::Point(41, 19);
			this->SizeM->Name = L"SizeM";
			this->SizeM->Size = System::Drawing::Size(100, 20);
			this->SizeM->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N";
			// 
			// ByRow
			// 
			this->ByRow->Controls->Add(this->ByRowReq);
			this->ByRow->Controls->Add(this->ByRowQ);
			this->ByRow->Controls->Add(this->label4);
			this->ByRow->Enabled = false;
			this->ByRow->Location = System::Drawing::Point(302, 12);
			this->ByRow->Name = L"ByRow";
			this->ByRow->Size = System::Drawing::Size(268, 85);
			this->ByRow->TabIndex = 2;
			this->ByRow->TabStop = false;
			this->ByRow->Text = L"Кол-во и сумма построчно";
			// 
			// ByRowReq
			// 
			this->ByRowReq->Location = System::Drawing::Point(162, 19);
			this->ByRowReq->Name = L"ByRowReq";
			this->ByRowReq->Size = System::Drawing::Size(93, 51);
			this->ByRowReq->TabIndex = 4;
			this->ByRowReq->Text = L"OK";
			this->ByRowReq->UseVisualStyleBackColor = true;
			this->ByRowReq->Click += gcnew System::EventHandler(this, &Form1::ByRowReq_Click);
			// 
			// ByRowQ
			// 
			this->ByRowQ->Location = System::Drawing::Point(9, 50);
			this->ByRowQ->Name = L"ByRowQ";
			this->ByRowQ->Size = System::Drawing::Size(132, 20);
			this->ByRowQ->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Искать элементы меньше:";
			// 
			// InMatrix
			// 
			this->InMatrix->Controls->Add(this->InMatrixReq);
			this->InMatrix->Controls->Add(this->InMatrixQ);
			this->InMatrix->Controls->Add(this->label6);
			this->InMatrix->Enabled = false;
			this->InMatrix->Location = System::Drawing::Point(596, 12);
			this->InMatrix->Name = L"InMatrix";
			this->InMatrix->Size = System::Drawing::Size(268, 85);
			this->InMatrix->TabIndex = 5;
			this->InMatrix->TabStop = false;
			this->InMatrix->Text = L"Кол-во и сумма для матрицы";
			// 
			// InMatrixReq
			// 
			this->InMatrixReq->Location = System::Drawing::Point(162, 19);
			this->InMatrixReq->Name = L"InMatrixReq";
			this->InMatrixReq->Size = System::Drawing::Size(93, 51);
			this->InMatrixReq->TabIndex = 4;
			this->InMatrixReq->Text = L"OK";
			this->InMatrixReq->UseVisualStyleBackColor = true;
			this->InMatrixReq->Click += gcnew System::EventHandler(this, &Form1::InMatrixReq_Click);
			// 
			// InMatrixQ
			// 
			this->InMatrixQ->Location = System::Drawing::Point(9, 50);
			this->InMatrixQ->Name = L"InMatrixQ";
			this->InMatrixQ->Size = System::Drawing::Size(132, 20);
			this->InMatrixQ->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Искать элементы меньше:";
			// 
			// Matrix
			// 
			this->Matrix->AllowUserToAddRows = false;
			this->Matrix->AllowUserToDeleteRows = false;
			this->Matrix->AllowUserToResizeColumns = false;
			this->Matrix->AllowUserToResizeRows = false;
			this->Matrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix->Location = System::Drawing::Point(12, 181);
			this->Matrix->Name = L"Matrix";
			this->Matrix->RowHeadersWidth = 50;
			this->Matrix->Size = System::Drawing::Size(600, 600);
			this->Matrix->TabIndex = 6;
			this->Matrix->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::Matrix_CellValueChanged);
			// 
			// Resoult
			// 
			this->Resoult->AllowUserToAddRows = false;
			this->Resoult->AllowUserToDeleteRows = false;
			this->Resoult->AllowUserToResizeColumns = false;
			this->Resoult->AllowUserToResizeRows = false;
			this->Resoult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Resoult->Location = System::Drawing::Point(687, 181);
			this->Resoult->Name = L"Resoult";
			this->Resoult->ReadOnly = true;
			this->Resoult->RowHeadersVisible = false;
			this->Resoult->Size = System::Drawing::Size(177, 600);
			this->Resoult->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(262, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Матрица";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(718, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Результат";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 792);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Resoult);
			this->Controls->Add(this->Matrix);
			this->Controls->Add(this->InMatrix);
			this->Controls->Add(this->ByRow);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Работа с матрицами";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ByRow->ResumeLayout(false);
			this->ByRow->PerformLayout();
			this->InMatrix->ResumeLayout(false);
			this->InMatrix->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Resoult))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void SetSize_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверка правильности ввода данных
		try {
			m = Convert::ToInt32(SizeM->Text);
			n = Convert::ToInt32(SizeN->Text);
		}
		catch (...) {
			MessageBox::Show(L"Неправильные размеры!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

			return;
		}

		if (m <= 0 || n <= 0) {
			MessageBox::Show(L"Неправильные размеры!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		initMatrix = true;// Отключение события ValueChange у матрицы.
		Matrix->Rows->Clear();
		Matrix->Columns->Clear();

		Resoult->Rows->Clear();
		Resoult->Columns->Clear();

		

		matrix = gcnew ModifiedMatrix(m, n);

		Matrix->ColumnCount = n;
		
		for (int j = 0; j < n; ++j) {
			Matrix->Columns[j]->HeaderText = j.ToString();
			Matrix->Columns[j]->Width = 50;
		}

		Resoult->ColumnCount = 2;

		Resoult->Columns[0]->HeaderText = L"Сумма";
		Resoult->Columns[1]->HeaderText = L"Количество";

		Resoult->Columns[0]->Width = 87;
		Resoult->Columns[1]->Width = 87;

		for (int i = 0; i < m; ++i) {
			array<String^>^ row = gcnew array<String^>(n);
			for (int j = 0; j < n; ++j) {
				row[j] = "0";
			}
			Matrix->Rows->Add(row);
			Matrix->Rows[i]->HeaderCell->Value = i.ToString();
		}

		ByRow->Enabled = true;
		InMatrix->Enabled = true;
		initMatrix = false;// Включение события ValueChange у матрицы.
	}
	private: System::Void Matrix_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (initMatrix) return;
		
		int i = e->RowIndex,
			j = e->ColumnIndex;

		// Проверка правильности ввода данных
		try {
			matrix->SetVal(i, j, Convert::ToInt32(Matrix->Rows[i]->Cells[j]->Value));
		}
		catch (...) {
			MessageBox::Show(L"Неправильное значение элемента матрицы!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Matrix->Rows[i]->Cells[j]->Value = matrix->GetVal(i, j).ToString();
		}
	}
	private: System::Void ByRowReq_Click(System::Object^ sender, System::EventArgs^ e) {
		int q;
		Resoult->Rows->Clear();

		// Проверка правильности ввода данных
		try {
			q = Convert::ToInt32(ByRowQ->Text);
		}
		catch (...) {
			MessageBox::Show(L"Неправильное значение q!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		auto res = matrix->CalculateByRows(q);

		for (int i = 0; i < res->Count; ++i) {
			array<String^>^ row = gcnew array<String^>(2);
			row[0] = res[i]->Item1.ToString();
			row[1] = res[i]->Item2.ToString();
			Resoult->Rows->Add(row);
		}
	}
	private: System::Void InMatrixReq_Click(System::Object^ sender, System::EventArgs^ e) {
		int q;
		Resoult->Rows->Clear();

		// Проверка правильности ввода данных
		try {
			q = Convert::ToInt32(InMatrixQ->Text);
		}
		catch (...) {
			MessageBox::Show(L"Неправильное значение q!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		auto res = matrix->CalculateInMatrix(q);

		array<String^>^ row = gcnew array<String^>(2);
		row[0] = res->Item1.ToString();
		row[1] = res->Item2.ToString();

		Resoult->Rows->Add(row);
	}
	};
}
