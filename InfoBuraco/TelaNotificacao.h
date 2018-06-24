#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaNotificacao
	/// </summary>
	public ref class TelaNotificacao : public System::Windows::Forms::Form
	{
	public:
		TelaNotificacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

        property String^ ctzName_txt {
            String^ get() {
                return citizenName_tb->Text;
            }
            void set(String^ txt) {
                citizenName_tb->Text = txt;
            }
        }

        property String^ ctzEmail_txt {
            String^ get() {
                return citizenEmail_tb->Text;
            }
            void set(String^ txt) {
                citizenEmail_tb->Text = txt;
            }
        }

        property String^ ctzPhone_txt {
            String^ get() {
                return citizenTelephone_tb->Text;
            }
            void set(String^ txt) {
                citizenTelephone_tb->Text = txt;
            }
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaNotificacao()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^  cidadaoPanel;
    protected:
    private: System::Windows::Forms::Panel^  buracoPanel;
    private: System::Windows::Forms::Panel^  notifcacaoPanel;
    private: System::Windows::Forms::Label^  ctzPhone_lb;

    private: System::Windows::Forms::Label^  ctzEmail_lb;

    private: System::Windows::Forms::Label^  ctzName_lb;

    private: System::Windows::Forms::TextBox^  citizenTelephone_tb;
    private: System::Windows::Forms::TextBox^  citizenEmail_tb;
    private: System::Windows::Forms::TextBox^  citizenName_tb;
    private: System::Windows::Forms::Button^  createCitizen_btn;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: System::Windows::Forms::Label^  title_lb;
    private: System::Windows::Forms::Label^  ctzFacebook_lb;
    private: System::Windows::Forms::TextBox^  citizenFacebook_tb;



    private: System::Windows::Forms::Label^  notDateTime_lb;
    private: System::Windows::Forms::DateTimePicker^  notificationDateTime_dtp;



    private: System::Windows::Forms::Label^  notReclamacao_lb;
    private: System::Windows::Forms::TextBox^  notificationReclamacao_tb;

    private: System::Windows::Forms::PictureBox^  pictureBox3;
    private: System::Windows::Forms::PictureBox^  pictureBox4;
    private: System::Windows::Forms::NumericUpDown^  buracoTamanho_nup;

    private: System::Windows::Forms::NumericUpDown^  buracoPosicao_nup;

    private: System::Windows::Forms::TextBox^  buracoRegional_tb;

    private: System::Windows::Forms::TextBox^  buracoLocalizacao_tb;
    private: System::Windows::Forms::Label^  buracoTamanho_lb;
    private: System::Windows::Forms::Label^  buracoPosicao_lb;
    private: System::Windows::Forms::PictureBox^  pictureBox5;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  buracoLocalizacao_lb;


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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNotificacao::typeid));
            this->cidadaoPanel = (gcnew System::Windows::Forms::Panel());
            this->ctzFacebook_lb = (gcnew System::Windows::Forms::Label());
            this->citizenFacebook_tb = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->title_lb = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->ctzPhone_lb = (gcnew System::Windows::Forms::Label());
            this->ctzEmail_lb = (gcnew System::Windows::Forms::Label());
            this->ctzName_lb = (gcnew System::Windows::Forms::Label());
            this->citizenTelephone_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenEmail_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenName_tb = (gcnew System::Windows::Forms::TextBox());
            this->createCitizen_btn = (gcnew System::Windows::Forms::Button());
            this->buracoPanel = (gcnew System::Windows::Forms::Panel());
            this->notifcacaoPanel = (gcnew System::Windows::Forms::Panel());
            this->notDateTime_lb = (gcnew System::Windows::Forms::Label());
            this->notificationDateTime_dtp = (gcnew System::Windows::Forms::DateTimePicker());
            this->notificationReclamacao_tb = (gcnew System::Windows::Forms::TextBox());
            this->notReclamacao_lb = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->buracoLocalizacao_tb = (gcnew System::Windows::Forms::TextBox());
            this->buracoRegional_tb = (gcnew System::Windows::Forms::TextBox());
            this->buracoPosicao_nup = (gcnew System::Windows::Forms::NumericUpDown());
            this->buracoTamanho_nup = (gcnew System::Windows::Forms::NumericUpDown());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->buracoLocalizacao_lb = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->buracoPosicao_lb = (gcnew System::Windows::Forms::Label());
            this->buracoTamanho_lb = (gcnew System::Windows::Forms::Label());
            this->cidadaoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->buracoPanel->SuspendLayout();
            this->notifcacaoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoPosicao_nup))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoTamanho_nup))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // cidadaoPanel
            // 
            this->cidadaoPanel->BackColor = System::Drawing::Color::Beige;
            this->cidadaoPanel->Controls->Add(this->ctzFacebook_lb);
            this->cidadaoPanel->Controls->Add(this->citizenFacebook_tb);
            this->cidadaoPanel->Controls->Add(this->pictureBox2);
            this->cidadaoPanel->Controls->Add(this->title_lb);
            this->cidadaoPanel->Controls->Add(this->pictureBox1);
            this->cidadaoPanel->Controls->Add(this->ctzPhone_lb);
            this->cidadaoPanel->Controls->Add(this->ctzEmail_lb);
            this->cidadaoPanel->Controls->Add(this->ctzName_lb);
            this->cidadaoPanel->Controls->Add(this->citizenTelephone_tb);
            this->cidadaoPanel->Controls->Add(this->citizenEmail_tb);
            this->cidadaoPanel->Controls->Add(this->citizenName_tb);
            this->cidadaoPanel->Dock = System::Windows::Forms::DockStyle::Top;
            this->cidadaoPanel->Location = System::Drawing::Point(0, 0);
            this->cidadaoPanel->Name = L"cidadaoPanel";
            this->cidadaoPanel->Size = System::Drawing::Size(434, 182);
            this->cidadaoPanel->TabIndex = 0;
            // 
            // ctzFacebook_lb
            // 
            this->ctzFacebook_lb->AutoSize = true;
            this->ctzFacebook_lb->Location = System::Drawing::Point(74, 139);
            this->ctzFacebook_lb->Name = L"ctzFacebook_lb";
            this->ctzFacebook_lb->Size = System::Drawing::Size(55, 13);
            this->ctzFacebook_lb->TabIndex = 0;
            this->ctzFacebook_lb->Text = L"Facebook";
            // 
            // citizenFacebook_tb
            // 
            this->citizenFacebook_tb->Location = System::Drawing::Point(135, 136);
            this->citizenFacebook_tb->Name = L"citizenFacebook_tb";
            this->citizenFacebook_tb->Size = System::Drawing::Size(247, 20);
            this->citizenFacebook_tb->TabIndex = 9;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(9, 67);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(65, 69);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // title_lb
            // 
            this->title_lb->AutoSize = true;
            this->title_lb->Font = (gcnew System::Drawing::Font(L"Renner*", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title_lb->ForeColor = System::Drawing::Color::Black;
            this->title_lb->Location = System::Drawing::Point(130, 9);
            this->title_lb->Name = L"title_lb";
            this->title_lb->Size = System::Drawing::Size(157, 32);
            this->title_lb->TabIndex = 8;
            this->title_lb->Text = L"Notificação";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
            this->pictureBox1->Location = System::Drawing::Point(388, 83);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(22, 20);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &TelaNotificacao::findCitizenBtn_Click);
            // 
            // ctzPhone_lb
            // 
            this->ctzPhone_lb->AutoSize = true;
            this->ctzPhone_lb->ForeColor = System::Drawing::Color::Black;
            this->ctzPhone_lb->Location = System::Drawing::Point(80, 112);
            this->ctzPhone_lb->Name = L"ctzPhone_lb";
            this->ctzPhone_lb->Size = System::Drawing::Size(49, 13);
            this->ctzPhone_lb->TabIndex = 5;
            this->ctzPhone_lb->Text = L"Telefone";
            // 
            // ctzEmail_lb
            // 
            this->ctzEmail_lb->AutoSize = true;
            this->ctzEmail_lb->ForeColor = System::Drawing::Color::Black;
            this->ctzEmail_lb->Location = System::Drawing::Point(94, 86);
            this->ctzEmail_lb->Name = L"ctzEmail_lb";
            this->ctzEmail_lb->Size = System::Drawing::Size(35, 13);
            this->ctzEmail_lb->TabIndex = 4;
            this->ctzEmail_lb->Text = L"E-mail";
            // 
            // ctzName_lb
            // 
            this->ctzName_lb->AutoSize = true;
            this->ctzName_lb->ForeColor = System::Drawing::Color::Black;
            this->ctzName_lb->Location = System::Drawing::Point(94, 60);
            this->ctzName_lb->Name = L"ctzName_lb";
            this->ctzName_lb->Size = System::Drawing::Size(35, 13);
            this->ctzName_lb->TabIndex = 3;
            this->ctzName_lb->Text = L"Nome";
            // 
            // citizenTelephone_tb
            // 
            this->citizenTelephone_tb->Location = System::Drawing::Point(135, 109);
            this->citizenTelephone_tb->Name = L"citizenTelephone_tb";
            this->citizenTelephone_tb->Size = System::Drawing::Size(247, 20);
            this->citizenTelephone_tb->TabIndex = 2;
            // 
            // citizenEmail_tb
            // 
            this->citizenEmail_tb->Location = System::Drawing::Point(135, 83);
            this->citizenEmail_tb->Name = L"citizenEmail_tb";
            this->citizenEmail_tb->Size = System::Drawing::Size(247, 20);
            this->citizenEmail_tb->TabIndex = 1;
            // 
            // citizenName_tb
            // 
            this->citizenName_tb->Location = System::Drawing::Point(135, 57);
            this->citizenName_tb->Name = L"citizenName_tb";
            this->citizenName_tb->Size = System::Drawing::Size(247, 20);
            this->citizenName_tb->TabIndex = 0;
            // 
            // createCitizen_btn
            // 
            this->createCitizen_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->createCitizen_btn->BackColor = System::Drawing::Color::DarkKhaki;
            this->createCitizen_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->createCitizen_btn->Location = System::Drawing::Point(347, 108);
            this->createCitizen_btn->Name = L"createCitizen_btn";
            this->createCitizen_btn->Size = System::Drawing::Size(75, 23);
            this->createCitizen_btn->TabIndex = 6;
            this->createCitizen_btn->Text = L"Cadastrar";
            this->createCitizen_btn->UseVisualStyleBackColor = false;
            this->createCitizen_btn->Click += gcnew System::EventHandler(this, &TelaNotificacao::createCitizenBtn_Click);
            // 
            // buracoPanel
            // 
            this->buracoPanel->BackColor = System::Drawing::Color::Beige;
            this->buracoPanel->Controls->Add(this->buracoTamanho_lb);
            this->buracoPanel->Controls->Add(this->buracoPosicao_lb);
            this->buracoPanel->Controls->Add(this->pictureBox5);
            this->buracoPanel->Controls->Add(this->label1);
            this->buracoPanel->Controls->Add(this->buracoLocalizacao_lb);
            this->buracoPanel->Controls->Add(this->pictureBox4);
            this->buracoPanel->Controls->Add(this->buracoTamanho_nup);
            this->buracoPanel->Controls->Add(this->buracoPosicao_nup);
            this->buracoPanel->Controls->Add(this->buracoRegional_tb);
            this->buracoPanel->Controls->Add(this->buracoLocalizacao_tb);
            this->buracoPanel->Controls->Add(this->createCitizen_btn);
            this->buracoPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->buracoPanel->Location = System::Drawing::Point(0, 358);
            this->buracoPanel->Name = L"buracoPanel";
            this->buracoPanel->Size = System::Drawing::Size(434, 143);
            this->buracoPanel->TabIndex = 1;
            // 
            // notifcacaoPanel
            // 
            this->notifcacaoPanel->BackColor = System::Drawing::Color::Beige;
            this->notifcacaoPanel->Controls->Add(this->pictureBox3);
            this->notifcacaoPanel->Controls->Add(this->notReclamacao_lb);
            this->notifcacaoPanel->Controls->Add(this->notificationReclamacao_tb);
            this->notifcacaoPanel->Controls->Add(this->notDateTime_lb);
            this->notifcacaoPanel->Controls->Add(this->notificationDateTime_dtp);
            this->notifcacaoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->notifcacaoPanel->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->notifcacaoPanel->Location = System::Drawing::Point(0, 182);
            this->notifcacaoPanel->Name = L"notifcacaoPanel";
            this->notifcacaoPanel->Size = System::Drawing::Size(434, 176);
            this->notifcacaoPanel->TabIndex = 2;
            // 
            // notDateTime_lb
            // 
            this->notDateTime_lb->AutoSize = true;
            this->notDateTime_lb->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->notDateTime_lb->Location = System::Drawing::Point(72, 137);
            this->notDateTime_lb->Name = L"notDateTime_lb";
            this->notDateTime_lb->Size = System::Drawing::Size(58, 13);
            this->notDateTime_lb->TabIndex = 10;
            this->notDateTime_lb->Text = L"Data/Hora";
            // 
            // notificationDateTime_dtp
            // 
            this->notificationDateTime_dtp->CustomFormat = L"dd/MM/yyyy HH:mm";
            this->notificationDateTime_dtp->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->notificationDateTime_dtp->Location = System::Drawing::Point(135, 134);
            this->notificationDateTime_dtp->Name = L"notificationDateTime_dtp";
            this->notificationDateTime_dtp->Size = System::Drawing::Size(247, 20);
            this->notificationDateTime_dtp->TabIndex = 0;
            // 
            // notificationReclamacao_tb
            // 
            this->notificationReclamacao_tb->AcceptsReturn = true;
            this->notificationReclamacao_tb->Location = System::Drawing::Point(135, 20);
            this->notificationReclamacao_tb->Multiline = true;
            this->notificationReclamacao_tb->Name = L"notificationReclamacao_tb";
            this->notificationReclamacao_tb->Size = System::Drawing::Size(247, 108);
            this->notificationReclamacao_tb->TabIndex = 11;
            // 
            // notReclamacao_lb
            // 
            this->notReclamacao_lb->AutoSize = true;
            this->notReclamacao_lb->BackColor = System::Drawing::Color::Transparent;
            this->notReclamacao_lb->ForeColor = System::Drawing::SystemColors::ControlText;
            this->notReclamacao_lb->Location = System::Drawing::Point(62, 23);
            this->notReclamacao_lb->Name = L"notReclamacao_lb";
            this->notReclamacao_lb->Size = System::Drawing::Size(67, 13);
            this->notReclamacao_lb->TabIndex = 7;
            this->notReclamacao_lb->Text = L"Reclamação";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(12, 53);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(62, 65);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 7;
            this->pictureBox3->TabStop = false;
            // 
            // buracoLocalizacao_tb
            // 
            this->buracoLocalizacao_tb->Location = System::Drawing::Point(134, 17);
            this->buracoLocalizacao_tb->Name = L"buracoLocalizacao_tb";
            this->buracoLocalizacao_tb->Size = System::Drawing::Size(247, 20);
            this->buracoLocalizacao_tb->TabIndex = 7;
            // 
            // buracoRegional_tb
            // 
            this->buracoRegional_tb->Location = System::Drawing::Point(135, 43);
            this->buracoRegional_tb->Name = L"buracoRegional_tb";
            this->buracoRegional_tb->Size = System::Drawing::Size(246, 20);
            this->buracoRegional_tb->TabIndex = 8;
            // 
            // buracoPosicao_nup
            // 
            this->buracoPosicao_nup->Location = System::Drawing::Point(135, 69);
            this->buracoPosicao_nup->Name = L"buracoPosicao_nup";
            this->buracoPosicao_nup->Size = System::Drawing::Size(116, 20);
            this->buracoPosicao_nup->TabIndex = 9;
            // 
            // buracoTamanho_nup
            // 
            this->buracoTamanho_nup->Location = System::Drawing::Point(257, 69);
            this->buracoTamanho_nup->Name = L"buracoTamanho_nup";
            this->buracoTamanho_nup->Size = System::Drawing::Size(124, 20);
            this->buracoTamanho_nup->TabIndex = 10;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
            this->pictureBox4->Location = System::Drawing::Point(388, 43);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(22, 20);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 10;
            this->pictureBox4->TabStop = false;
            // 
            // buracoLocalizacao_lb
            // 
            this->buracoLocalizacao_lb->AutoSize = true;
            this->buracoLocalizacao_lb->Location = System::Drawing::Point(66, 20);
            this->buracoLocalizacao_lb->Name = L"buracoLocalizacao_lb";
            this->buracoLocalizacao_lb->Size = System::Drawing::Size(64, 13);
            this->buracoLocalizacao_lb->TabIndex = 11;
            this->buracoLocalizacao_lb->Text = L"Localização";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(80, 46);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(49, 13);
            this->label1->TabIndex = 12;
            this->label1->Text = L"Regional";
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(12, 36);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(62, 65);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 12;
            this->pictureBox5->TabStop = false;
            // 
            // buracoPosicao_lb
            // 
            this->buracoPosicao_lb->AutoSize = true;
            this->buracoPosicao_lb->Location = System::Drawing::Point(172, 92);
            this->buracoPosicao_lb->Name = L"buracoPosicao_lb";
            this->buracoPosicao_lb->Size = System::Drawing::Size(45, 13);
            this->buracoPosicao_lb->TabIndex = 13;
            this->buracoPosicao_lb->Text = L"Posição";
            // 
            // buracoTamanho_lb
            // 
            this->buracoTamanho_lb->AutoSize = true;
            this->buracoTamanho_lb->Location = System::Drawing::Point(294, 92);
            this->buracoTamanho_lb->Name = L"buracoTamanho_lb";
            this->buracoTamanho_lb->Size = System::Drawing::Size(52, 13);
            this->buracoTamanho_lb->TabIndex = 14;
            this->buracoTamanho_lb->Text = L"Tamanho";
            // 
            // TelaNotificacao
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(434, 501);
            this->Controls->Add(this->notifcacaoPanel);
            this->Controls->Add(this->buracoPanel);
            this->Controls->Add(this->cidadaoPanel);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximumSize = System::Drawing::Size(450, 540);
            this->MinimumSize = System::Drawing::Size(450, 540);
            this->Name = L"TelaNotificacao";
            this->Text = L"Nova Notificação";
            this->cidadaoPanel->ResumeLayout(false);
            this->cidadaoPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->buracoPanel->ResumeLayout(false);
            this->buracoPanel->PerformLayout();
            this->notifcacaoPanel->ResumeLayout(false);
            this->notifcacaoPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoPosicao_nup))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoTamanho_nup))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

        private: System::Void createCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
        private: System::Void findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
