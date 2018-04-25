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
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel4;






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
			this->user_cargo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->user_image = (gcnew System::Windows::Forms::PictureBox());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lateral_menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			//
			// lateral_menu
			//
			this->lateral_menu->BackColor = System::Drawing::Color::BurlyWood;
			this->lateral_menu->Controls->Add(this->panel3);
			this->lateral_menu->Controls->Add(this->panel1);
			this->lateral_menu->Dock = System::Windows::Forms::DockStyle::Top;
			this->lateral_menu->Location = System::Drawing::Point(0, 0);
			this->lateral_menu->Name = L"lateral_menu";
			this->lateral_menu->Size = System::Drawing::Size(964, 40);
			this->lateral_menu->TabIndex = 0;
			this->lateral_menu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel1_Paint);
			//
			// user_cargo
			//
			this->user_cargo->AutoSize = true;
			this->user_cargo->Location = System::Drawing::Point(46, 20);
			this->user_cargo->Name = L"user_cargo";
			this->user_cargo->Size = System::Drawing::Size(60, 13);
			this->user_cargo->TabIndex = 4;
			this->user_cargo->Text = L"user_cargo";
			//
			// pictureBox1
			//
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 34);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			//
			// user_name
			//
			this->user_name->AutoSize = true;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(45, 3);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(98, 20);
			this->user_name->TabIndex = 3;
			this->user_name->Text = L"user_name";
			//
			// user_image
			//
			this->user_image->Location = System::Drawing::Point(3, 3);
			this->user_image->Name = L"user_image";
			this->user_image->Size = System::Drawing::Size(39, 34);
			this->user_image->TabIndex = 7;
			this->user_image->TabStop = false;
			//
			// logout_btn
			//
			this->logout_btn->Dock = System::Windows::Forms::DockStyle::Left;
			this->logout_btn->Location = System::Drawing::Point(0, 0);
			this->logout_btn->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(64, 30);
			this->logout_btn->TabIndex = 1;
			this->logout_btn->Text = L"Sair";
			this->logout_btn->UseVisualStyleBackColor = true;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			//
			// panel2
			//
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->logout_btn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 531);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(964, 30);
			this->panel2->TabIndex = 2;
			//
			// pictureBox2
			//
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(88, 78);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Equipamento";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ordens de Servi�o";
			//
			// pictureBox3
			//
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(119, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(88, 78);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(250, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Materiais";
			//
			// pictureBox4
			//
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(233, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(88, 78);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(352, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Equipamento";
			//
			// pictureBox5
			//
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(345, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(88, 78);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(464, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Equipamento";
			//
			// pictureBox6
			//
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(457, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(88, 78);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Equipamento";
			//
			// pictureBox7
			//
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 123);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(88, 78);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(126, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Equipamento";
			//
			// pictureBox8
			//
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(119, 123);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(88, 78);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(240, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Equipamento";
			//
			// pictureBox9
			//
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(233, 123);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(88, 78);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(352, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Equipamento";
			//
			// pictureBox10
			//
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(345, 123);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(88, 78);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 19;
			this->pictureBox10->TabStop = false;
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(464, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Equipamento";
			//
			// pictureBox11
			//
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(457, 123);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(88, 78);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 21;
			this->pictureBox11->TabStop = false;
			//
			// panel1
			//
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(128, 40);
			this->panel1->TabIndex = 8;
			//
			// panel3
			//
			this->panel3->Controls->Add(this->user_name);
			this->panel3->Controls->Add(this->user_cargo);
			this->panel3->Controls->Add(this->user_image);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(819, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(145, 40);
			this->panel3->TabIndex = 23;
			//
			// panel4
			//
			this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->pictureBox11);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->pictureBox10);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->pictureBox9);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->pictureBox8);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->pictureBox6);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Location = System::Drawing::Point(212, 168);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(553, 227);
			this->panel4->TabIndex = 23;
			//
			// Dashboard
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(964, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->lateral_menu);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->lateral_menu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_image))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void Dashboard_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
