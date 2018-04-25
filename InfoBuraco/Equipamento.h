#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Equipamento
	/// </summary>
	public ref class Equipamento : public System::Windows::Forms::Form
	{
	public:
		Equipamento(void)
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
		~Equipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ListView^  listView1;


	private:
	private: System::Windows::Forms::ColumnHeader^  Tipo;
	public:
	private: System::Windows::Forms::ColumnHeader^  Preço;
	private: System::Windows::Forms::ColumnHeader^  Editar;
	private: System::Windows::Forms::ColumnHeader^  Deletar;
	private: System::Windows::Forms::ColumnHeader^  Nome;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nome = (gcnew System::Windows::Forms::ColumnHeader());
			this->Tipo = (gcnew System::Windows::Forms::ColumnHeader());
			this->Preço = (gcnew System::Windows::Forms::ColumnHeader());
			this->Editar = (gcnew System::Windows::Forms::ColumnHeader());
			this->Deletar = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cadastrar ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Equipamento::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Alignment = System::Windows::Forms::ListViewAlignment::Default;
			this->listView1->AllowColumnReorder = true;
			this->listView1->AllowDrop = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Nome, this->Tipo,
					this->Preço, this->Editar, this->Deletar
			});
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(44, 69);
			this->listView1->Name = L"listView1";
			this->listView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listView1->Size = System::Drawing::Size(599, 360);
			this->listView1->TabIndex = 2;
			this->listView1->TileSize = System::Drawing::Size(10, 30);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Equipamento::listView1_SelectedIndexChanged);
			// 
			// Nome
			// 
			this->Nome->Text = L"Nome";
			this->Nome->Width = 267;
			// 
			// Tipo
			// 
			this->Tipo->Text = L"Tipo";
			this->Tipo->Width = 84;
			// 
			// Preço
			// 
			this->Preço->Text = L"Preço";
			this->Preço->Width = 82;
			// 
			// Editar
			// 
			this->Editar->Text = L"Editar";
			this->Editar->Width = 77;
			// 
			// Deletar
			// 
			this->Deletar->Text = L"Deletar";
			this->Deletar->Width = 369;
			// 
			// Equipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 761);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(600, 800);
			this->Name = L"Equipamento";
			this->Text = L"Equipamento";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
