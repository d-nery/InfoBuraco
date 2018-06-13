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
            this->buracoPanel = (gcnew System::Windows::Forms::Panel());
            this->notifcacaoPanel = (gcnew System::Windows::Forms::Panel());
            this->SuspendLayout();
            // 
            // cidadaoPanel
            // 
            this->cidadaoPanel->Dock = System::Windows::Forms::DockStyle::Top;
            this->cidadaoPanel->Location = System::Drawing::Point(0, 0);
            this->cidadaoPanel->Name = L"cidadaoPanel";
            this->cidadaoPanel->Size = System::Drawing::Size(447, 197);
            this->cidadaoPanel->TabIndex = 0;
            // 
            // buracoPanel
            // 
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
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
