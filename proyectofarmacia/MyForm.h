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
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// AgregarProv
			// 
			this->AgregarProv->BackColor = System::Drawing::Color::DodgerBlue;
			this->AgregarProv->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AgregarProv->Location = System::Drawing::Point(3, 3);
			this->AgregarProv->Name = L"AgregarProv";
			this->AgregarProv->Size = System::Drawing::Size(242, 62);
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
			this->AgregarInv->Location = System::Drawing::Point(3, 3);
			this->AgregarInv->Name = L"AgregarInv";
			this->AgregarInv->Size = System::Drawing::Size(242, 62);
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
			this->button4->Location = System::Drawing::Point(3, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(242, 63);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Imprimir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->AgregarProv);
			this->panel1->Location = System::Drawing::Point(218, 158);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(248, 68);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->AgregarInv);
			this->panel2->Location = System::Drawing::Point(218, 232);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(248, 68);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(218, 306);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(248, 68);
			this->panel3->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(685, 387);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void AgregarProv_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FormProveedor^ fomr_proveedor = gcnew FormProveedor();
		fomr_proveedor->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FormProveedor^ formproveedor = gcnew FormProveedor();
		std::list<std::string> NombreProve = formproveedor->NombrE();
	}
	private: System::Void AgregarInv_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FormInventario^ form_inventario = gcnew FormInventario();
		form_inventario->Show();
	}

};
}
