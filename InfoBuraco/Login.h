#pragma once

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Login
    /// </summary>
    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void)
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
        ~Login()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^  user_tb;
    private: System::Windows::Forms::TextBox^  pass_tb;
    protected:

    protected:

    private: System::Windows::Forms::Button^  login_btn;
    private: System::Windows::Forms::Button^  cancelBtn;
    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::PictureBox^  logo_pb;
    private: System::Windows::Forms::Label^  pass_lb;
    private: System::Windows::Forms::Label^  user_lb;


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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
            this->user_tb = (gcnew System::Windows::Forms::TextBox());
            this->pass_tb = (gcnew System::Windows::Forms::TextBox());
            this->login_btn = (gcnew System::Windows::Forms::Button());
            this->cancelBtn = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pass_lb = (gcnew System::Windows::Forms::Label());
            this->user_lb = (gcnew System::Windows::Forms::Label());
            this->logo_pb = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_pb))->BeginInit();
            this->SuspendLayout();
            // 
            // user_tb
            // 
            this->user_tb->Location = System::Drawing::Point(52, 74);
            this->user_tb->Name = L"user_tb";
            this->user_tb->Size = System::Drawing::Size(158, 20);
            this->user_tb->TabIndex = 0;
            // 
            // pass_tb
            // 
            this->pass_tb->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->pass_tb->Location = System::Drawing::Point(52, 99);
            this->pass_tb->Name = L"pass_tb";
            this->pass_tb->PasswordChar = '*';
            this->pass_tb->Size = System::Drawing::Size(158, 20);
            this->pass_tb->TabIndex = 1;
            this->pass_tb->WordWrap = false;
            // 
            // login_btn
            // 
            this->login_btn->Location = System::Drawing::Point(3, 125);
            this->login_btn->Name = L"login_btn";
            this->login_btn->Size = System::Drawing::Size(89, 24);
            this->login_btn->TabIndex = 2;
            this->login_btn->Text = L"Login";
            this->login_btn->UseVisualStyleBackColor = true;
            this->login_btn->Click += gcnew System::EventHandler(this, &Login::login_bnt_Click);
            // 
            // cancelBtn
            // 
            this->cancelBtn->Location = System::Drawing::Point(121, 125);
            this->cancelBtn->Name = L"cancelBtn";
            this->cancelBtn->Size = System::Drawing::Size(89, 24);
            this->cancelBtn->TabIndex = 3;
            this->cancelBtn->Text = L"Close";
            this->cancelBtn->UseVisualStyleBackColor = true;
            this->cancelBtn->Click += gcnew System::EventHandler(this, &Login::cancel_btn_click);
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel1->Controls->Add(this->pass_lb);
            this->panel1->Controls->Add(this->user_lb);
            this->panel1->Controls->Add(this->logo_pb);
            this->panel1->Controls->Add(this->user_tb);
            this->panel1->Controls->Add(this->pass_tb);
            this->panel1->Controls->Add(this->login_btn);
            this->panel1->Controls->Add(this->cancelBtn);
            this->panel1->Location = System::Drawing::Point(58, 37);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(213, 152);
            this->panel1->TabIndex = 4;
            // 
            // pass_lb
            // 
            this->pass_lb->AutoSize = true;
            this->pass_lb->Location = System::Drawing::Point(3, 102);
            this->pass_lb->Name = L"pass_lb";
            this->pass_lb->Size = System::Drawing::Size(38, 13);
            this->pass_lb->TabIndex = 6;
            this->pass_lb->Text = L"Senha";
            // 
            // user_lb
            // 
            this->user_lb->AutoSize = true;
            this->user_lb->Location = System::Drawing::Point(3, 77);
            this->user_lb->Name = L"user_lb";
            this->user_lb->Size = System::Drawing::Size(43, 13);
            this->user_lb->TabIndex = 5;
            this->user_lb->Text = L"Usuário";
            // 
            // logo_pb
            // 
            this->logo_pb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_pb.Image")));
            this->logo_pb->Location = System::Drawing::Point(3, 3);
            this->logo_pb->Name = L"logo_pb";
            this->logo_pb->Size = System::Drawing::Size(207, 65);
            this->logo_pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->logo_pb->TabIndex = 4;
            this->logo_pb->TabStop = false;
            // 
            // Login
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(324, 231);
            this->Controls->Add(this->panel1);
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(340, 270);
            this->MinimumSize = System::Drawing::Size(340, 270);
            this->Name = L"Login";
            this->Text = L"Login";
            this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_pb))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void login_bnt_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void cancel_btn_click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
