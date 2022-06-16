#pragma once
#include <iostream>
#include <cstdio>
#include <streambuf>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
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
			this->Texto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Texto->Location = System::Drawing::Point(29, 9);
			this->Texto->Name = L"Texto";
			this->Texto->Size = System::Drawing::Size(112, 42);
			this->Texto->TabIndex = 0;
			this->Texto->Text = L"Texto";
			this->Texto->Click += gcnew System::EventHandler(this, &MyForm::Texto_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(265, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tokens";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(265, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 29);
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
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->Location = System::Drawing::Point(22, 445);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(113, 20);
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

	if (Inicio == "nada") {
		MessageBox::Show("Debe escoger un archivo", "Aviso");
	}
	else {
		analizar(CMU(Inicio));
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
// Conversores de string
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

	   int relaciona(char c) {
		   if (c >= '0' && c <= '9') {
			   return 2;
		   }

		   switch (c) {
		   case '\n': return 3;
		   case '\t': return 4;
		   case ' ': return 5;
		   case 'E': return 6;
		   case'e': return 7;
		   case '.': return 8;
		   case '"': return 9;
		   case '\'': return 10;
		   case '/': return 11;
		   case '*': return 12;
		   case '+': return 13;
		   case '-': return 14;
		   case '%': return 15;
		   case '<': return 16;
		   case '>': return 17;
		   case '[': return 18;
		   case ']': return 19;
		   case '(': return 20;
		   case ')': return 21;
		   case '{': return 22;
		   case '}': return 23;
		   case '&': return 24;
		   case '=': return 25;
		   case '_': return 26;
		   case '!': return 27;
		   case '|': return 28;
		   case ',': return 29;
		   case ';': return 30;
		   case '#': return 31;
		   }

		   if (c >= 'a' && c <= 'z') {
			   return 1;
		   }
		   if (c >= 'A' && c <= 'Z') {
			   return 0;
		   }

		   return 32;
	   }

	   std::string token(int e) {

		   switch (e) {
		   case 100: return "Palabra reservada \n";
		   case 101: return "Identificador \n";
		   case 102: return "Entero \n";
		   case 103: return "Real \n";
		   case 104: return "Notacion cientifica \n";
		   case 105: return "Suma \n";
		   case 106: return "Resta \n";
		   case 107: return "Multiplicacion \n";
		   case 108: return "Division \n";
		   case 109: return "Asigna \n";
		   case 110: return "Igual \n";
		   case 111: return "Menor \n";
		   case 112: return "Menor igual \n";
		   case 113: return "Mayor \n";
		   case 114: return "Mayor igual \n";
		   case 115: return "Diferente \n";
		   case 116: return "Not \n";
		   case 117: return "And \n";
		   case 118: return "Or \n";
		   case 119: return "Parentesis abre \n";
		   case 120: return "Parentesis cierra \n";
		   case 121: return "Corchete abre \n";
		   case 122: return "Corchete cierra \n";
		   case 123: return "Punto y coma \n";
		   case 124: return "Coma \n";
		   case 125: return "Const char \n";
		   case 126: return "String \n";
		   case 127: return "Line com \n";
		   case 128: return "Modulo \n";
		   case 129: return "Llave abre \n";
		   case 130: return "Llave cierra \n";
		   }
	   }

	   std::string error(int e) {
		   switch (e) {
		   case 500: return "500: Se esperaba digito o e despues del punto \n";
		   case 501: return "501: Se esperaba digito, signo de suma o signo de resta \n";
		   case 502: return "502: Se esperaba digito despues del signo \n";
		   case 503: return "503: Se esperaba otro & \n";
		   case 504: return "504: Se esperaba otro | \n";
		   case 505: return "505: Se esperaba un caracter \n";
		   case 506: return "506: Caracter no esperado \n";
		   case 507: return "507: Se esperaba simbolo de cierre \n";
		   }
	   }

	   int reservadas(string algo) {
		   string reserv[18] = { "class", "endclass", "int", "float",
			   "char", "string", "bool", "if",
			   "else", "do", "while", "input", "output",
			   "def", "to", "break", "loop", "of"};

		   for (int i = 0; i < 18; i++) {
			   if (algo == reserv[i]) {
				   return i;
			   }
		   }

		   return -1;
	   }

// Analiza lo que se ingresa y dependiendo de lo que se trate lanza el mensaje correspondiente
	   void analizar(string file) {
		   int est = 0;
		   int colum, itera;
		   string salidaT;
		   string salidaE;
		   string archive;

		   const int row = 20;
		   const int col = 33;

		   archive = abrirArc(file);

		   int FunTrans[row][col] = { 2	,	1	,	3	,	0	,	0	,	0	,	2	,	1	,	506	,	17	,	15	,	108	,	107	,	105	,	106	,	128	,	10	,	11	,	121	,	122	,	119	,	120	,	129	,	130	,	13	,	9	,	506	,	12	,	14	,	124	,	123	,	19	,	506	,
2	,	1	,	2	,	100	,	100	,	100	,	2	,	1	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	100	,	2	,	100	,	100	,	100	,	100	,	100	,	100	,
2	,	2	,	2	,	101	,	101	,	101	,	2	,	2	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	101	,	2	,	101	,	101	,	101	,	101	,	101	,	101	,
102	,	102	,	3	,	102	,	102	,	102	,	102	,	102	,	4	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,	102	,
500	,	500	,	5	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,	500	,
103	,	103	,	5	,	103	,	103	,	103	,	6	,	6	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,	103	,
501	,	501	,	8	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	7	,	7	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,	501	,
502	,	502	,	8	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,	502	,
104	,	104	,	8	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,	104	,
109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,	110	,	109	,	109	,	109	,	109	,	109	,	109	,	109	,
111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,	112	,	111	,	111	,	111	,	111	,	111	,	111	,	111	,
113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,	114	,	113	,	113	,	113	,	113	,	113	,	113	,	113	,
116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,	115	,	116	,	116	,	116	,	116	,	116	,	116	,	116	,
503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	117	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,	503	,
504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	504	,	118	,	504	,	504	,	504	,	504	,
16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	505	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,	16	,
507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	125	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,	507	,
17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	18	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,	17	,
126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	17	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,	126	,
19	,	19	,	19	,	127	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19	,	19 };

		   int poscero = 0;
		   int posfinal;
		   int i = 0;
		   char chara;
		   string buffer="";
		   std::string xd = "";
		   int ilength = archive.size();

		   while (i < archive.size()) {
			   xd = "";

			   if (i == ilength - 1) {
				   archive.append("\n");
			   }

			   chara = archive.at(i);
			   if(chara !='\n' && chara !=' ' && chara != '\t')
			   {
				   buffer += chara;
			   }
			   

			   colum = relaciona(chara);

			   if (est == 0) {
				   poscero = i;
			   }

			   est = FunTrans[est][colum];

			   if (est >= 100 && est <= 499) {
				   // Revisa si el token es una palabra reservada valida
				   if (est == 100) {

					   if(relaciona(buffer[buffer.size() - 1])!= 0 && relaciona(buffer[buffer.size() - 1]) != 1 && relaciona(buffer[buffer.size() - 1]) != 7 )
					   {
						   buffer = (buffer.substr(0, buffer.size() - 1));
					   }
					   

					   if (reservadas(buffer) == -1) {
						   est = 101;
					   } if (reservadas(buffer) >= 0) {
						   xd = "Codigo " + std::to_string(reservadas(buffer)) + "\n";
					   }
				   }

				   if (est==100 || est == 101 || est == 102 || est == 103 || est == 104 ||  est== 126 || est == 500 || est == 501 || est == 502 || est == 503 || est == 504 || est == 505 || est == 506 || est == 507) {
					   i--;
				   }

				   salidaT += token(est) + xd;
				   est = 0;
				   tokens->Text = CUM(salidaT);
				   posfinal = i;


				   buffer = "";
				   
			   }
			   if (est >= 500) {
				   salidaE += error(est);
				   est = 0;
				   errores->Text = CUM(salidaE);
				   posfinal = i;

			   }

			   i++;
		   }
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
private: System::Void Texto_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
