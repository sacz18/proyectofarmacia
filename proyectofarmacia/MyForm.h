#pragma once
#include "FormInventario.h"
#include "FormMedicina.h"
#include "Inventario.h"
#include "Medicamento.h"
#include "Proovedor.h"
#include "FormProveedor.h"


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
	private: System::Windows::Forms::Button^ AgregarMed;
	private: System::Windows::Forms::Button^ AgregarProv;
	private: System::Windows::Forms::Button^ AgregarInv;
	protected:



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
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
			this->AgregarMed = (gcnew System::Windows::Forms::Button());
			this->AgregarProv = (gcnew System::Windows::Forms::Button());
			this->AgregarInv = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AgregarMed
			// 
			this->AgregarMed->BackColor = System::Drawing::Color::DodgerBlue;
			this->AgregarMed->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AgregarMed->Location = System::Drawing::Point(218, 193);
			this->AgregarMed->Name = L"AgregarMed";
			this->AgregarMed->Size = System::Drawing::Size(100, 28);
			this->AgregarMed->TabIndex = 0;
			this->AgregarMed->Text = L"Agregar medicina";
			this->AgregarMed->UseVisualStyleBackColor = false;
			this->AgregarMed->Click += gcnew System::EventHandler(this, &MyForm::AgregarMed_Click);
			// 
			// AgregarProv
			// 
			this->AgregarProv->BackColor = System::Drawing::Color::DodgerBlue;
			this->AgregarProv->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AgregarProv->Location = System::Drawing::Point(71, 178);
			this->AgregarProv->Name = L"AgregarProv";
			this->AgregarProv->Size = System::Drawing::Size(108, 60);
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
			this->AgregarInv->Location = System::Drawing::Point(372, 178);
			this->AgregarInv->Name = L"AgregarInv";
			this->AgregarInv->Size = System::Drawing::Size(124, 58);
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
			this->button4->Location = System::Drawing::Point(562, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 28);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Imprimir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 116);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(6, 6);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(702, 407);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->AgregarInv);
			this->Controls->Add(this->AgregarProv);
			this->Controls->Add(this->AgregarMed);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AgregarMed_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FormMedicina^ form_medicina = gcnew FormMedicina();
		form_medicina->Show();
	}
	private: System::Void AgregarProv_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FormProveedor^ fomr_proveedor = gcnew FormProveedor();
		fomr_proveedor->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AgregarInv_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FormInventario^ form_inventario = gcnew FormInventario();
		form_inventario->Show();
	}

};
}
