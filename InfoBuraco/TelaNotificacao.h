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
    private: System::Windows::Forms::Button^  findCitizen_btn;



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
            this->cidadaoPanel = (gcnew System::Windows::Forms::Panel());
            this->createCitizen_btn = (gcnew System::Windows::Forms::Button());
            this->ctzPhone_lb = (gcnew System::Windows::Forms::Label());
            this->ctzEmail_lb = (gcnew System::Windows::Forms::Label());
            this->ctzName_lb = (gcnew System::Windows::Forms::Label());
            this->citizenTelephone_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenEmail_tb = (gcnew System::Windows::Forms::TextBox());
            this->citizenName_tb = (gcnew System::Windows::Forms::TextBox());
            this->buracoPanel = (gcnew System::Windows::Forms::Panel());
            this->notifcacaoPanel = (gcnew System::Windows::Forms::Panel());
            this->findCitizen_btn = (gcnew System::Windows::Forms::Button());
            this->cidadaoPanel->SuspendLayout();
            this->buracoPanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // cidadaoPanel
            // 
            this->cidadaoPanel->Controls->Add(this->findCitizen_btn);
            this->cidadaoPanel->Controls->Add(this->ctzPhone_lb);
            this->cidadaoPanel->Controls->Add(this->ctzEmail_lb);
            this->cidadaoPanel->Controls->Add(this->ctzName_lb);
            this->cidadaoPanel->Controls->Add(this->citizenTelephone_tb);
            this->cidadaoPanel->Controls->Add(this->citizenEmail_tb);
            this->cidadaoPanel->Controls->Add(this->citizenName_tb);
            this->cidadaoPanel->Dock = System::Windows::Forms::DockStyle::Top;
            this->cidadaoPanel->Location = System::Drawing::Point(0, 0);
            this->cidadaoPanel->Name = L"cidadaoPanel";
            this->cidadaoPanel->Size = System::Drawing::Size(447, 197);
            this->cidadaoPanel->TabIndex = 0;
            // 
            // createCitizen_btn
            // 
            this->createCitizen_btn->Location = System::Drawing::Point(360, 137);
            this->createCitizen_btn->Name = L"createCitizen_btn";
            this->createCitizen_btn->Size = System::Drawing::Size(75, 23);
            this->createCitizen_btn->TabIndex = 6;
            this->createCitizen_btn->Text = L"Cadastrar";
            this->createCitizen_btn->UseVisualStyleBackColor = true;
            this->createCitizen_btn->Click += gcnew System::EventHandler(this, &TelaNotificacao::createCitizenBtn_Click);
            // 
            // ctzPhone_lb
            // 
            this->ctzPhone_lb->AutoSize = true;
            this->ctzPhone_lb->Location = System::Drawing::Point(17, 93);
            this->ctzPhone_lb->Name = L"ctzPhone_lb";
            this->ctzPhone_lb->Size = System::Drawing::Size(49, 13);
            this->ctzPhone_lb->TabIndex = 5;
            this->ctzPhone_lb->Text = L"Telefone";
            // 
            // ctzEmail_lb
            // 
            this->ctzEmail_lb->AutoSize = true;
            this->ctzEmail_lb->Location = System::Drawing::Point(31, 67);
            this->ctzEmail_lb->Name = L"ctzEmail_lb";
            this->ctzEmail_lb->Size = System::Drawing::Size(35, 13);
            this->ctzEmail_lb->TabIndex = 4;
            this->ctzEmail_lb->Text = L"E-mail";
            // 
            // ctzName_lb
            // 
            this->ctzName_lb->AutoSize = true;
            this->ctzName_lb->Location = System::Drawing::Point(31, 41);
            this->ctzName_lb->Name = L"ctzName_lb";
            this->ctzName_lb->Size = System::Drawing::Size(35, 13);
            this->ctzName_lb->TabIndex = 3;
            this->ctzName_lb->Text = L"Nome";
            // 
            // citizenTelephone_tb
            // 
            this->citizenTelephone_tb->Location = System::Drawing::Point(72, 90);
            this->citizenTelephone_tb->Name = L"citizenTelephone_tb";
            this->citizenTelephone_tb->Size = System::Drawing::Size(100, 20);
            this->citizenTelephone_tb->TabIndex = 2;
            // 
            // citizenEmail_tb
            // 
            this->citizenEmail_tb->Location = System::Drawing::Point(72, 64);
            this->citizenEmail_tb->Name = L"citizenEmail_tb";
            this->citizenEmail_tb->Size = System::Drawing::Size(100, 20);
            this->citizenEmail_tb->TabIndex = 1;
            // 
            // citizenName_tb
            // 
            this->citizenName_tb->Location = System::Drawing::Point(72, 38);
            this->citizenName_tb->Name = L"citizenName_tb";
            this->citizenName_tb->Size = System::Drawing::Size(100, 20);
            this->citizenName_tb->TabIndex = 0;
            // 
            // buracoPanel
            // 
            this->buracoPanel->Controls->Add(this->createCitizen_btn);
            this->buracoPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->buracoPanel->Location = System::Drawing::Point(0, 381);
            this->buracoPanel->Name = L"buracoPanel";
            this->buracoPanel->Size = System::Drawing::Size(447, 172);
            this->buracoPanel->TabIndex = 1;
            // 
            // notifcacaoPanel
            // 
            this->notifcacaoPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->notifcacaoPanel->Location = System::Drawing::Point(0, 197);
            this->notifcacaoPanel->Name = L"notifcacaoPanel";
            this->notifcacaoPanel->Size = System::Drawing::Size(447, 184);
            this->notifcacaoPanel->TabIndex = 2;
            // 
            // findCitizen_btn
            // 
            this->findCitizen_btn->Location = System::Drawing::Point(178, 36);
            this->findCitizen_btn->Name = L"findCitizen_btn";
            this->findCitizen_btn->Size = System::Drawing::Size(75, 23);
            this->findCitizen_btn->TabIndex = 6;
            this->findCitizen_btn->Text = L"Buscar";
            this->findCitizen_btn->UseVisualStyleBackColor = true;
            this->findCitizen_btn->Click += gcnew System::EventHandler(this, &TelaNotificacao::findCitizenBtn_Click);
            // 
            // TelaNotificacao
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(447, 553);
            this->Controls->Add(this->notifcacaoPanel);
            this->Controls->Add(this->buracoPanel);
            this->Controls->Add(this->cidadaoPanel);
            this->Name = L"TelaNotificacao";
            this->Text = L"TelaNotificacao";
            this->cidadaoPanel->ResumeLayout(false);
            this->cidadaoPanel->PerformLayout();
            this->buracoPanel->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

        private: System::Void createCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
        private: System::Void findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
