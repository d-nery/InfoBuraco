#pragma once

#include <msclr/marshal_cppstd.h>

#include "Login.h"
#include "Usuario.h"
#include "TelaEquipamento.h"
#include "TelaFuncionarios.h"
#include "TelaListaNotificacao.h"
#include "TelaListaMateriais.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Sum�rio para TelaDashboard
    /// </summary>
    public ref class TelaDashboard : public System::Windows::Forms::Form
    {
    public:
        TelaDashboard(Usuario* user, Login^ org_login);

    protected:
        /// <summary>
        /// Limpar os recursos que est�o sendo usados.
        /// </summary>
        ~TelaDashboard();


    private:
        Login^ original_login;
        TelaEquipamento^ telaEquipamento;
        TelaListaNotificacao^ telaListaNotificacao;
        TelaListaMateriais^ telaListaMateriais;
        TelaFuncionarios^ telaFuncionarios;
        Usuario* usuario_logado;

    private: System::Windows::Forms::Panel^  lateral_menu;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::Button^  logout_btn;
    private: System::Windows::Forms::Label^  user_name;
    private: System::Windows::Forms::Label^  user_cargo;
    private: System::Windows::Forms::PictureBox^  user_image;

    private: System::Windows::Forms::Panel^  panel3;
    private: System::Windows::Forms::Panel^  panel4;




    private: System::Windows::Forms::PictureBox^  pictureBox10;
    private: System::Windows::Forms::Button^  equipamentosBtn;
    private: System::Windows::Forms::Button^  ordensBtn;
    private: System::Windows::Forms::Panel^  panel5;
    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::Button^  funcionariosBtn;
    private: System::Windows::Forms::Button^  equipesBtn;
    private: System::Windows::Forms::Button^  notificacoesBtn;
    private: System::Windows::Forms::Button^  materiaisBtn;
    private: System::Windows::Forms::Button^  button1;

    private:
        /// <summary>
        /// Vari�vel de designer necess�ria.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// M�todo necess�rio para suporte ao Designer - n�o modifique
        /// o conte�do deste m�todo com o editor de c�digo.
        /// </summary>
        void InitializeComponent(void)
        {

            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaDashboard::typeid));
            this->lateral_menu = (gcnew System::Windows::Forms::Panel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->logout_btn = (gcnew System::Windows::Forms::Button());
            this->user_name = (gcnew System::Windows::Forms::Label());
            this->user_cargo = (gcnew System::Windows::Forms::Label());
            this->user_image = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->materiaisBtn = (gcnew System::Windows::Forms::Button());
            this->notificacoesBtn = (gcnew System::Windows::Forms::Button());
            this->equipesBtn = (gcnew System::Windows::Forms::Button());
            this->funcionariosBtn = (gcnew System::Windows::Forms::Button());
            this->ordensBtn = (gcnew System::Windows::Forms::Button());
            this->equipamentosBtn = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lateral_menu->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->SuspendLayout();
            // 
            // lateral_menu
            // 
            this->lateral_menu->BackColor = System::Drawing::Color::DarkGoldenrod;
            this->lateral_menu->Controls->Add(this->pictureBox10);
            this->lateral_menu->Controls->Add(this->panel3);
            this->lateral_menu->Dock = System::Windows::Forms::DockStyle::Top;
            this->lateral_menu->Location = System::Drawing::Point(0, 0);
            this->lateral_menu->Name = L"lateral_menu";
            this->lateral_menu->Size = System::Drawing::Size(784, 38);
            this->lateral_menu->TabIndex = 0;
            this->lateral_menu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TelaDashboard::panel1_Paint);
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(3, 3);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(40, 32);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 24;
            this->pictureBox10->TabStop = false;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->logout_btn);
            this->panel3->Controls->Add(this->user_name);
            this->panel3->Controls->Add(this->user_cargo);
            this->panel3->Controls->Add(this->user_image);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
            this->panel3->Location = System::Drawing::Point(448, 0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(336, 38);
            this->panel3->TabIndex = 23;
            // 
            // logout_btn
            // 
            this->logout_btn->BackColor = System::Drawing::Color::DarkGoldenrod;
            this->logout_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->logout_btn->Dock = System::Windows::Forms::DockStyle::Right;
            this->logout_btn->FlatAppearance->BorderColor = System::Drawing::Color::BurlyWood;
            this->logout_btn->FlatAppearance->BorderSize = 0;
            this->logout_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->logout_btn->Location = System::Drawing::Point(272, 0);
            this->logout_btn->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
            this->logout_btn->Name = L"logout_btn";
            this->logout_btn->Size = System::Drawing::Size(64, 38);
            this->logout_btn->TabIndex = 1;
            this->logout_btn->Text = L"Sair";
            this->logout_btn->UseVisualStyleBackColor = false;
            this->logout_btn->Click += gcnew System::EventHandler(this, &TelaDashboard::button1_Click);
            // 
            // user_name
            // 
            this->user_name->AutoSize = true;
            this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->user_name->Location = System::Drawing::Point(45, 9);
            this->user_name->Name = L"user_name";
            this->user_name->Size = System::Drawing::Size(98, 20);
            this->user_name->TabIndex = 3;
            this->user_name->Text = L"user_name";
            // 
            // user_cargo
            // 
            this->user_cargo->AutoSize = true;
            this->user_cargo->Location = System::Drawing::Point(161, 13);
            this->user_cargo->Name = L"user_cargo";
            this->user_cargo->Size = System::Drawing::Size(60, 13);
            this->user_cargo->TabIndex = 4;
            this->user_cargo->Text = L"user_cargo";
            // 
            // user_image
            // 
            this->user_image->Dock = System::Windows::Forms::DockStyle::Left;
            this->user_image->Location = System::Drawing::Point(0, 0);
            this->user_image->Name = L"user_image";
            this->user_image->Size = System::Drawing::Size(39, 38);
            this->user_image->TabIndex = 7;
            this->user_image->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->ImageLocation = L"";
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Padding = System::Windows::Forms::Padding(0, 0, 0, 3);
            this->pictureBox1->Size = System::Drawing::Size(784, 87);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->Controls->Add(this->button1);
            this->panel4->Controls->Add(this->materiaisBtn);
            this->panel4->Controls->Add(this->notificacoesBtn);
            this->panel4->Controls->Add(this->equipesBtn);
            this->panel4->Controls->Add(this->funcionariosBtn);
            this->panel4->Controls->Add(this->ordensBtn);
            this->panel4->Controls->Add(this->equipamentosBtn);
            this->panel4->Location = System::Drawing::Point(105, 98);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(585, 260);
            this->panel4->TabIndex = 23;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(209)));
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
                static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)),
                static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button1->Location = System::Drawing::Point(303, 133);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(125, 124);
            this->button1->TabIndex = 30;
            this->button1->Text = L"Despachos";
            this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button1->UseVisualStyleBackColor = false;
            // 
            // materiaisBtn
            // 
            this->materiaisBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->materiaisBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"materiaisBtn.BackgroundImage")));
            this->materiaisBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->materiaisBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->materiaisBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->materiaisBtn->FlatAppearance->BorderSize = 0;
            this->materiaisBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->materiaisBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(175)));
            this->materiaisBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->materiaisBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->materiaisBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->materiaisBtn->Location = System::Drawing::Point(153, 133);
            this->materiaisBtn->Name = L"materiaisBtn";
            this->materiaisBtn->Size = System::Drawing::Size(125, 124);
            this->materiaisBtn->TabIndex = 29;
            this->materiaisBtn->Text = L"Materiais";
            this->materiaisBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->materiaisBtn->UseVisualStyleBackColor = false;
            this->materiaisBtn->Click += gcnew System::EventHandler(this, &TelaDashboard::materiaisBtn_Click);
            // 
            // notificacoesBtn
            // 
            this->notificacoesBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(2)),
                static_cast<System::Int32>(static_cast<System::Byte>(2)));
            this->notificacoesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notificacoesBtn.BackgroundImage")));
            this->notificacoesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->notificacoesBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->notificacoesBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
                static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(2)));
            this->notificacoesBtn->FlatAppearance->BorderSize = 0;
            this->notificacoesBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
            this->notificacoesBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
            this->notificacoesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->notificacoesBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->notificacoesBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->notificacoesBtn->Location = System::Drawing::Point(3, 133);
            this->notificacoesBtn->Name = L"notificacoesBtn";
            this->notificacoesBtn->Size = System::Drawing::Size(125, 124);
            this->notificacoesBtn->TabIndex = 28;
            this->notificacoesBtn->Text = L"Notificacoes";
            this->notificacoesBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->notificacoesBtn->UseVisualStyleBackColor = false;
            this->notificacoesBtn->Click += gcnew System::EventHandler(this, &TelaDashboard::notificacoesBtn_Click);
            // 
            // equipesBtn
            // 
            this->equipesBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
                static_cast<System::Int32>(static_cast<System::Byte>(191)));
            this->equipesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"equipesBtn.BackgroundImage")));
            this->equipesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->equipesBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->equipesBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
                static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
            this->equipesBtn->FlatAppearance->BorderSize = 0;
            this->equipesBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)),
                static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(205)));
            this->equipesBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)),
                static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
            this->equipesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->equipesBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->equipesBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->equipesBtn->Location = System::Drawing::Point(457, 3);
            this->equipesBtn->Name = L"equipesBtn";
            this->equipesBtn->Size = System::Drawing::Size(125, 124);
            this->equipesBtn->TabIndex = 27;
            this->equipesBtn->Text = L"Equipes";
            this->equipesBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->equipesBtn->UseVisualStyleBackColor = false;
            // 
            // funcionariosBtn
            // 
            this->funcionariosBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
                static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->funcionariosBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"funcionariosBtn.BackgroundImage")));
            this->funcionariosBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->funcionariosBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->funcionariosBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->funcionariosBtn->FlatAppearance->BorderSize = 0;
            this->funcionariosBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
            this->funcionariosBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(165)));
            this->funcionariosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->funcionariosBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->funcionariosBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->funcionariosBtn->Location = System::Drawing::Point(303, 3);
            this->funcionariosBtn->Name = L"funcionariosBtn";
            this->funcionariosBtn->Size = System::Drawing::Size(125, 124);
            this->funcionariosBtn->TabIndex = 26;
            this->funcionariosBtn->Text = L"Funcionarios";
            this->funcionariosBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->funcionariosBtn->UseVisualStyleBackColor = false;
            this->funcionariosBtn->Click += gcnew System::EventHandler(this, &TelaDashboard::funcionariosBtn_Click);
            // 
            // ordensBtn
            // 
            this->ordensBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)));
            this->ordensBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ordensBtn.BackgroundImage")));
            this->ordensBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->ordensBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ordensBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
            this->ordensBtn->FlatAppearance->BorderSize = 0;
            this->ordensBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
            this->ordensBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
            this->ordensBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ordensBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->ordensBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ordensBtn->Location = System::Drawing::Point(153, 3);
            this->ordensBtn->Name = L"ordensBtn";
            this->ordensBtn->Size = System::Drawing::Size(125, 124);
            this->ordensBtn->TabIndex = 25;
            this->ordensBtn->Text = L"Ordens";
            this->ordensBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->ordensBtn->UseVisualStyleBackColor = false;
            // 
            // equipamentosBtn
            // 
            this->equipamentosBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->equipamentosBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"equipamentosBtn.BackgroundImage")));
            this->equipamentosBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->equipamentosBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->equipamentosBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
            this->equipamentosBtn->FlatAppearance->BorderSize = 0;
            this->equipamentosBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
                static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(83)));
            this->equipamentosBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
                static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
            this->equipamentosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->equipamentosBtn->Font = (gcnew System::Drawing::Font(L"Noto Sans", 10, System::Drawing::FontStyle::Bold));
            this->equipamentosBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->equipamentosBtn->Location = System::Drawing::Point(3, 3);
            this->equipamentosBtn->Name = L"equipamentosBtn";
            this->equipamentosBtn->Size = System::Drawing::Size(125, 124);
            this->equipamentosBtn->TabIndex = 24;
            this->equipamentosBtn->Text = L"Equipamentos";
            this->equipamentosBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->equipamentosBtn->UseVisualStyleBackColor = false;
            this->equipamentosBtn->Click += gcnew System::EventHandler(this, &TelaDashboard::equipamentosBtn_click);
            // 
            // panel5
            // 
            this->panel5->Controls->Add(this->pictureBox1);
            this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel5->Location = System::Drawing::Point(0, 475);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(784, 87);
            this->panel5->TabIndex = 27;
            // 
            // panel1
            // 
            this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel1->Location = System::Drawing::Point(0, 562);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(784, 22);
            this->panel1->TabIndex = 26;
            // 
            // TelaDashboard
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Linen;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(784, 584);
            this->ControlBox = false;
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->lateral_menu);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MinimumSize = System::Drawing::Size(800, 600);
            this->Name = L"TelaDashboard";
            this->Text = L"p";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &TelaDashboard::Dashboard_Load);
            this->lateral_menu->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->ResumeLayout(false);

		}
#pragma endregion
    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

    }
    private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void equipamentosBtn_click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void notificacoesBtn_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void materiaisBtn_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void funcionariosBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
