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
	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->AgregarMed = (gcnew System::Windows::Forms::Button());
			this->AgregarProv = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AgregarMed
			// 
			this->AgregarMed->Location = System::Drawing::Point(245, 273);
			this->AgregarMed->Name = L"AgregarMed";
			this->AgregarMed->Size = System::Drawing::Size(118, 23);
			this->AgregarMed->TabIndex = 0;
			this->AgregarMed->Text = L"Agregar medicina";
			this->AgregarMed->UseVisualStyleBackColor = true;
			this->AgregarMed->Click += gcnew System::EventHandler(this, &MyForm::AgregarMed_Click);
			// 
			// AgregarProv
			// 
			this->AgregarProv->Location = System::Drawing::Point(119, 231);
			this->AgregarProv->Name = L"AgregarProv";
			this->AgregarProv->Size = System::Drawing::Size(75, 42);
			this->AgregarProv->TabIndex = 1;
			this->AgregarProv->Text = L"Agregar proveedor";
			this->AgregarProv->UseVisualStyleBackColor = true;
			this->AgregarProv->Click += gcnew System::EventHandler(this, &MyForm::AgregarProv_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Administrar Inventario";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(427, 272);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Imprimir";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 374);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->AgregarProv);
			this->Controls->Add(this->AgregarMed);
			this->Margin = System::Windows::Forms::Padding(2);
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
		
	}
};
}
