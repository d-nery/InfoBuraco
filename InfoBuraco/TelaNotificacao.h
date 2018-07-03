#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaNotificacao : public System::Windows::Forms::Form {
    public:
        TelaNotificacao(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
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

        property String^ ctzFacebook_txt {
            String^ get() {
                return citizenFacebook_tb->Text;
            }
            void set(String^ txt) {
                citizenFacebook_tb->Text = txt;
            }
        }

        property String^ notificationReclamacao_txt {
            String^ get() {
                return notificationReclamacao_tb->Text;
            }
            void set(String^ txt) {
                notificationReclamacao_tb->Text = txt;
            }
        }

        property String^ buracoLocalizacao_txt {
            String^ get() {
                return buracoLocalizacao_tb->Text;
            }
            void set(String^ txt) {
                buracoLocalizacao_tb->Text = txt;
            }
        }

        property String^ buracoRegional_txt {
            String^ get() {
                return buracoRegional_tb->Text;
            }
            void set(String^ txt) {
                buracoRegional_tb->Text = txt;
            }
        }

    protected:
        ~TelaNotificacao() {
            if (components) {
                delete components;
            }
        }

    private:
        Usuario* usuario_logado;

    private: System::Windows::Forms::Panel^  cidadaoPanel;
    private: System::Windows::Forms::Panel^  buracoPanel;
    private: System::Windows::Forms::Panel^  notifcacaoPanel;
    private: System::Windows::Forms::Label^  ctzPhone_lb;
    private: System::Windows::Forms::Label^  ctzEmail_lb;
    private: System::Windows::Forms::Label^  ctzName_lb;
    private: System::Windows::Forms::TextBox^  citizenTelephone_tb;
    private: System::Windows::Forms::TextBox^  citizenEmail_tb;
    private: System::Windows::Forms::TextBox^  citizenName_tb;
    private: System::Windows::Forms::Button^  createCitizen_btn;
    private: System::Windows::Forms::PictureBox^  findCitizenBtn;
    private: System::Windows::Forms::PictureBox^  ctzIcon_pb;
    private: System::Windows::Forms::Label^  title_lb;
    private: System::Windows::Forms::Label^  ctzFacebook_lb;
    private: System::Windows::Forms::TextBox^  citizenFacebook_tb;
    private: System::Windows::Forms::Label^  notDateTime_lb;
    private: System::Windows::Forms::DateTimePicker^  notificationDateTime_dtp;
    private: System::Windows::Forms::Label^  notReclamacao_lb;
    private: System::Windows::Forms::TextBox^  notificationReclamacao_tb;
    private: System::Windows::Forms::PictureBox^  notificationIcon_pb;
    private: System::Windows::Forms::PictureBox^  findHoleBtn;
    private: System::Windows::Forms::NumericUpDown^  buracoTamanho_nup;
    private: System::Windows::Forms::NumericUpDown^  buracoPosicao_nup;
    private: System::Windows::Forms::TextBox^  buracoRegional_tb;
    private: System::Windows::Forms::TextBox^  buracoLocalizacao_tb;
    private: System::Windows::Forms::Label^  buracoTamanho_lb;
    private: System::Windows::Forms::Label^  buracoPosicao_lb;
    private: System::Windows::Forms::PictureBox^  buracoIcon_pb;
private: System::Windows::Forms::Label^  buracoRegional_lb;

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
            this->ctzIcon_pb = (gcnew System::Windows::Forms::PictureBox());
            this->title_lb = (gcnew System::Windows::Forms::Label());
            this->findCitizenBtn = (gcnew System::Windows::Forms::PictureBox());
            this->ctzPhone_lb = (gcnew System::Windows::Forms::Label());
            this->ctzEmail_lb = (gcnew System::Windows::Forms::Label());
            this->ctzName_lb = (gcnew System::Windows::Forms::Label());
            this->citizenTelephone_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenEmail_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenName_tb = (gcnew System::Windows::Forms::TextBox());
            this->createCitizen_btn = (gcnew System::Windows::Forms::Button());
            this->buracoPanel = (gcnew System::Windows::Forms::Panel());
            this->buracoTamanho_lb = (gcnew System::Windows::Forms::Label());
            this->buracoPosicao_lb = (gcnew System::Windows::Forms::Label());
            this->buracoIcon_pb = (gcnew System::Windows::Forms::PictureBox());
            this->buracoRegional_lb = (gcnew System::Windows::Forms::Label());
            this->buracoLocalizacao_lb = (gcnew System::Windows::Forms::Label());
            this->findHoleBtn = (gcnew System::Windows::Forms::PictureBox());
            this->buracoTamanho_nup = (gcnew System::Windows::Forms::NumericUpDown());
            this->buracoPosicao_nup = (gcnew System::Windows::Forms::NumericUpDown());
            this->buracoRegional_tb = (gcnew System::Windows::Forms::TextBox());
            this->buracoLocalizacao_tb = (gcnew System::Windows::Forms::TextBox());
            this->notifcacaoPanel = (gcnew System::Windows::Forms::Panel());
            this->notificationIcon_pb = (gcnew System::Windows::Forms::PictureBox());
            this->notReclamacao_lb = (gcnew System::Windows::Forms::Label());
            this->notificationReclamacao_tb = (gcnew System::Windows::Forms::TextBox());
            this->notDateTime_lb = (gcnew System::Windows::Forms::Label());
            this->notificationDateTime_dtp = (gcnew System::Windows::Forms::DateTimePicker());
            this->cidadaoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctzIcon_pb))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->findCitizenBtn))->BeginInit();
            this->buracoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoIcon_pb))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->findHoleBtn))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoTamanho_nup))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoPosicao_nup))->BeginInit();
            this->notifcacaoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notificationIcon_pb))->BeginInit();
            this->SuspendLayout();
            //
            // cidadaoPanel
            //
            this->cidadaoPanel->BackColor = System::Drawing::Color::Beige;
            this->cidadaoPanel->Controls->Add(this->ctzFacebook_lb);
            this->cidadaoPanel->Controls->Add(this->citizenFacebook_tb);
            this->cidadaoPanel->Controls->Add(this->ctzIcon_pb);
            this->cidadaoPanel->Controls->Add(this->title_lb);
            this->cidadaoPanel->Controls->Add(this->findCitizenBtn);
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
            // ctzIcon_pb
            //
            this->ctzIcon_pb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctzIcon_pb.Image")));
            this->ctzIcon_pb->Location = System::Drawing::Point(9, 67);
            this->ctzIcon_pb->Name = L"ctzIcon_pb";
            this->ctzIcon_pb->Size = System::Drawing::Size(65, 69);
            this->ctzIcon_pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->ctzIcon_pb->TabIndex = 0;
            this->ctzIcon_pb->TabStop = false;
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
            this->title_lb->Text = L"Notificacao";
            //
            // findCitizenBtn
            //
            this->findCitizenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findCitizenBtn.Image")));
            this->findCitizenBtn->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findCitizenBtn.InitialImage")));
            this->findCitizenBtn->Location = System::Drawing::Point(388, 83);
            this->findCitizenBtn->Name = L"findCitizenBtn";
            this->findCitizenBtn->Size = System::Drawing::Size(22, 20);
            this->findCitizenBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->findCitizenBtn->TabIndex = 7;
            this->findCitizenBtn->TabStop = false;
            this->findCitizenBtn->Click += gcnew System::EventHandler(this, &TelaNotificacao::findCitizenBtn_Click);
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
            this->createCitizen_btn->Click += gcnew System::EventHandler(this, &TelaNotificacao::createNotificationBtn_Click);
            //
            // buracoPanel
            //
            this->buracoPanel->BackColor = System::Drawing::Color::Beige;
            this->buracoPanel->Controls->Add(this->buracoTamanho_lb);
            this->buracoPanel->Controls->Add(this->buracoPosicao_lb);
            this->buracoPanel->Controls->Add(this->buracoIcon_pb);
            this->buracoPanel->Controls->Add(this->buracoRegional_lb);
            this->buracoPanel->Controls->Add(this->buracoLocalizacao_lb);
            this->buracoPanel->Controls->Add(this->findHoleBtn);
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
            // buracoTamanho_lb
            //
            this->buracoTamanho_lb->AutoSize = true;
            this->buracoTamanho_lb->Location = System::Drawing::Point(294, 92);
            this->buracoTamanho_lb->Name = L"buracoTamanho_lb";
            this->buracoTamanho_lb->Size = System::Drawing::Size(52, 13);
            this->buracoTamanho_lb->TabIndex = 14;
            this->buracoTamanho_lb->Text = L"Tamanho";
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
            // buracoIcon_pb
            //
            this->buracoIcon_pb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buracoIcon_pb.Image")));
            this->buracoIcon_pb->Location = System::Drawing::Point(12, 36);
            this->buracoIcon_pb->Name = L"buracoIcon_pb";
            this->buracoIcon_pb->Size = System::Drawing::Size(62, 65);
            this->buracoIcon_pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->buracoIcon_pb->TabIndex = 12;
            this->buracoIcon_pb->TabStop = false;
            //
            // buracoRegional_lb
            //
            this->buracoRegional_lb->AutoSize = true;
            this->buracoRegional_lb->Location = System::Drawing::Point(80, 46);
            this->buracoRegional_lb->Name = L"buracoRegional_lb";
            this->buracoRegional_lb->Size = System::Drawing::Size(49, 13);
            this->buracoRegional_lb->TabIndex = 12;
            this->buracoRegional_lb->Text = L"Regional";
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
            // findHoleBtn
            //
            this->findHoleBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findHoleBtn.Image")));
            this->findHoleBtn->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findHoleBtn.InitialImage")));
            this->findHoleBtn->Location = System::Drawing::Point(388, 43);
            this->findHoleBtn->Name = L"findHoleBtn";
            this->findHoleBtn->Size = System::Drawing::Size(22, 20);
            this->findHoleBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->findHoleBtn->TabIndex = 10;
            this->findHoleBtn->TabStop = false;
            this->findHoleBtn->Click += gcnew System::EventHandler(this, &TelaNotificacao::findHoleBtn_Click);
            //
            // buracoTamanho_nup
            //
            this->buracoTamanho_nup->Location = System::Drawing::Point(257, 69);
            this->buracoTamanho_nup->Name = L"buracoTamanho_nup";
            this->buracoTamanho_nup->Size = System::Drawing::Size(124, 20);
            this->buracoTamanho_nup->TabIndex = 10;
            //
            // buracoPosicao_nup
            //
            this->buracoPosicao_nup->Location = System::Drawing::Point(135, 69);
            this->buracoPosicao_nup->Name = L"buracoPosicao_nup";
            this->buracoPosicao_nup->Size = System::Drawing::Size(116, 20);
            this->buracoPosicao_nup->TabIndex = 9;
            //
            // buracoRegional_tb
            //
            this->buracoRegional_tb->Location = System::Drawing::Point(135, 43);
            this->buracoRegional_tb->Name = L"buracoRegional_tb";
            this->buracoRegional_tb->Size = System::Drawing::Size(246, 20);
            this->buracoRegional_tb->TabIndex = 8;
            //
            // buracoLocalizacao_tb
            //
            this->buracoLocalizacao_tb->Location = System::Drawing::Point(134, 17);
            this->buracoLocalizacao_tb->Name = L"buracoLocalizacao_tb";
            this->buracoLocalizacao_tb->Size = System::Drawing::Size(247, 20);
            this->buracoLocalizacao_tb->TabIndex = 7;
            //
            // notifcacaoPanel
            //
            this->notifcacaoPanel->BackColor = System::Drawing::Color::Beige;
            this->notifcacaoPanel->Controls->Add(this->notificationIcon_pb);
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
            // notificationIcon_pb
            //
            this->notificationIcon_pb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notificationIcon_pb.Image")));
            this->notificationIcon_pb->Location = System::Drawing::Point(12, 53);
            this->notificationIcon_pb->Name = L"notificationIcon_pb";
            this->notificationIcon_pb->Size = System::Drawing::Size(62, 65);
            this->notificationIcon_pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->notificationIcon_pb->TabIndex = 7;
            this->notificationIcon_pb->TabStop = false;
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
            // notificationReclamacao_tb
            //
            this->notificationReclamacao_tb->AcceptsReturn = true;
            this->notificationReclamacao_tb->Location = System::Drawing::Point(135, 20);
            this->notificationReclamacao_tb->Multiline = true;
            this->notificationReclamacao_tb->Name = L"notificationReclamacao_tb";
            this->notificationReclamacao_tb->Size = System::Drawing::Size(247, 108);
            this->notificationReclamacao_tb->TabIndex = 11;
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctzIcon_pb))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->findCitizenBtn))->EndInit();
            this->buracoPanel->ResumeLayout(false);
            this->buracoPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoIcon_pb))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->findHoleBtn))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoTamanho_nup))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buracoPosicao_nup))->EndInit();
            this->notifcacaoPanel->ResumeLayout(false);
            this->notifcacaoPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notificationIcon_pb))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

        private: System::Void findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
        private: System::Void findHoleBtn_Click(System::Object^  sender, System::EventArgs^  e);
        private: System::Void createNotificationBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
