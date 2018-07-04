#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaListaOS : public System::Windows::Forms::Form {
    public:
        TelaListaOS(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

    protected:
        ~TelaListaOS() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario * usuario_logado;

    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::Panel^  panel2;
    private: System::Windows::Forms::Label^  label1;

    private: System::Windows::Forms::Button^  closeBtn;
    private: System::Windows::Forms::DataGridView^  osGrid;

    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaId;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaPrioridade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaCusto;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaEstado;





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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaListaOS::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->osGrid = (gcnew System::Windows::Forms::DataGridView());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->closeBtn = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->colunaId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaPrioridade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaCusto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->osGrid))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->osGrid);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(571, 524);
            this->panel1->TabIndex = 2;
            // 
            // osGrid
            // 
            this->osGrid->AllowUserToAddRows = false;
            this->osGrid->AllowUserToDeleteRows = false;
            this->osGrid->BackgroundColor = System::Drawing::Color::PapayaWhip;
            this->osGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->osGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->colunaId, this->colunaPrioridade,
                    this->colunaCusto, this->colunaEstado
            });
            this->osGrid->Dock = System::Windows::Forms::DockStyle::Fill;
            this->osGrid->Location = System::Drawing::Point(0, 94);
            this->osGrid->Name = L"osGrid";
            this->osGrid->ReadOnly = true;
            this->osGrid->Size = System::Drawing::Size(571, 430);
            this->osGrid->TabIndex = 1;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::PapayaWhip;
            this->panel2->Controls->Add(this->closeBtn);
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
            this->closeBtn->Click += gcnew System::EventHandler(this, &TelaListaOS::closeBtn_Click);
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Renner*", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(160, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(250, 35);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Ordens de Servico";
            // 
            // colunaId
            // 
            this->colunaId->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->colunaId->HeaderText = L"Id";
            this->colunaId->Name = L"colunaId";
            this->colunaId->ReadOnly = true;
            // 
            // colunaPrioridade
            // 
            this->colunaPrioridade->HeaderText = L"Prioridade";
            this->colunaPrioridade->Name = L"colunaPrioridade";
            this->colunaPrioridade->ReadOnly = true;
            // 
            // colunaCusto
            // 
            this->colunaCusto->HeaderText = L"Custo Total";
            this->colunaCusto->Name = L"colunaCusto";
            this->colunaCusto->ReadOnly = true;
            this->colunaCusto->Resizable = System::Windows::Forms::DataGridViewTriState::True;
            this->colunaCusto->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
            // 
            // colunaEstado
            // 
            this->colunaEstado->HeaderText = L"Estado";
            this->colunaEstado->Name = L"colunaEstado";
            this->colunaEstado->ReadOnly = true;
            // 
            // TelaListaOS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(571, 524);
            this->ControlBox = false;
            this->Controls->Add(this->panel1);
            this->MinimumSize = System::Drawing::Size(570, 539);
            this->Name = L"TelaListaOS";
            this->Text = L"Materiais";
            this->Load += gcnew System::EventHandler(this, &TelaListaOS::load);
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->osGrid))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void load(System::Object^ sender, System::EventArgs^  e);
    private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
