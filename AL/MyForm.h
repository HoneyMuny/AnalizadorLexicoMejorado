#pragma once
#include <iostream>
#include <cstdio>
#include <streambuf>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>
#include <iterator>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <windows.h>

namespace AL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Texto;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ start;
	private: System::Windows::Forms::RichTextBox^ tokens;
	private: System::Windows::Forms::RichTextBox^ errores;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ nombre;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Texto = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::RichTextBox());
			this->tokens = (gcnew System::Windows::Forms::RichTextBox());
			this->errores = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Texto
			// 
			this->Texto->AutoSize = true;
			this->Texto->Font = (gcnew System::Drawing::Font(L"Romantic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Texto->Location = System::Drawing::Point(29, 9);
			this->Texto->Name = L"Texto";
			this->Texto->Size = System::Drawing::Size(105, 41);
			this->Texto->TabIndex = 0;
			this->Texto->Text = L"Texto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Romantic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label2->Location = System::Drawing::Point(265, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tokens";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Romantic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label3->Location = System::Drawing::Point(265, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Errores";
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(36, 53);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(207, 283);
			this->start->TabIndex = 3;
			this->start->Text = L"";
			this->start->TextChanged += gcnew System::EventHandler(this, &MyForm::start_TextChanged);
			// 
			// tokens
			// 
			this->tokens->Location = System::Drawing::Point(270, 53);
			this->tokens->Name = L"tokens";
			this->tokens->Size = System::Drawing::Size(154, 164);
			this->tokens->TabIndex = 4;
			this->tokens->Text = L"";
			this->tokens->TextChanged += gcnew System::EventHandler(this, &MyForm::tokens_TextChanged);
			// 
			// errores
			// 
			this->errores->Location = System::Drawing::Point(270, 223);
			this->errores->Name = L"errores";
			this->errores->Size = System::Drawing::Size(154, 157);
			this->errores->TabIndex = 5;
			this->errores->Text = L"";
			this->errores->TextChanged += gcnew System::EventHandler(this, &MyForm::errores_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Analizar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(140, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(140, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(36, 383);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 35);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Abrir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Romantic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->nombre->Location = System::Drawing::Point(22, 445);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(105, 18);
			this->nombre->TabIndex = 10;
			this->nombre->Text = L"Archivo en uso";
			this->nombre->Click += gcnew System::EventHandler(this, &MyForm::nombre_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 487);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->errores);
			this->Controls->Add(this->tokens);
			this->Controls->Add(this->start);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Texto);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Analizador Lexico";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		// Declaraciones
		String^ SRegex = "regex.txt";
		String^ MRegex = "mRegex.txt";
		String^ WRegex = "wRegex.txt";
		String^ MWRegex = "mwRegex.txt";
		String^ Inicio = "nada";

		// Boton para abrir un archivo
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog nameFile;

	nameFile.InitialDirectory = "C:";
	nameFile.Title = "Abrir Archivo";
	nameFile.Filter = "Lya Files (*.lya)|*.lya;";
	nameFile.ShowDialog();

	if (nameFile.FileName)
	{
		Inicio = nameFile.FileName;
		nombre->Text = Inicio;
		start->Text = CUM(abrirArc(CMU(Inicio)));
		return;
	}
	System::Windows::Forms::MessageBox::Show("Debe escoger un archivo", "Aviso");
	start->Text = CUM(abrirArc(CMU(Inicio)));
}
	   // Boton para cerrar un archivo
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Inicio == "nada") {
		MessageBox::Show("No hay archivo que cerrar", "Aviso");
	}
	else {
		start->Text = "";
		tokens->Text = "";
		errores->Text = "";
		nombre->Text = "Archivo en uso";
		Inicio = "nada";
	}

}
	   // Boton para analizar el texto
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	std::vector<std::string> rRegex;
	std::vector<std::string> messageRreg;
	std::vector<std::string> wvRegex;
	std::vector<std::string> messageWreg;
	std::vector<std::pair<std::string, std::string>> v;
	std::vector<std::pair<std::string, std::string>> f;

	std::string sRegex = abrirArc(CMU(SRegex));
	std::string mRegex = abrirArc(CMU(MRegex));
	std::string wRegex = abrirArc(CMU(WRegex));
	std::string mwRegex = abrirArc(CMU(MWRegex));
	std::string inicio = abrirArc(CMU(Inicio));

	if (Inicio == "nada") {
		MessageBox::Show("Debe escoger un archivo", "Aviso");
	}
	else {
		rRegex = split(sRegex, '\n');
		messageRreg = split(mRegex, '\n');

		wvRegex = split(wRegex, '\n');
		messageWreg = split(mwRegex, '\n');


		for (int i = 0; i < rRegex.size(); i++) {
			v.push_back(std::pair<std::string, std::string&>(rRegex[i], messageRreg[i]));
		}

		for (int i = 0; i < wvRegex.size(); i++) {
			f.push_back(std::pair<std::string, std::string&>(wvRegex[i], messageWreg[i]));
		}

		analyzeWrong(inicio, f);
		analyzeRight(inicio, v);
	}

}
	   // Boton para guardar los cambios en el texto
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Inicio == "nada") {
		MessageBox::Show("No hay archivo que guardar", "Aviso");
	}
	else {
		std::string storedstr = CMU(start->Text);
		std::ofstream out(CMU(Inicio));
		out << storedstr;
		out.close();
		MessageBox::Show("El archivo ha sido guardado con exito.", "Notificación");
	}
}

	   // Metodos
