#pragma once
#include "iostream"
#include "string"
#include "Matriz.h"
using namespace std;
namespace matrizvisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	Matriz a,b,c;
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
	private: System::Windows::Forms::DataGridView^  grilla_x;
	protected: 
	private: System::Windows::Forms::DataGridView^  grilla_y;
	private: System::Windows::Forms::DataGridView^  grilla_z;

	private: System::Windows::Forms::TextBox^  ttamano_fila_a;

	private: System::Windows::Forms::TextBox^  ttamano_columna_a;
	private: System::Windows::Forms::Button^  b_tamano_A;
	private: System::Windows::Forms::Button^  btamano_b;
	private: System::Windows::Forms::TextBox^  ttamano_columna_b;
	private: System::Windows::Forms::TextBox^  ttamano_fila_b;
	private: System::Windows::Forms::Button^  binsertar_a;
	private: System::Windows::Forms::Button^  binsertar_b;
	private: System::Windows::Forms::Button^  bSumar;
	private: System::Windows::Forms::Button^  bMostrar;

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
			this->grilla_x = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_y = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_z = (gcnew System::Windows::Forms::DataGridView());
			this->ttamano_fila_a = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_columna_a = (gcnew System::Windows::Forms::TextBox());
			this->b_tamano_A = (gcnew System::Windows::Forms::Button());
			this->btamano_b = (gcnew System::Windows::Forms::Button());
			this->ttamano_columna_b = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_fila_b = (gcnew System::Windows::Forms::TextBox());
			this->binsertar_a = (gcnew System::Windows::Forms::Button());
			this->binsertar_b = (gcnew System::Windows::Forms::Button());
			this->bSumar = (gcnew System::Windows::Forms::Button());
			this->bMostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_x
			// 
			this->grilla_x->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_x->Location = System::Drawing::Point(340, 43);
			this->grilla_x->Name = L"grilla_x";
			this->grilla_x->Size = System::Drawing::Size(570, 146);
			this->grilla_x->TabIndex = 0;
			this->grilla_x->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::grilla_x_CellContentClick);
			// 
			// grilla_y
			// 
			this->grilla_y->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_y->Location = System::Drawing::Point(340, 238);
			this->grilla_y->Name = L"grilla_y";
			this->grilla_y->Size = System::Drawing::Size(570, 150);
			this->grilla_y->TabIndex = 1;
			// 
			// grilla_z
			// 
			this->grilla_z->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_z->Location = System::Drawing::Point(340, 437);
			this->grilla_z->Name = L"grilla_z";
			this->grilla_z->Size = System::Drawing::Size(570, 150);
			this->grilla_z->TabIndex = 2;
			// 
			// ttamano_fila_a
			// 
			this->ttamano_fila_a->Location = System::Drawing::Point(1054, 43);
			this->ttamano_fila_a->Name = L"ttamano_fila_a";
			this->ttamano_fila_a->Size = System::Drawing::Size(100, 20);
			this->ttamano_fila_a->TabIndex = 3;
			this->ttamano_fila_a->TextChanged += gcnew System::EventHandler(this, &Form1::ttamano_fila_x_TextChanged);
			// 
			// ttamano_columna_a
			// 
			this->ttamano_columna_a->Location = System::Drawing::Point(1054, 81);
			this->ttamano_columna_a->Name = L"ttamano_columna_a";
			this->ttamano_columna_a->Size = System::Drawing::Size(100, 20);
			this->ttamano_columna_a->TabIndex = 4;
			// 
			// b_tamano_A
			// 
			this->b_tamano_A->Location = System::Drawing::Point(1069, 107);
			this->b_tamano_A->Name = L"b_tamano_A";
			this->b_tamano_A->Size = System::Drawing::Size(75, 23);
			this->b_tamano_A->TabIndex = 5;
			this->b_tamano_A->Text = L"A tamano";
			this->b_tamano_A->UseVisualStyleBackColor = true;
			this->b_tamano_A->Click += gcnew System::EventHandler(this, &Form1::b_tamano_A_Click);
			// 
			// btamano_b
			// 
			this->btamano_b->Location = System::Drawing::Point(1069, 303);
			this->btamano_b->Name = L"btamano_b";
			this->btamano_b->Size = System::Drawing::Size(75, 23);
			this->btamano_b->TabIndex = 8;
			this->btamano_b->Text = L"B tamano";
			this->btamano_b->UseVisualStyleBackColor = true;
			this->btamano_b->Click += gcnew System::EventHandler(this, &Form1::btamano_b_Click);
			// 
			// ttamano_columna_b
			// 
			this->ttamano_columna_b->Location = System::Drawing::Point(1054, 277);
			this->ttamano_columna_b->Name = L"ttamano_columna_b";
			this->ttamano_columna_b->Size = System::Drawing::Size(100, 20);
			this->ttamano_columna_b->TabIndex = 7;
			// 
			// ttamano_fila_b
			// 
			this->ttamano_fila_b->Location = System::Drawing::Point(1054, 238);
			this->ttamano_fila_b->Name = L"ttamano_fila_b";
			this->ttamano_fila_b->Size = System::Drawing::Size(100, 20);
			this->ttamano_fila_b->TabIndex = 6;
			// 
			// binsertar_a
			// 
			this->binsertar_a->Location = System::Drawing::Point(1069, 136);
			this->binsertar_a->Name = L"binsertar_a";
			this->binsertar_a->Size = System::Drawing::Size(75, 23);
			this->binsertar_a->TabIndex = 9;
			this->binsertar_a->Text = L"A Insertar";
			this->binsertar_a->UseVisualStyleBackColor = true;
			this->binsertar_a->Click += gcnew System::EventHandler(this, &Form1::binsertar_a_Click);
			// 
			// binsertar_b
			// 
			this->binsertar_b->Location = System::Drawing::Point(1069, 338);
			this->binsertar_b->Name = L"binsertar_b";
			this->binsertar_b->Size = System::Drawing::Size(75, 23);
			this->binsertar_b->TabIndex = 10;
			this->binsertar_b->Text = L"B Insertar";
			this->binsertar_b->UseVisualStyleBackColor = true;
			this->binsertar_b->Click += gcnew System::EventHandler(this, &Form1::binsertar_b_Click);
			// 
			// bSumar
			// 
			this->bSumar->Location = System::Drawing::Point(1069, 515);
			this->bSumar->Name = L"bSumar";
			this->bSumar->Size = System::Drawing::Size(75, 40);
			this->bSumar->TabIndex = 12;
			this->bSumar->Text = L"Sumar";
			this->bSumar->UseVisualStyleBackColor = true;
			this->bSumar->Click += gcnew System::EventHandler(this, &Form1::bSumar_Click);
			// 
			// bMostrar
			// 
			this->bMostrar->Location = System::Drawing::Point(1069, 450);
			this->bMostrar->Name = L"bMostrar";
			this->bMostrar->Size = System::Drawing::Size(75, 46);
			this->bMostrar->TabIndex = 11;
			this->bMostrar->Text = L"Mostrar";
			this->bMostrar->UseVisualStyleBackColor = true;
			this->bMostrar->Click += gcnew System::EventHandler(this, &Form1::bMostrar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 687);
			this->Controls->Add(this->bSumar);
			this->Controls->Add(this->bMostrar);
			this->Controls->Add(this->binsertar_b);
			this->Controls->Add(this->binsertar_a);
			this->Controls->Add(this->btamano_b);
			this->Controls->Add(this->ttamano_columna_b);
			this->Controls->Add(this->ttamano_fila_b);
			this->Controls->Add(this->b_tamano_A);
			this->Controls->Add(this->ttamano_columna_a);
			this->Controls->Add(this->ttamano_fila_a);
			this->Controls->Add(this->grilla_z);
			this->Controls->Add(this->grilla_y);
			this->Controls->Add(this->grilla_x);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btamano_b_Click(System::Object^  sender, System::EventArgs^  e) {
				grilla_y->ColumnCount=System::Convert::ToInt32(ttamano_columna_b->Text);
				grilla_y->RowCount=System::Convert::ToInt32(ttamano_fila_b->Text);
			 }
private: System::Void b_tamano_A_Click(System::Object^  sender, System::EventArgs^  e) {
				grilla_x->ColumnCount=System::Convert::ToInt32(ttamano_columna_a->Text);
				grilla_x->RowCount=System::Convert::ToInt32(ttamano_fila_a->Text);
		 }
private: System::Void grilla_x_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void ttamano_fila_x_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void binsertar_a_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.leer(grilla_x,ttamano_fila_a,ttamano_columna_a);
		 }
private: System::Void binsertar_b_Click(System::Object^  sender, System::EventArgs^  e) {
			  b.leer(grilla_y,ttamano_fila_b,ttamano_columna_b);
		 }
private: System::Void bMostrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.mostrar(grilla_x);
			 b.mostrar(grilla_y);
			 c.mostrar(grilla_z);
		 }
private: System::Void bSumar_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(a.Verificar(b)==true){
				c=a.Sumar(b);
			 } 
		 }
};
}