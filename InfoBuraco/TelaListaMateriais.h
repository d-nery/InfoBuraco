#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaListaMateriais : public System::Windows::Forms::Form {
    public:
        TelaListaMateriais(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

    protected:
        ~TelaListaMateriais() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario * usuario_logado;

    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::DataGridView^  materiaisGrid;


    private: System::Windows::Forms::Panel^  panel2;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Button^  addBtn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaNome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaReclamacao;
    private: System::Windows::Forms::DataGridViewCheckBoxColumn^  colunaAlocado;
    private: System::Windows::Forms::DataGridViewButtonColumn^  colunaDetailsBtn;
    private: System::Windows::Forms::Button^  closeBtn;






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
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaListaMateriais::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->materiaisGrid = (gcnew System::Windows::Forms::DataGridView());
            this->colunaNome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaReclamacao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaAlocado = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
            this->colunaDetailsBtn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->closeBtn = (gcnew System::Windows::Forms::Button());
            this->addBtn = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->materiaisGrid))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->materiaisGrid);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(571, 524);
            this->panel1->TabIndex = 2;
            // 
            // materiaisGrid
            // 
            this->materiaisGrid->AllowUserToAddRows = false;
            this->materiaisGrid->AllowUserToDeleteRows = false;
            this->materiaisGrid->BackgroundColor = System::Drawing::Color::PapayaWhip;
            this->materiaisGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->materiaisGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->colunaNome,
                    this->colunaReclamacao, this->colunaAlocado, this->colunaDetailsBtn
            });
            this->materiaisGrid->Dock = System::Windows::Forms::DockStyle::Fill;
            this->materiaisGrid->Location = System::Drawing::Point(0, 94);
            this->materiaisGrid->Name = L"materiaisGrid";
            this->materiaisGrid->ReadOnly = true;
            this->materiaisGrid->Size = System::Drawing::Size(571, 430);
            this->materiaisGrid->TabIndex = 1;
            // 
            // colunaNome
            // 
            this->colunaNome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->colunaNome->HeaderText = L"Patrimonio";
            this->colunaNome->Name = L"colunaNome";
            this->colunaNome->ReadOnly = true;
            // 
            // colunaReclamacao
            // 
            this->colunaReclamacao->HeaderText = L"Custo";
            this->colunaReclamacao->Name = L"colunaReclamacao";
            this->colunaReclamacao->ReadOnly = true;
            // 
            // colunaAlocado
            // 
            this->colunaAlocado->HeaderText = L"Alocado";
            this->colunaAlocado->Name = L"colunaAlocado";
            this->colunaAlocado->ReadOnly = true;
            // 
            // colunaDetailsBtn
            // 
            this->colunaDetailsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->colunaDetailsBtn->HeaderText = L"Detalhes";
            this->colunaDetailsBtn->Name = L"colunaDetailsBtn";
            this->colunaDetailsBtn->ReadOnly = true;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::PapayaWhip;
            this->panel2->Controls->Add(this->closeBtn);
            this->panel2->Controls->Add(this->addBtn);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(571, 94);
            this->panel2->TabIndex = 4;
            // 
            // closeBtn
            // 
            this->closeBtn->BackColor = System::Drawing::Color::Transparent;
            this->closeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeBtn.BackgroundImage")));
            this->closeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->closeBtn->FlatAppearance->BorderSize = 0;
            this->closeBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->closeBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->closeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->closeBtn->Location = System::Drawing::Point(12, 12);
            this->closeBtn->Name = L"closeBtn";
            this->closeBtn->Size = System::Drawing::Size(36, 34);
            this->closeBtn->TabIndex = 5;
            this->closeBtn->UseVisualStyleBackColor = false;
            this->closeBtn->Click += gcnew System::EventHandler(this, &TelaListaMateriais::closeBtn_Click);
            // 
            // addBtn
            // 
            this->addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->addBtn->BackColor = System::Drawing::Color::Transparent;
            this->addBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addBtn.BackgroundImage")));
            this->addBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->addBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->addBtn->FlatAppearance->BorderSize = 0;
            this->addBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->addBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->addBtn->Location = System::Drawing::Point(523, 12);
            this->addBtn->Name = L"addBtn";
            this->addBtn->Size = System::Drawing::Size(36, 34);
            this->addBtn->TabIndex = 4;
            this->addBtn->UseVisualStyleBackColor = false;
            this->addBtn->Click += gcnew System::EventHandler(this, &TelaListaMateriais::addBtn_Click);
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Renner*", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(225, 28);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(126, 35);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Materiais";
            // 
            // TelaListaMateriais
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(571, 524);
            this->ControlBox = false;
            this->Controls->Add(this->panel1);
            this->MinimumSize = System::Drawing::Size(570, 540);
            this->Name = L"TelaListaMateriais";
            this->Text = L"Equipamentos";
            this->Load += gcnew System::EventHandler(this, &TelaListaMateriais::load);
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->materiaisGrid))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^  e);
    private: System::Void load(System::Object^ sender, System::EventArgs^  e);
    private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e);
    };
}
