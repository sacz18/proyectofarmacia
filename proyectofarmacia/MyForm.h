#pragma once
#include "FormInventario.h"
#include "Inventario.h"
#include "Medicamento.h"
#include "Proovedor.h"
#include "FormProveedor.h"
#include <list>


namespace proyectofarmacia 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:


		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ AgregarProv;
	private: System::Windows::Forms::Button^ AgregarInv;
	protected:



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->AgregarProv = (gcnew System::Windows::Forms::Button());
			this->AgregarInv = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// AgregarProv
			// 
			this->AgregarProv->BackColor = System::Drawing::Color::DodgerBlue;
			this->AgregarProv->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AgregarProv->Location = System::Drawing::Point(4, 4);
			this->AgregarProv->Margin = System::Windows::Forms::Padding(4);
			this->AgregarProv->Name = L"AgregarProv";
			this->AgregarProv->Size = System::Drawing::Size(323, 76);
			this->AgregarProv->TabIndex = 1;
			this->AgregarProv->Text = L"Agregar proveedor";
			this->AgregarProv->UseVisualStyleBackColor = false;
			this->AgregarProv->Click += gcnew System::EventHandler(this, &MyForm::AgregarProv_Click);
			// 
			// AgregarInv
			// 
			this->AgregarInv->BackColor = System::Drawing::Color::DodgerBlue;
			this->AgregarInv->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AgregarInv->Location = System::Drawing::Point(4, 4);
			this->AgregarInv->Margin = System::Windows::Forms::Padding(4);
			this->AgregarInv->Name = L"AgregarInv";
			this->AgregarInv->Size = System::Drawing::Size(323, 76);
			this->AgregarInv->TabIndex = 2;
			this->AgregarInv->Text = L"Administrar Inventario";
			this->AgregarInv->UseVisualStyleBackColor = false;
			this->AgregarInv->Click += gcnew System::EventHandler(this, &MyForm::AgregarInv_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DodgerBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(4, 4);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(323, 78);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Imprimir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->AgregarProv);
			this->panel1->Location = System::Drawing::Point(291, 194);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(331, 84);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->AgregarInv);
			this->panel2->Location = System::Drawing::Point(291, 286);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(331, 84);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(291, 377);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(331, 84);
			this->panel3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(738, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(181, 468);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(567, 108);
			this->panel4->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(915, 675);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void AgregarProv_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FormProveedor^ fomr_proveedor = gcnew FormProveedor();
		fomr_proveedor->ShowDialog();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		


	}
	private: System::Void AgregarInv_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FormInventario^ form_inventario = gcnew FormInventario();
		form_inventario->ShowDialog();

	}

};
}
