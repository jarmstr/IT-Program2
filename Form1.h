#pragma once

namespace ArmstrongProgramSample2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox3;











	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::Button^  DisplayButton;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  ManInputBox;



	private: System::Windows::Forms::TextBox^  TypeInputBox;

	private: System::Windows::Forms::TextBox^  NumberInputBox;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  PriceInputBox;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  quantityInputBox;

	private: System::Windows::Forms::TextBox^  markupInputBox;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  CountOutputBox;

	private: System::Windows::Forms::TextBox^  RetailOutputBox;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  ManuIDOutputBox;
	private: System::Windows::Forms::TextBox^  DescriptionOutputBox;





	private: System::Windows::Forms::TextBox^  NumberOutputBox;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Label^  label16;


	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CountOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->RetailOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ManuIDOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->DescriptionOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->NumberOutputBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->quantityInputBox = (gcnew System::Windows::Forms::TextBox());
			this->markupInputBox = (gcnew System::Windows::Forms::TextBox());
			this->PriceInputBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ManInputBox = (gcnew System::Windows::Forms::TextBox());
			this->TypeInputBox = (gcnew System::Windows::Forms::TextBox());
			this->NumberInputBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->DisplayButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(831, 605);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(269, 72);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(241, 33);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Inventory System";
			this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(256, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(507, 42);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Teddy Bear Supply Company";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 115);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->CountOutputBox);
			this->groupBox4->Controls->Add(this->RetailOutputBox);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->ManuIDOutputBox);
			this->groupBox4->Controls->Add(this->DescriptionOutputBox);
			this->groupBox4->Controls->Add(this->NumberOutputBox);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(439, 134);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(351, 449);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Bear Output Data";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &Form1::groupBox4_Enter);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Quantity in Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Manufacturer\'s ID Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Description";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(39, 41);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(171, 24);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Product ID Number";
			// 
			// CountOutputBox
			// 
			this->CountOutputBox->Location = System::Drawing::Point(43, 346);
			this->CountOutputBox->Name = L"CountOutputBox";
			this->CountOutputBox->Size = System::Drawing::Size(269, 29);
			this->CountOutputBox->TabIndex = 9;
			// 
			// RetailOutputBox
			// 
			this->RetailOutputBox->Location = System::Drawing::Point(43, 275);
			this->RetailOutputBox->Name = L"RetailOutputBox";
			this->RetailOutputBox->Size = System::Drawing::Size(269, 29);
			this->RetailOutputBox->TabIndex = 7;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(39, 248);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 24);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Retail Price";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// ManuIDOutputBox
			// 
			this->ManuIDOutputBox->Location = System::Drawing::Point(43, 206);
			this->ManuIDOutputBox->Name = L"ManuIDOutputBox";
			this->ManuIDOutputBox->Size = System::Drawing::Size(269, 29);
			this->ManuIDOutputBox->TabIndex = 2;
			// 
			// DescriptionOutputBox
			// 
			this->DescriptionOutputBox->Location = System::Drawing::Point(43, 132);
			this->DescriptionOutputBox->Name = L"DescriptionOutputBox";
			this->DescriptionOutputBox->Size = System::Drawing::Size(269, 29);
			this->DescriptionOutputBox->TabIndex = 1;
			// 
			// NumberOutputBox
			// 
			this->NumberOutputBox->Location = System::Drawing::Point(43, 68);
			this->NumberOutputBox->Name = L"NumberOutputBox";
			this->NumberOutputBox->Size = System::Drawing::Size(269, 29);
			this->NumberOutputBox->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->quantityInputBox);
			this->groupBox1->Controls->Add(this->markupInputBox);
			this->groupBox1->Controls->Add(this->PriceInputBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->ManInputBox);
			this->groupBox1->Controls->Add(this->TypeInputBox);
			this->groupBox1->Controls->Add(this->NumberInputBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 134);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 449);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bear Input Data";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(39, 386);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(149, 24);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Quantity in Stock";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(39, 319);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(183, 24);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Mark-Up Percentage";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(229, 24);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Manufacturer\'s ID Number";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Wholesale Price";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// quantityInputBox
			// 
			this->quantityInputBox->Location = System::Drawing::Point(43, 413);
			this->quantityInputBox->Name = L"quantityInputBox";
			this->quantityInputBox->Size = System::Drawing::Size(224, 29);
			this->quantityInputBox->TabIndex = 8;
			// 
			// markupInputBox
			// 
			this->markupInputBox->Location = System::Drawing::Point(43, 346);
			this->markupInputBox->Name = L"markupInputBox";
			this->markupInputBox->Size = System::Drawing::Size(224, 29);
			this->markupInputBox->TabIndex = 7;
			// 
			// PriceInputBox
			// 
			this->PriceInputBox->Location = System::Drawing::Point(43, 275);
			this->PriceInputBox->Name = L"PriceInputBox";
			this->PriceInputBox->Size = System::Drawing::Size(224, 29);
			this->PriceInputBox->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Description";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Product ID Number";
			// 
			// ManInputBox
			// 
			this->ManInputBox->Location = System::Drawing::Point(43, 206);
			this->ManInputBox->Name = L"ManInputBox";
			this->ManInputBox->Size = System::Drawing::Size(224, 29);
			this->ManInputBox->TabIndex = 2;
			// 
			// TypeInputBox
			// 
			this->TypeInputBox->Location = System::Drawing::Point(43, 132);
			this->TypeInputBox->Name = L"TypeInputBox";
			this->TypeInputBox->Size = System::Drawing::Size(224, 29);
			this->TypeInputBox->TabIndex = 1;
			this->TypeInputBox->TextChanged += gcnew System::EventHandler(this, &Form1::TypeInputBox_TextChanged);
			// 
			// NumberInputBox
			// 
			this->NumberInputBox->Location = System::Drawing::Point(43, 68);
			this->NumberInputBox->Name = L"NumberInputBox";
			this->NumberInputBox->ShortcutsEnabled = false;
			this->NumberInputBox->Size = System::Drawing::Size(224, 29);
			this->NumberInputBox->TabIndex = 0;
			this->NumberInputBox->Click += gcnew System::EventHandler(this, &Form1::NumberInputBox_Click);
			this->NumberInputBox->TextChanged += gcnew System::EventHandler(this, &Form1::TypeInputBox_TextChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->ExitButton);
			this->groupBox3->Controls->Add(this->DisplayButton);
			this->groupBox3->Location = System::Drawing::Point(34, 623);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(766, 101);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(629, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 18);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Exit Program";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 40);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Display Bear \r\nInventory Information";
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(452, 31);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(160, 52);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"&Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Form1::ExitButton_Click);
			// 
			// DisplayButton
			// 
			this->DisplayButton->Location = System::Drawing::Point(17, 31);
			this->DisplayButton->Name = L"DisplayButton";
			this->DisplayButton->Size = System::Drawing::Size(160, 52);
			this->DisplayButton->TabIndex = 1;
			this->DisplayButton->Text = L"&Display";
			this->DisplayButton->UseVisualStyleBackColor = true;
			this->DisplayButton->Click += gcnew System::EventHandler(this, &Form1::DisplayButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(854, 733);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->HelpButton = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teddy Bear Supply Company";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }


private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Exit the application when the exit button is clicked
			 Application::Exit();
		 }
