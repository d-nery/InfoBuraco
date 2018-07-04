#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaNovoFuncionario : public System::Windows::Forms::Form {
    public:
    public:
        TelaNovoFuncionario(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

    protected:
        ~TelaNovoFuncionario() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario * usuario_logado;

    private: System::Windows::Forms::TextBox^  patrimonio_tb;
    private: System::Windows::Forms::TextBox^  custo_tb;
    private: System::Windows::Forms::Label^  patrimonio_lb;
    private: System::Windows::Forms::Label^  custo_lb;
    private: System::Windows::Forms::Label^  title_lb;
    private: System::Windows::Forms::Button^  ok_btn;
    private: System::Windows::Forms::Button^  cancel_btn;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNovoFuncionario::typeid));
            this->patrimonio_tb = (gcnew System::Windows::Forms::TextBox());
            this->custo_tb = (gcnew System::Windows::Forms::TextBox());
            this->patrimonio_lb = (gcnew System::Windows::Forms::Label());
            this->custo_lb = (gcnew System::Windows::Forms::Label());
            this->title_lb = (gcnew System::Windows::Forms::Label());
            this->ok_btn = (gcnew System::Windows::Forms::Button());
            this->cancel_btn = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // patrimonio_tb
            // 
            this->patrimonio_tb->Location = System::Drawing::Point(92, 99);
            this->patrimonio_tb->Name = L"patrimonio_tb";
            this->patrimonio_tb->Size = System::Drawing::Size(169, 20);
            this->patrimonio_tb->TabIndex = 0;
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
            this->patrimonio_lb->Location = System::Drawing::Point(92, 80);
            this->patrimonio_lb->Name = L"patrimonio_lb";
            this->patrimonio_lb->Size = System::Drawing::Size(57, 13);
            this->patrimonio_lb->TabIndex = 2;
            this->patrimonio_lb->Text = L"Patrim�nio";
            // 
            // custo_lb
            // 
            this->custo_lb->AutoSize = true;
            this->custo_lb->Location = System::Drawing::Point(92, 122);
            this->custo_lb->Name = L"custo_lb";
            this->custo_lb->Size = System::Drawing::Size(83, 13);
            this->custo_lb->TabIndex = 3;
            this->custo_lb->Text = L"Custo (R$/hora)";
            // 
            // title_lb
            // 
            this->title_lb->AutoSize = true;
            this->title_lb->Font = (gcnew System::Drawing::Font(L"Renner*", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title_lb->ForeColor = System::Drawing::Color::Black;
            this->title_lb->Location = System::Drawing::Point(64, 22);
            this->title_lb->Name = L"title_lb";
            this->title_lb->Size = System::Drawing::Size(236, 32);
            this->title_lb->TabIndex = 9;
            this->title_lb->Text = L"Novo Funcionario";
            // 
            // ok_btn
            // 
            this->ok_btn->Location = System::Drawing::Point(92, 171);
            this->ok_btn->Name = L"ok_btn";
            this->ok_btn->Size = System::Drawing::Size(75, 23);
            this->ok_btn->TabIndex = 10;
            this->ok_btn->Text = L"Cadastrar";
            this->ok_btn->UseVisualStyleBackColor = true;
            // 
            // cancel_btn
            // 
            this->cancel_btn->Location = System::Drawing::Point(186, 171);
            this->cancel_btn->Name = L"cancel_btn";
            this->cancel_btn->Size = System::Drawing::Size(75, 23);
            this->cancel_btn->TabIndex = 11;
            this->cancel_btn->Text = L"Cancelar";
            this->cancel_btn->UseVisualStyleBackColor = true;
            // 
            // TelaNovoFuncionario
            // 
            this->BackColor = System::Drawing::Color::SeaShell;
            this->ClientSize = System::Drawing::Size(354, 241);
            this->Controls->Add(this->cancel_btn);
            this->Controls->Add(this->ok_btn);
            this->Controls->Add(this->title_lb);
            this->Controls->Add(this->custo_lb);
            this->Controls->Add(this->patrimonio_lb);
            this->Controls->Add(this->custo_tb);
            this->Controls->Add(this->patrimonio_tb);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximumSize = System::Drawing::Size(370, 280);
            this->MinimumSize = System::Drawing::Size(370, 280);
            this->Name = L"TelaNovoFuncionario";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Cadastrar Funcionario";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    };

}