// Conversores
	   string CMU(System::String^ info)
	   {
		   string result;
		   result = msclr::interop::marshal_as<std::string>(info);
		   return result;
	   }
	   String^ CUM(string info)
	   {
		   String^ result;
		   result = gcnew String(info.c_str());
		   return result;
	   }
// Une dos vectores string en un solo vector de pares, vease une el vector de regex con los mensajes
	   std::vector<std::string> split(std::string text, char delim) {
		   string line;
		   vector<string> vec;
		   stringstream ss(text);
		   while (std::getline(ss, line, delim)) {
			   vec.push_back(line);
		   }
		   return vec;
	   }

// Analiza lo que se ingresa y dependiendo al tipo de regex con el que coincida lanza el mensaje correspondiente
	   void analyzeRight(string str, std::vector<std::pair<std::string, std::string>> vec) {
		   string input = str;
		   string save;
		   string reg;

		   for (auto const& x : vec)
			   reg += "(" + x.first + ")|";

		   reg.pop_back();

		   std::regex re(reg, regex::extended);

		   auto words_begin = sregex_iterator(input.begin(), input.end(), re);
		   auto words_end = sregex_iterator();

		   for (auto it = words_begin; it != words_end; ++it)
		   {
			   size_t index = 0;

			   for (; index < it->size(); ++index)
				   if (!it->str(index + 1).empty()) // Determina el match al que ha llegado
					   break;

			   save = save + vec[index].second + "\n";
		   }

		   tokens->Text = CUM(save);
	   }

	   void analyzeWrong(string str, std::vector<std::pair<std::string, std::string>> vec) {
		   string input = str;
		   string save;
		   string reg;

		   for (auto const& x : vec)
			   reg += "(" + x.first + ")|";

		   reg.pop_back();

		   std::regex re(reg, regex::extended);

		   auto words_begin = sregex_iterator(input.begin(), input.end(), re);
		   auto words_end = sregex_iterator();

		   for (auto it = words_begin; it != words_end; ++it)
		   {
			   size_t index = 0;

			   for (; index < it->size(); ++index)
				   if (!it->str(index + 1).empty()) // Determina el match al que ha llegado
					   break;

			   save = save + vec[index].second + "\n";
		   }

		   errores->Text = CUM(save);
	   }

// Lee los archivos
	   string abrirArc(string archive) {
		   ifstream arch;
		   string info;
		   char chara;

		   arch.open(archive);

		   if (!arch)
		   {
			   cout << "Error: El archivo no ha podido abrirse" << endl;
			   exit(1);
		   }

		   while (arch.get(chara))
		   {
			   info.push_back(chara);
		   }
		   arch.close();

		   return info;
	   }

// Cajas de texto

private: System::Void start_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tokens_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void errores_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nombre_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