private: System::Void DisplayButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			//Declared variables to hold text box entries
			int inputID = 0;
			int inputManuID;
			char* inputDescription;
			double inputPrice = 0;
			double inputMarkUp = 0;
			int inputCount = 0; 

			//Declare System::String to hold converted character array
			String^ typeString;
			
			//Extract and convert entries from input text boxes
			inputID = Convert::ToInt32(NumberInputBox->Text);
			inputManuID = Convert::ToInt32(ManInputBox->Text); 
			inputDescription = (char*)(void*)Marshal::StringToHGlobalAnsi(TypeInputBox->Text);
			inputPrice = Convert::ToDouble(PriceInputBox->Text);
			inputMarkUp = Convert::ToDouble(markupInputBox->Text);
			inputCount = Convert::ToInt32(quantityInputBox->Text);

			//Create an instance of the the ItemInventory class
			ItemInventory InventoryItem( inputID,  inputManuID ,inputDescription, inputPrice, inputMarkUp, inputCount);

			//Convert and display inventory entries to appropriate text boxes
			NumberOutputBox->Text =  Convert::ToString(InventoryItem.getIDnumber());
			ManuIDOutputBox->Text =  Convert::ToString(InventoryItem.getManufacturerID());
			typeString = gcnew String(InventoryItem.getProductD());
			DescriptionOutputBox->Text = typeString;
			RetailOutputBox->Text = ( (Decimal)(InventoryItem.calculateMarkup())).ToString("c");
			CountOutputBox->Text = Convert::ToString(InventoryItem.getCount());




		 }
private: System::Void NumberInputBox_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//statements that clear all text boxes when the first text box is clicked
		NumberInputBox->Clear();
		ManInputBox->Clear(); 
		TypeInputBox->Clear();
		PriceInputBox->Clear();
		markupInputBox->Clear();
		quantityInputBox->Clear();
		NumberOutputBox->Clear();
		ManuIDOutputBox->Clear();
		DescriptionOutputBox->Clear();
		RetailOutputBox->Clear();
		CountOutputBox->Clear();

		 }
		



private: System::Void TypeInputBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

