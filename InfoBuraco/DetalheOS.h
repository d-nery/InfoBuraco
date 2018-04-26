#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetalheOS
	/// </summary>
	public ref class DetalheOS : public System::Windows::Forms::Form
	{
	public:
		DetalheOS(void)
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
		~DetalheOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::ComboBox^  statusCb;
	private: System::Windows::Forms::Button^  cancelBtn;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel2;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->statusCb = (gcnew System::Windows::Forms::ComboBox());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(36, 129);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 139);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(233, 387);
			this->panel4->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(254, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 387);
			this->panel1->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->statusCb);
			this->panel3->Controls->Add(this->cancelBtn);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->saveBtn);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(15, 75);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(239, 198);
			this->panel3->TabIndex = 6;
			// 
			// statusCb
			// 
			this->statusCb->DisplayMember = L"Status";
			this->statusCb->FormattingEnabled = true;
			this->statusCb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Em andamento", L"Executada" });
			this->statusCb->Location = System::Drawing::Point(0, 0);
			this->statusCb->Name = L"statusCb";
			this->statusCb->Size = System::Drawing::Size(239, 21);
			this->statusCb->TabIndex = 2;
			this->statusCb->Text = L"Status";
			this->statusCb->SelectedIndexChanged += gcnew System::EventHandler(this, &DetalheOS::statusCb_SelectedIndexChanged);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Location = System::Drawing::Point(135, 144);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(104, 54);
			this->cancelBtn->TabIndex = 4;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &DetalheOS::cancelBtn_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(0, 27);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(239, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"Prioridade";
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(0, 144);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(104, 54);
			this->saveBtn->TabIndex = 4;
			this->saveBtn->Text = L"Salvar";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &DetalheOS::saveBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(0, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(0, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 20);
			this->textBox2->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(265, 173);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 5;
			// 
			// DetalheOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 387);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->MaximumSize = System::Drawing::Size(536, 426);
			this->MinimumSize = System::Drawing::Size(536, 426);
			this->Name = L"DetalheOS";
			this->Text = L"Editar Ordem de Servi�o";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancelBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void statusCb_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	};
}
