#pragma once

#include "Usuario.h"

namespace InfoBuraco {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TelaNovoDespacho : public System::Windows::Forms::Form {
    public:
        TelaNovoDespacho(Usuario* usuario_logado) {
            InitializeComponent();

            this->usuario_logado = usuario_logado;
        }

    protected:
        ~TelaNovoDespacho() {
            if (components) {
                delete components;
            }
        }
    
    private:
        Usuario * usuario_logado;

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
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNovoDespacho::typeid));
            this->SuspendLayout();
            // 
            // TelaNovoDespacho
            // 
            this->ClientSize = System::Drawing::Size(774, 522);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"TelaNovoDespacho";
            this->Text = L"Novo Despacho";
            this->ResumeLayout(false);

        }
#pragma endregion
    };
}