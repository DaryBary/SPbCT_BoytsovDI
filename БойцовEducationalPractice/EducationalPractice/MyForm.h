#pragma once
#include "MathLibrary.h"
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <chrono>
#include <Windows.h>



namespace EducationalPractice {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Threading;
	


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DateTime datetime = DateTime::Now;
			this->label2->Text = datetime.ToString();
			
			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;


	private: Thread^ Potok1;
	private: Thread^ Potok2;
	private: Thread^ Potok3;
	private: Thread^ Potok4;
	private: Thread^ Potok5;
	private: Thread^ Potok6;
	private: Thread^ Potok7;
	private: Thread^ Potok8;
	private: Thread^ Potok9;
	private: Thread^ Potok10;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(420, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Бойцов Дмитрий, 590 группа";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(269, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(446, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(312, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сортировка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(33, 100);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(712, 120);
			this->textBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(446, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(312, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Показать файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(336, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Текст";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(37, 263);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(363, 139);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Сортировка";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(446, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(312, 32);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Установить ReadOnly";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 435);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Filename = "old.txt";//вывод файла на экран
	StreamReader^ file = File::OpenText(Filename); 
	textBox1->Text = file->ReadToEnd(); 
}

//функции потоков

public: void vec1() {
	char letter; 
	ifstream f;
	std::vector<char> v1;
	f.open("old.txt");
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v1.push_back(letter);//запись в вектор
	}
	sort(v1.begin(), v1.end());
	reverse(v1.begin(), v1.end());//переворот строки
	writeTo(v1);//запись вектора в файл
	f.close();
}
public: void vec2() {
	char letter;
	ifstream f;
	std::vector<char> v2;
	f.open("old.txt");
	for (int i = 0; i < 10; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v2.push_back(letter);
	}
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());
	writeTo(v2);
	f.close();
}
public: void vec3() {
	char letter;
	ifstream f;
	f.seekg(20);
	std::vector<char> v3;
	f.open("old.txt");
	for (int i = 0; i < 20; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v3.push_back(letter);
	}
	sort(v3.begin(), v3.end());
	reverse(v3.begin(), v3.end());
	writeTo(v3);
	f.close();
}
public: void vec4() {
	char letter;
	ifstream f;
	std::vector<char> v4;
	f.open("old.txt");
	for (int i = 0; i < 30; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v4.push_back(letter);
	}
	sort(v4.begin(), v4.end());
	reverse(v4.begin(), v4.end());
	writeTo(v4);
	f.close();
}
public: void vec5() {
	char letter;
	ifstream f;
	std::vector<char> v5;
	f.open("old.txt");
	for (int i = 0; i < 40; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v5.push_back(letter);
	}
	sort(v5.begin(), v5.end());
	reverse(v5.begin(), v5.end());
	writeTo(v5);
	f.close();
}
public: void vec6() {
	char letter;
	ifstream f;
	std::vector<char> v6;
	f.open("old.txt");
	for (int i = 0; i < 50; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v6.push_back(letter);
	}
	sort(v6.begin(), v6.end());
	reverse(v6.begin(), v6.end());
	writeTo(v6);
	f.close();
}
public: void vec7() {
	char letter;
	ifstream f;
	std::vector<char> v7;
	f.open("old.txt");
	for (int i = 0; i < 60; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v7.push_back(letter);
	}
	sort(v7.begin(), v7.end());
	reverse(v7.begin(), v7.end());
	writeTo(v7);
	f.close();
}
public: void vec8() {
	char letter;
	ifstream f;
	std::vector<char> v8;
	f.open("old.txt");
	for (int i = 0; i < 70; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v8.push_back(letter);
	}
	sort(v8.begin(), v8.end());
	reverse(v8.begin(), v8.end());
	writeTo(v8);
	f.close();
}
public: void vec9() {
	char letter;
	ifstream f;
	std::vector<char> v9;
	f.open("old.txt");
	for (int i = 0; i < 80; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v9.push_back(letter);
	}
	sort(v9.begin(), v9.end());
	reverse(v9.begin(), v9.end());
	writeTo(v9);
	f.close();
}
public: void vec10() {
	char letter;
	ifstream f;
	std::vector<char> v10;
	f.open("old.txt");
	for (int i = 0; i < 90; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v10.push_back(letter);
	}
	sort(v10.begin(), v10.end());
	reverse(v10.begin(), v10.end());
	writeTo(v10);
	f.close();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	char values[100];
	ofstream filestream("final.txt");//перезапись файла
	filestream.close();
	Potok1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec1));//создание потоков
	Potok2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec2));
	Potok3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec3));
	Potok4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec4));
	Potok5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec5));
	Potok6 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec6));
	Potok7 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec7));
	Potok8 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec8));
	Potok9 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec9));
	Potok10 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vec10));
	Potok1->Start();//запуск потоков
	_sleep(50);
	Potok2->Start();
	_sleep(50);
	Potok3->Start();
	_sleep(50);
	Potok4->Start();
	_sleep(50);
	Potok5->Start();
	_sleep(50);
	Potok6->Start();
	_sleep(50);
	Potok7->Start();
	_sleep(50);
	Potok8->Start();
	_sleep(50);
	Potok9->Start();
	_sleep(50);
	Potok10->Start();
	_sleep(50);
	
	String^ Filename = "final.txt";
	StreamReader^ file = File::OpenText(Filename);//Cчитывание файла
	textBox2->Text = file->ReadToEnd();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SetFileAttributesA("final.txt", FILE_ATTRIBUTE_READONLY);//установка флага readonly
}
};
}