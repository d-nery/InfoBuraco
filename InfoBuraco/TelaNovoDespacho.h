#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaNovoDespacho : public System::Windows::Forms::Form {
    public:
    public:
        TelaNovoDespacho(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

    protected:
        ~TelaNovoDespacho() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario * usuario_logado;


    private: System::Windows::Forms::TextBox^  custo_tb;
    private: System::Windows::Forms::Label^  patrimonio_lb;
    private: System::Windows::Forms::Label^  custo_lb;
    private: System::Windows::Forms::Label^  title_lb;
    private: System::Windows::Forms::Button^  ok_btn;
    private: System::Windows::Forms::Button^  cancel_btn;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNovoDespacho::typeid));
            this->custo_tb = (gcnew System::Windows::Forms::TextBox());
            this->patrimonio_lb = (gcnew System::Windows::Forms::Label());
            this->custo_lb = (gcnew System::Windows::Forms::Label());
            this->title_lb = (gcnew System::Windows::Forms::Label());
            this->ok_btn = (gcnew System::Windows::Forms::Button());
            this->cancel_btn = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // custo_tb
            // 
            this->custo_tb->Location = System::Drawing::Point(92, 138);
            this->custo_tb->Name = L"custo_tb";
            this->custo_tb->Size = System::Drawing::Size(169, 20);
            this->custo_tb->TabIndex = 1;
            // 
            // patrimonio_lb
            // 
            this->patrimonio_lb->AutoSize = true;
            this->patrimonio_lb->Location = System::Drawing::Point(92, 83);
            this->patrimonio_lb->Name = L"patrimonio_lb";
            this->patrimonio_lb->Size = System::Drawing::Size(71, 13);
            this->patrimonio_lb->TabIndex = 2;
            this->patrimonio_lb->Text = L"Horario Saida";
            // 
            // custo_lb
            // 
            this->custo_lb->AutoSize = true;
            this->custo_lb->Location = System::Drawing::Point(92, 122);
            this->custo_lb->Name = L"custo_lb";
            this->custo_lb->Size = System::Drawing::Size(95, 13);
            this->custo_lb->TabIndex = 3;
            this->custo_lb->Text = L"Ordens de Serviço";
            // 
            // title_lb
            // 
            this->title_lb->AutoSize = true;
            this->title_lb->Font = (gcnew System::Drawing::Font(L"Renner*", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title_lb->ForeColor = System::Drawing::Color::Black;
            this->title_lb->Location = System::Drawing::Point(71, 21);
            this->title_lb->Name = L"title_lb";
            this->title_lb->Size = System::Drawing::Size(212, 32);
            this->title_lb->TabIndex = 9;
            this->title_lb->Text = L"Novo Despacho";
            // 
            // ok_btn
            // 
            this->ok_btn->Location = System::Drawing::Point(95, 391);
            this->ok_btn->Name = L"ok_btn";
            this->ok_btn->Size = System::Drawing::Size(75, 23);
            this->ok_btn->TabIndex = 10;
            this->ok_btn->Text = L"Cadastrar";
            this->ok_btn->UseVisualStyleBackColor = true;
            this->ok_btn->Click += gcnew System::EventHandler(this, &TelaNovoDespacho::okBtn_Click);
            // 
            // cancel_btn
            // 
            this->cancel_btn->Location = System::Drawing::Point(189, 391);
            this->cancel_btn->Name = L"cancel_btn";
            this->cancel_btn->Size = System::Drawing::Size(75, 23);
            this->cancel_btn->TabIndex = 11;
            this->cancel_btn->Text = L"Cancelar";
            this->cancel_btn->UseVisualStyleBackColor = true;
            this->cancel_btn->Click += gcnew System::EventHandler(this, &TelaNovoDespacho::cancelBtn_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(92, 177);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(169, 20);
            this->textBox1->TabIndex = 12;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(92, 218);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(169, 20);
            this->textBox2->TabIndex = 13;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(92, 263);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(169, 20);
            this->textBox3->TabIndex = 14;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy HH:mm";
            this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePicker1->Location = System::Drawing::Point(92, 99);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(169, 20);
            this->dateTimePicker1->TabIndex = 15;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(92, 161);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(49, 13);
            this->label1->TabIndex = 16;
            this->label1->Text = L"Materiais";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(92, 202);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(74, 13);
            this->label2->TabIndex = 17;
            this->label2->Text = L"Equipamentos";
            // 
            // TelaNovoDespacho
            // 
            this->BackColor = System::Drawing::Color::SeaShell;
            this->ClientSize = System::Drawing::Size(354, 460);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dateTimePicker1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->cancel_btn);
            this->Controls->Add(this->ok_btn);
            this->Controls->Add(this->title_lb);
            this->Controls->Add(this->custo_lb);
            this->Controls->Add(this->patrimonio_lb);
            this->Controls->Add(this->custo_tb);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MinimumSize = System::Drawing::Size(370, 0);
            this->Name = L"TelaNovoDespacho";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Novo Despacho";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        private: System::Void okBtn_Click(System::Object^ sender, System::EventArgs^  e);
        private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^  e);
        private: System::Void TelaNovoDespacho_Load(System::Object^  sender, System::EventArgs^  e) {}

    };

}
