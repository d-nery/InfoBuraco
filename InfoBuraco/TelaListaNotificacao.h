#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaMaterial
	/// </summary>
	public ref class TelaListaNotificacao : public System::Windows::Forms::Form
	{
	public:
		TelaListaNotificacao(void)
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
		~TelaListaNotificacao()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^  panel1;
    protected:
    private: System::Windows::Forms::DataGridView^  notificationsGrid;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaNome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaEmail;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^  colunaTelefone;
    private: System::Windows::Forms::DataGridViewButtonColumn^  colunaEditBtn;
    private: System::Windows::Forms::Panel^  panel2;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Button^  addBtn;

    protected:

    protected:





















    protected:

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaListaNotificacao::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->notificationsGrid = (gcnew System::Windows::Forms::DataGridView());
            this->colunaNome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaTelefone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->colunaEditBtn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->addBtn = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notificationsGrid))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->notificationsGrid);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(554, 501);
            this->panel1->TabIndex = 2;
            // 
            // notificationsGrid
            // 
            this->notificationsGrid->AllowUserToAddRows = false;
            this->notificationsGrid->AllowUserToDeleteRows = false;
            this->notificationsGrid->BackgroundColor = System::Drawing::Color::PapayaWhip;
            this->notificationsGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->notificationsGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->colunaNome,
                    this->colunaEmail, this->colunaTelefone, this->colunaEditBtn
            });
            this->notificationsGrid->Dock = System::Windows::Forms::DockStyle::Fill;
            this->notificationsGrid->Location = System::Drawing::Point(0, 94);
            this->notificationsGrid->Name = L"notificationsGrid";
            this->notificationsGrid->ReadOnly = true;
            this->notificationsGrid->Size = System::Drawing::Size(554, 407);
            this->notificationsGrid->TabIndex = 1;
            // 
            // colunaNome
            // 
            this->colunaNome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->colunaNome->HeaderText = L"Nome";
            this->colunaNome->Name = L"colunaNome";
            this->colunaNome->ReadOnly = true;
            // 
            // colunaEmail
            // 
            this->colunaEmail->HeaderText = L"Email";
            this->colunaEmail->Name = L"colunaEmail";
            this->colunaEmail->ReadOnly = true;
            // 
            // colunaTelefone
            // 
            this->colunaTelefone->HeaderText = L"Telefone";
            this->colunaTelefone->Name = L"colunaTelefone";
            this->colunaTelefone->ReadOnly = true;
            // 
            // colunaEditBtn
            // 
            this->colunaEditBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->colunaEditBtn->HeaderText = L"Editar";
            this->colunaEditBtn->Name = L"colunaEditBtn";
            this->colunaEditBtn->ReadOnly = true;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::PapayaWhip;
            this->panel2->Controls->Add(this->addBtn);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(554, 94);
            this->panel2->TabIndex = 4;
            // 
            // addBtn
            // 
            this->addBtn->BackColor = System::Drawing::Color::Transparent;
            this->addBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addBtn.BackgroundImage")));
            this->addBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->addBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->addBtn->FlatAppearance->BorderSize = 0;
            this->addBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->addBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->addBtn->Location = System::Drawing::Point(506, 12);
            this->addBtn->Name = L"addBtn";
            this->addBtn->Size = System::Drawing::Size(36, 34);
            this->addBtn->TabIndex = 4;
            this->addBtn->UseVisualStyleBackColor = false;
            this->addBtn->Click += gcnew System::EventHandler(this, &TelaListaNotificacao::addBtn_Click);
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Renner*", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(201, 30);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(169, 35);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Notificações";
            // 
            // TelaListaNotificacao
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(554, 501);
            this->Controls->Add(this->panel1);
            this->MinimumSize = System::Drawing::Size(570, 540);
            this->Name = L"TelaListaNotificacao";
            this->Text = L"TelaListaNotificacao";
            this->Load += gcnew System::EventHandler(this, &TelaListaNotificacao::load);
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notificationsGrid))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void load(System::Object^  sender, System::EventArgs^  e);
    private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
