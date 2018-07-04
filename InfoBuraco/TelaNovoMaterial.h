#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaNovoMaterial : public System::Windows::Forms::Form {
    public:
    public:
        TelaNovoMaterial(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

		property String^ patrimonio_txt {
			String^ get() {
				return patrimonio_tb->Text;
			}
			void set(String^ txt) {
				patrimonio_tb->Text = txt;
			}
		}

		property String^ unidade_txt {
			String^ get() {
				return unidade_tb->Text;
			}
			void set(String^ txt) {
				unidade_tb->Text = txt;
			}
		}

		property String^ custo_txt {
			String^ get() {
				return custo_tb->Text;
			}
			void set(String^ txt) {
				custo_tb->Text = txt;
			}
		}

		property String^ quantidade_txt {
			String^ get() {
				return quantidade_tb->Text;
			}
			void set(String^ txt) {
				quantidade_tb->Text = txt;
			}
		}

    protected:
        ~TelaNovoMaterial() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario * usuario_logado;

    private: System::Windows::Forms::TextBox^  patrimonio_tb;
	private: System::Windows::Forms::TextBox^  unidade_tb;
    private: System::Windows::Forms::TextBox^  custo_tb;
	private: System::Windows::Forms::TextBox^  quantidade_tb;
    private: System::Windows::Forms::Label^  patrimonio_lb;
	private: System::Windows::Forms::Label^  unidade_lb;
    private: System::Windows::Forms::Label^  custo_lb;
	private: System::Windows::Forms::Label^  quantidade_lb;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNovoMaterial::typeid));
			this->patrimonio_tb = (gcnew System::Windows::Forms::TextBox());
			this->unidade_tb = (gcnew System::Windows::Forms::TextBox());
			this->custo_tb = (gcnew System::Windows::Forms::TextBox());
			this->quantidade_tb = (gcnew System::Windows::Forms::TextBox());
			this->patrimonio_lb = (gcnew System::Windows::Forms::Label());
			this->unidade_lb = (gcnew System::Windows::Forms::Label());
			this->custo_lb = (gcnew System::Windows::Forms::Label());
			this->quantidade_lb = (gcnew System::Windows::Forms::Label());
			this->title_lb = (gcnew System::Windows::Forms::Label());
			this->ok_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// patrimonio_tb
			// 
			this->patrimonio_tb->Location = System::Drawing::Point(92, 96);
			this->patrimonio_tb->Name = L"patrimonio_tb";
			this->patrimonio_tb->Size = System::Drawing::Size(169, 22);
			this->patrimonio_tb->TabIndex = 0;
			// 
			// unidade_tb
			// 
			this->unidade_tb->Location = System::Drawing::Point(92, 143);
			this->unidade_tb->Name = L"unidade_tb";
			this->unidade_tb->Size = System::Drawing::Size(169, 22);
			this->unidade_tb->TabIndex = 1;
			// 
			// custo_tb
			// 
			this->custo_tb->Location = System::Drawing::Point(92, 188);
			this->custo_tb->Name = L"custo_tb";
			this->custo_tb->Size = System::Drawing::Size(169, 22);
			this->custo_tb->TabIndex = 2;
			// 
			// quantidade_tb
			// 
			this->quantidade_tb->Location = System::Drawing::Point(92, 232);
			this->quantidade_tb->Name = L"quantidade_tb";
			this->quantidade_tb->Size = System::Drawing::Size(169, 22);
			this->quantidade_tb->TabIndex = 3;
			// 
			// patrimonio_lb
			// 
			this->patrimonio_lb->AutoSize = true;
			this->patrimonio_lb->Location = System::Drawing::Point(92, 76);
			this->patrimonio_lb->Name = L"patrimonio_lb";
			this->patrimonio_lb->Size = System::Drawing::Size(76, 17);
			this->patrimonio_lb->TabIndex = 4;
			this->patrimonio_lb->Text = L"Patrim�nio";
			// 
			// unidade_lb
			// 
			this->unidade_lb->AutoSize = true;
			this->unidade_lb->Location = System::Drawing::Point(92, 123);
			this->unidade_lb->Name = L"unidade_lb";
			this->unidade_lb->Size = System::Drawing::Size(61, 17);
			this->unidade_lb->TabIndex = 5;
			this->unidade_lb->Text = L"Unidade";
			// 
			// custo_lb
			// 
			this->custo_lb->AutoSize = true;
			this->custo_lb->Location = System::Drawing::Point(92, 168);
			this->custo_lb->Name = L"custo_lb";
			this->custo_lb->Size = System::Drawing::Size(109, 17);
			this->custo_lb->TabIndex = 6;
			this->custo_lb->Text = L"Custo (R$/hora)";
			// 
			// quantidade_lb
			// 
			this->quantidade_lb->AutoSize = true;
			this->quantidade_lb->Location = System::Drawing::Point(90, 212);
			this->quantidade_lb->Name = L"quantidade_lb";
			this->quantidade_lb->Size = System::Drawing::Size(123, 17);
			this->quantidade_lb->TabIndex = 7;
			this->quantidade_lb->Text = L"Quantidade (unid)";
			// 
			// title_lb
			// 
			this->title_lb->AutoSize = true;
			this->title_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_lb->ForeColor = System::Drawing::Color::Black;
			this->title_lb->Location = System::Drawing::Point(56, 23);
			this->title_lb->Name = L"title_lb";
			this->title_lb->Size = System::Drawing::Size(240, 39);
			this->title_lb->TabIndex = 9;
			this->title_lb->Text = L"Novo Material";
			// 
			// ok_btn
			// 
			this->ok_btn->Location = System::Drawing::Point(92, 278);
			this->ok_btn->Name = L"ok_btn";
			this->ok_btn->Size = System::Drawing::Size(88, 23);
			this->ok_btn->TabIndex = 10;
			this->ok_btn->Text = L"Cadastrar";
			this->ok_btn->UseVisualStyleBackColor = true;
			this->ok_btn->Click += gcnew System::EventHandler(this, &TelaNovoMaterial::okBtn_Click);
			// 
			// cancel_btn
			// 
			this->cancel_btn->Location = System::Drawing::Point(186, 278);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(75, 23);
			this->cancel_btn->TabIndex = 11;
			this->cancel_btn->Text = L"Cancelar";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &TelaNovoMaterial::cancelBtn_Click);
			// 
			// TelaNovoMaterial
			// 
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(352, 323);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->ok_btn);
			this->Controls->Add(this->title_lb);
			this->Controls->Add(this->custo_lb);
			this->Controls->Add(this->unidade_lb);
			this->Controls->Add(this->quantidade_lb);
			this->Controls->Add(this->patrimonio_lb);
			this->Controls->Add(this->custo_tb);
			this->Controls->Add(this->unidade_tb);
			this->Controls->Add(this->quantidade_tb);
			this->Controls->Add(this->patrimonio_tb);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(370, 370);
			this->MinimumSize = System::Drawing::Size(370, 370);
			this->Name = L"TelaNovoMaterial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cadastrar Material";
			this->Load += gcnew System::EventHandler(this, &TelaNovoMaterial::TelaNovoMaterial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okBtn_Click(System::Object^ sender, System::EventArgs^  e);
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^  e);
	private: System::Void TelaNovoMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};

}
