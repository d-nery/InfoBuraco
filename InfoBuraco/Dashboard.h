#pragma once
#include "Login.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Sum�rio para Dashboard
    /// </summary>
    public ref class Dashboard : public System::Windows::Forms::Form
    {
    public:
        Dashboard(String^ user, String^ cargo, Login^ org_login)
        {
            InitializeComponent();
            //
            //TODO: Adicione o c�digo do construtor aqui
            //

            this->user_name->Text = user;
            this->user_cargo->Text = cargo;
            this->original_login = org_login;
        }

    protected:
        /// <summary>
        /// Limpar os recursos que est�o sendo usados.
        /// </summary>
        ~Dashboard()
        {
            if (components)
            {
                delete components;
            }
        }

    private: Login^ original_login;

    private: System::Windows::Forms::Panel^  lateral_menu;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::Button^  logout_btn;
    private: System::Windows::Forms::Label^  user_name;
    private: System::Windows::Forms::Label^  user_cargo;
    private: System::Windows::Forms::PictureBox^  user_image;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: System::Windows::Forms::Panel^  panel3;
    private: System::Windows::Forms::Panel^  panel4;
    private: System::Windows::Forms::PictureBox^  pictureBox9;
    private: System::Windows::Forms::PictureBox^  pictureBox8;
    private: System::Windows::Forms::PictureBox^  pictureBox7;
    private: System::Windows::Forms::PictureBox^  pictureBox6;
    private: System::Windows::Forms::PictureBox^  pictureBox5;
    private: System::Windows::Forms::PictureBox^  pictureBox4;
    private: System::Windows::Forms::PictureBox^  pictureBox3;

    protected:

    protected:

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
            this->lateral_menu = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->logout_btn = (gcnew System::Windows::Forms::Button());
            this->user_name = (gcnew System::Windows::Forms::Label());
            this->user_cargo = (gcnew System::Windows::Forms::Label());
            this->user_image = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->lateral_menu->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // lateral_menu
            // 
            this->lateral_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
                static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->lateral_menu->Controls->Add(this->panel3);
            this->lateral_menu->Dock = System::Windows::Forms::DockStyle::Top;
            this->lateral_menu->Location = System::Drawing::Point(0, 0);
            this->lateral_menu->Name = L"lateral_menu";
            this->lateral_menu->Size = System::Drawing::Size(784, 38);
            this->lateral_menu->TabIndex = 0;
            this->lateral_menu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel1_Paint);
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
            this->logout_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
                static_cast<System::Int32>(static_cast<System::Byte>(57)));
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
            this->logout_btn->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
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
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->ImageLocation = L"";
            this->pictureBox1->Location = System::Drawing::Point(253, 446);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(280, 80);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(3, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(125, 121);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &Dashboard::equipamentosBtn_click);
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->Controls->Add(this->pictureBox9);
            this->panel4->Controls->Add(this->pictureBox8);
            this->panel4->Controls->Add(this->pictureBox7);
            this->panel4->Controls->Add(this->pictureBox6);
            this->panel4->Controls->Add(this->pictureBox5);
            this->panel4->Controls->Add(this->pictureBox4);
            this->panel4->Controls->Add(this->pictureBox3);
            this->panel4->Controls->Add(this->pictureBox2);
            this->panel4->Location = System::Drawing::Point(105, 95);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(585, 260);
            this->panel4->TabIndex = 23;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(459, 137);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(125, 121);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 10;
            this->pictureBox9->TabStop = false;
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(303, 137);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(125, 121);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 9;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(153, 137);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(125, 121);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 8;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(3, 137);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(125, 121);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 7;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(459, 3);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(125, 121);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 6;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(303, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(125, 121);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 5;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(153, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(125, 121);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 4;
            this->pictureBox3->TabStop = false;
            // 
            // Dashboard
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::BurlyWood;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(784, 561);
            this->ControlBox = false;
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->lateral_menu);
            this->MinimumSize = System::Drawing::Size(800, 600);
            this->Name = L"Dashboard";
            this->Text = L"Dashboard";
            this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
            this->lateral_menu->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

    }
    private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void equipamentosBtn_click(System::Object^ sender, System::EventArgs^ e);
};
}
