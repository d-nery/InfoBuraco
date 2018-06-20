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
            this->cidadaoPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->buracoPanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // cidadaoPanel
            // 
            this->cidadaoPanel->BackColor = System::Drawing::Color::Beige;
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
            this->cidadaoPanel->Size = System::Drawing::Size(434, 188);
            this->cidadaoPanel->TabIndex = 0;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(9, 57);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(65, 69);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // title_lb
            // 
            this->title_lb->AutoSize = true;
            this->title_lb->Font = (gcnew System::Drawing::Font(L"Hole", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title_lb->ForeColor = System::Drawing::Color::Black;
            this->title_lb->Location = System::Drawing::Point(130, 9);
            this->title_lb->Name = L"title_lb";
            this->title_lb->Size = System::Drawing::Size(178, 28);
            this->title_lb->TabIndex = 8;
            this->title_lb->Text = L"Notificacao";
            this->title_lb->Click += gcnew System::EventHandler(this, &TelaNotificacao::label1_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
            this->pictureBox1->Location = System::Drawing::Point(389, 57);
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
            this->createCitizen_btn->Location = System::Drawing::Point(347, 150);
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
            this->buracoPanel->Controls->Add(this->createCitizen_btn);
            this->buracoPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->buracoPanel->Location = System::Drawing::Point(0, 356);
            this->buracoPanel->Name = L"buracoPanel";
            this->buracoPanel->Size = System::Drawing::Size(434, 185);
            this->buracoPanel->TabIndex = 1;
            // 
            // notifcacaoPanel
            // 
            this->notifcacaoPanel->BackColor = System::Drawing::Color::LightGoldenrodYellow;
            this->notifcacaoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->notifcacaoPanel->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->notifcacaoPanel->Location = System::Drawing::Point(0, 188);
            this->notifcacaoPanel->Name = L"notifcacaoPanel";
            this->notifcacaoPanel->Size = System::Drawing::Size(434, 168);
            this->notifcacaoPanel->TabIndex = 2;
            // 
            // TelaNotificacao
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(434, 541);
            this->Controls->Add(this->notifcacaoPanel);
            this->Controls->Add(this->buracoPanel);
            this->Controls->Add(this->cidadaoPanel);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximumSize = System::Drawing::Size(450, 580);
            this->MinimumSize = System::Drawing::Size(450, 580);
            this->Name = L"TelaNotificacao";
            this->Text = L"Nova Notificação";
            this->cidadaoPanel->ResumeLayout(false);
            this->cidadaoPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->buracoPanel->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

        private: System::Void createCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
        private: System::Void findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
};
}
