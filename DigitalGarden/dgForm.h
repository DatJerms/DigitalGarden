
#include "carrot.h"
#include "crops.h"
#include "land.h"
#include "corn.h"
#include "potato.h"
#include "tool.h"
#include <new>
#include <string>
//#include <future>

#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>


namespace DigitalGarden {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Summary for dgForm
	/// </summary>
	public ref class dgForm : public System::Windows::Forms::Form
	{
	public:

		bool carrotFLAG = false;
		bool cornFLAG = false;
		bool potatoFLAG = false;
		bool machineFLAG = false;
		bool hoeFLAG = false;
		bool shovelFLAG = false;
		tool farmtools();


		Image^ seedling = Image::FromFile("D:\\resource/slingLand.png");
		Image^ seed = Image::FromFile("D:\\resource/seedLand.png");
		Image^ caCrop = Image::FromFile("D:\\resource/caLand.png");
		Image^ coCrop = Image::FromFile("D:\\resource/coLand.png");
		Image^ poCrop = Image::FromFile("D:\\resource/pLand.png");

		// Configure a timer to draw graphics updates.


		//System::Drawing::Bitmap seedling = gcnew System::Drawing::Bitmap("resource\slingLand.png");

	private: System::Windows::Forms::PrintDialog^ printDialog1;

	public:

		dgForm(void)
		{
			InitializeComponent();
			//imageList1 = gcnew ImageList();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dgForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ toolsPanel;
	private: System::Windows::Forms::Label^ toolsLabel;


	private: System::Windows::Forms::Button^ shovelBtn;
	private: System::Windows::Forms::Button^ hoeBtn;

	private: System::Windows::Forms::RichTextBox^ rtTools;
	private: System::Windows::Forms::Button^ machineBtn;
	private: System::Windows::Forms::Button^ caBtn;
	private: System::Windows::Forms::Button^ pBtn;
	private: System::Windows::Forms::Button^ coBtn;
	private: System::Windows::Forms::RichTextBox^ rtCrops;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ landPlot1Btn;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ rtStates;
	private: System::Windows::Forms::Button^ landPlot3Btn;

	private: System::Windows::Forms::Button^ landPlot2Btn;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::RichTextBox^ rtWallet;




	private: System::Windows::Forms::RichTextBox^ rtDuBarMac;
	private: System::Windows::Forms::Button^ dResetBtn;


	private: System::Windows::Forms::RichTextBox^ rtDuBarShov;
	private: System::Windows::Forms::RichTextBox^ rtDuBarHoe;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dgForm::typeid));
			this->toolsPanel = (gcnew System::Windows::Forms::Panel());
			this->dResetBtn = (gcnew System::Windows::Forms::Button());
			this->rtDuBarShov = (gcnew System::Windows::Forms::RichTextBox());
			this->rtDuBarHoe = (gcnew System::Windows::Forms::RichTextBox());
			this->rtDuBarMac = (gcnew System::Windows::Forms::RichTextBox());
			this->machineBtn = (gcnew System::Windows::Forms::Button());
			this->rtTools = (gcnew System::Windows::Forms::RichTextBox());
			this->shovelBtn = (gcnew System::Windows::Forms::Button());
			this->hoeBtn = (gcnew System::Windows::Forms::Button());
			this->toolsLabel = (gcnew System::Windows::Forms::Label());
			this->caBtn = (gcnew System::Windows::Forms::Button());
			this->pBtn = (gcnew System::Windows::Forms::Button());
			this->coBtn = (gcnew System::Windows::Forms::Button());
			this->rtCrops = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->landPlot3Btn = (gcnew System::Windows::Forms::Button());
			this->landPlot2Btn = (gcnew System::Windows::Forms::Button());
			this->landPlot1Btn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rtStates = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->rtWallet = (gcnew System::Windows::Forms::RichTextBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->toolsPanel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// toolsPanel
			// 
			this->toolsPanel->BackColor = System::Drawing::Color::Transparent;
			this->toolsPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolsPanel.BackgroundImage")));
			this->toolsPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolsPanel->Controls->Add(this->dResetBtn);
			this->toolsPanel->Controls->Add(this->rtDuBarShov);
			this->toolsPanel->Controls->Add(this->rtDuBarHoe);
			this->toolsPanel->Controls->Add(this->rtDuBarMac);
			this->toolsPanel->Controls->Add(this->machineBtn);
			this->toolsPanel->Controls->Add(this->rtTools);
			this->toolsPanel->Controls->Add(this->shovelBtn);
			this->toolsPanel->Controls->Add(this->hoeBtn);
			this->toolsPanel->Controls->Add(this->toolsLabel);
			this->toolsPanel->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->toolsPanel->Location = System::Drawing::Point(15, 118);
			this->toolsPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->toolsPanel->Name = L"toolsPanel";
			this->toolsPanel->Size = System::Drawing::Size(173, 582);
			this->toolsPanel->TabIndex = 0;
			// 
			// dResetBtn
			// 
			this->dResetBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->dResetBtn->FlatAppearance->BorderSize = 0;
			this->dResetBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dResetBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dResetBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dResetBtn->Location = System::Drawing::Point(47, 468);
			this->dResetBtn->Name = L"dResetBtn";
			this->dResetBtn->Size = System::Drawing::Size(80, 35);
			this->dResetBtn->TabIndex = 13;
			this->dResetBtn->Text = L"Reset";
			this->dResetBtn->UseVisualStyleBackColor = false;
			this->dResetBtn->Click += gcnew System::EventHandler(this, &dgForm::mResetDBtn_Click);
			// 
			// rtDuBarShov
			// 
			this->rtDuBarShov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->rtDuBarShov->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtDuBarShov->ForeColor = System::Drawing::Color::Red;
			this->rtDuBarShov->Location = System::Drawing::Point(47, 415);
			this->rtDuBarShov->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtDuBarShov->Name = L"rtDuBarShov";
			this->rtDuBarShov->Size = System::Drawing::Size(80, 27);
			this->rtDuBarShov->TabIndex = 9;
			this->rtDuBarShov->Text = L"";
			// 
			// rtDuBarHoe
			// 
			this->rtDuBarHoe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->rtDuBarHoe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtDuBarHoe->ForeColor = System::Drawing::Color::Red;
			this->rtDuBarHoe->Location = System::Drawing::Point(47, 286);
			this->rtDuBarHoe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtDuBarHoe->Name = L"rtDuBarHoe";
			this->rtDuBarHoe->Size = System::Drawing::Size(80, 27);
			this->rtDuBarHoe->TabIndex = 8;
			this->rtDuBarHoe->Text = L"";
			// 
			// rtDuBarMac
			// 
			this->rtDuBarMac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->rtDuBarMac->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtDuBarMac->ForeColor = System::Drawing::Color::Red;
			this->rtDuBarMac->Location = System::Drawing::Point(47, 158);
			this->rtDuBarMac->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtDuBarMac->Name = L"rtDuBarMac";
			this->rtDuBarMac->Size = System::Drawing::Size(80, 27);
			this->rtDuBarMac->TabIndex = 7;
			this->rtDuBarMac->Text = L"";
			// 
			// machineBtn
			// 
			this->machineBtn->BackColor = System::Drawing::Color::Transparent;
			this->machineBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"machineBtn.BackgroundImage")));
			this->machineBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->machineBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->machineBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->machineBtn->FlatAppearance->BorderSize = 0;
			this->machineBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->machineBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->machineBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->machineBtn->Location = System::Drawing::Point(47, 78);
			this->machineBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->machineBtn->Name = L"machineBtn";
			this->machineBtn->Size = System::Drawing::Size(80, 80);
			this->machineBtn->TabIndex = 4;
			this->machineBtn->UseVisualStyleBackColor = false;
			this->machineBtn->Click += gcnew System::EventHandler(this, &dgForm::machineBtn_Click_1);
			// 
			// rtTools
			// 
			this->rtTools->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->rtTools->Font = (gcnew System::Drawing::Font(L"Corbel", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtTools->ForeColor = System::Drawing::Color::Red;
			this->rtTools->Location = System::Drawing::Point(29, 533);
			this->rtTools->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtTools->Name = L"rtTools";
			this->rtTools->Size = System::Drawing::Size(117, 27);
			this->rtTools->TabIndex = 3;
			this->rtTools->Text = L"";
			// 
			// shovelBtn
			// 
			this->shovelBtn->BackColor = System::Drawing::Color::Transparent;
			this->shovelBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shovelBtn.BackgroundImage")));
			this->shovelBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->shovelBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->shovelBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->shovelBtn->FlatAppearance->BorderSize = 0;
			this->shovelBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->shovelBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->shovelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->shovelBtn->Location = System::Drawing::Point(47, 335);
			this->shovelBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->shovelBtn->Name = L"shovelBtn";
			this->shovelBtn->Size = System::Drawing::Size(80, 80);
			this->shovelBtn->TabIndex = 3;
			this->shovelBtn->UseVisualStyleBackColor = false;
			this->shovelBtn->Click += gcnew System::EventHandler(this, &dgForm::shovelBtn_Click);
			// 
			// hoeBtn
			// 
			this->hoeBtn->BackColor = System::Drawing::Color::Transparent;
			this->hoeBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hoeBtn.BackgroundImage")));
			this->hoeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hoeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hoeBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->hoeBtn->FlatAppearance->BorderSize = 0;
			this->hoeBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->hoeBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->hoeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->hoeBtn->Location = System::Drawing::Point(47, 206);
			this->hoeBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hoeBtn->Name = L"hoeBtn";
			this->hoeBtn->Size = System::Drawing::Size(80, 80);
			this->hoeBtn->TabIndex = 2;
			this->hoeBtn->UseVisualStyleBackColor = false;
			this->hoeBtn->Click += gcnew System::EventHandler(this, &dgForm::hoeBtn_Click);
			// 
			// toolsLabel
			// 
			this->toolsLabel->AutoSize = true;
			this->toolsLabel->Font = (gcnew System::Drawing::Font(L"Corbel", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolsLabel->Location = System::Drawing::Point(41, 11);
			this->toolsLabel->Name = L"toolsLabel";
			this->toolsLabel->Size = System::Drawing::Size(90, 31);
			this->toolsLabel->TabIndex = 1;
			this->toolsLabel->Text = L"TOOLS";
			// 
			// caBtn
			// 
			this->caBtn->BackColor = System::Drawing::Color::Transparent;
			this->caBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"caBtn.BackgroundImage")));
			this->caBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->caBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->caBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->caBtn->FlatAppearance->BorderSize = 0;
			this->caBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->caBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->caBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->caBtn->Location = System::Drawing::Point(203, 597);
			this->caBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->caBtn->Name = L"caBtn";
			this->caBtn->Size = System::Drawing::Size(69, 70);
			this->caBtn->TabIndex = 5;
			this->caBtn->UseVisualStyleBackColor = false;
			this->caBtn->Click += gcnew System::EventHandler(this, &dgForm::caBtn_Click);
			// 
			// pBtn
			// 
			this->pBtn->BackColor = System::Drawing::Color::Transparent;
			this->pBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pBtn.BackgroundImage")));
			this->pBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->pBtn->FlatAppearance->BorderSize = 0;
			this->pBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->pBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->pBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pBtn->Location = System::Drawing::Point(309, 597);
			this->pBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pBtn->Name = L"pBtn";
			this->pBtn->Size = System::Drawing::Size(69, 70);
			this->pBtn->TabIndex = 6;
			this->pBtn->UseVisualStyleBackColor = false;
			this->pBtn->Click += gcnew System::EventHandler(this, &dgForm::pBtn_Click);
			// 
			// coBtn
			// 
			this->coBtn->BackColor = System::Drawing::Color::Transparent;
			this->coBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coBtn.BackgroundImage")));
			this->coBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->coBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->coBtn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->coBtn->FlatAppearance->BorderSize = 0;
			this->coBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->coBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->coBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->coBtn->Location = System::Drawing::Point(413, 597);
			this->coBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->coBtn->Name = L"coBtn";
			this->coBtn->Size = System::Drawing::Size(69, 70);
			this->coBtn->TabIndex = 7;
			this->coBtn->UseVisualStyleBackColor = false;
			this->coBtn->Click += gcnew System::EventHandler(this, &dgForm::coBtn_Click);
			// 
			// rtCrops
			// 
			this->rtCrops->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->rtCrops->Font = (gcnew System::Drawing::Font(L"Corbel", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtCrops->ForeColor = System::Drawing::Color::Red;
			this->rtCrops->Location = System::Drawing::Point(203, 673);
			this->rtCrops->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtCrops->Name = L"rtCrops";
			this->rtCrops->Size = System::Drawing::Size(281, 27);
			this->rtCrops->TabIndex = 5;
			this->rtCrops->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->landPlot3Btn);
			this->groupBox1->Controls->Add(this->landPlot2Btn);
			this->groupBox1->Controls->Add(this->landPlot1Btn);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Corbel", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->groupBox1->Location = System::Drawing::Point(203, 118);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1123, 473);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"FARMLAND";
			// 
			// landPlot3Btn
			// 
			this->landPlot3Btn->BackColor = System::Drawing::Color::Transparent;
			this->landPlot3Btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"landPlot3Btn.BackgroundImage")));
			this->landPlot3Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->landPlot3Btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->landPlot3Btn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->landPlot3Btn->FlatAppearance->BorderSize = 0;
			this->landPlot3Btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->landPlot3Btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->landPlot3Btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->landPlot3Btn->Location = System::Drawing::Point(740, 78);
			this->landPlot3Btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->landPlot3Btn->Name = L"landPlot3Btn";
			this->landPlot3Btn->Size = System::Drawing::Size(349, 350);
			this->landPlot3Btn->TabIndex = 12;
			this->landPlot3Btn->UseVisualStyleBackColor = false;
			this->landPlot3Btn->Click += gcnew System::EventHandler(this, &dgForm::landPlot3Btn_Click);
			this->landPlot3Btn->MouseLeave += gcnew System::EventHandler(this, &dgForm::virtualBtn_Click);
			this->landPlot3Btn->MouseHover += gcnew System::EventHandler(this, &dgForm::landPlot3Btn_Hover);
			// 
			// landPlot2Btn
			// 
			this->landPlot2Btn->BackColor = System::Drawing::Color::Transparent;
			this->landPlot2Btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"landPlot2Btn.BackgroundImage")));
			this->landPlot2Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->landPlot2Btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->landPlot2Btn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->landPlot2Btn->FlatAppearance->BorderSize = 0;
			this->landPlot2Btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->landPlot2Btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->landPlot2Btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->landPlot2Btn->ImageKey = L"(none)";
			this->landPlot2Btn->Location = System::Drawing::Point(385, 78);
			this->landPlot2Btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->landPlot2Btn->Name = L"landPlot2Btn";
			this->landPlot2Btn->Size = System::Drawing::Size(349, 350);
			this->landPlot2Btn->TabIndex = 11;
			this->landPlot2Btn->UseVisualStyleBackColor = false;
			this->landPlot2Btn->Click += gcnew System::EventHandler(this, &dgForm::landPlot2Btn_Click);
			this->landPlot2Btn->MouseLeave += gcnew System::EventHandler(this, &dgForm::virtualBtn_Click);
			this->landPlot2Btn->MouseHover += gcnew System::EventHandler(this, &dgForm::landPlot2Btn_Hover);
			// 
			// landPlot1Btn
			// 
			this->landPlot1Btn->BackColor = System::Drawing::Color::Transparent;
			this->landPlot1Btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"landPlot1Btn.BackgroundImage")));
			this->landPlot1Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->landPlot1Btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->landPlot1Btn->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->landPlot1Btn->FlatAppearance->BorderSize = 0;
			this->landPlot1Btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->landPlot1Btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->landPlot1Btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->landPlot1Btn->Location = System::Drawing::Point(29, 78);
			this->landPlot1Btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->landPlot1Btn->Name = L"landPlot1Btn";
			this->landPlot1Btn->Size = System::Drawing::Size(349, 350);
			this->landPlot1Btn->TabIndex = 10;
			this->landPlot1Btn->UseVisualStyleBackColor = false;
			this->landPlot1Btn->Click += gcnew System::EventHandler(this, &dgForm::landPlot1Btn_Click);
			this->landPlot1Btn->MouseLeave += gcnew System::EventHandler(this, &dgForm::virtualBtn_Click);
			this->landPlot1Btn->MouseHover += gcnew System::EventHandler(this, &dgForm::landPlot1Btn_Hover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(203, 12);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1123, 110);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// rtStates
			// 
			this->rtStates->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->rtStates->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtStates->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtStates->ForeColor = System::Drawing::Color::White;
			this->rtStates->Location = System::Drawing::Point(249, 44);
			this->rtStates->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rtStates->Name = L"rtStates";
			this->rtStates->Size = System::Drawing::Size(688, 52);
			this->rtStates->TabIndex = 5;
			this->rtStates->Text = L"";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(1066, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 69);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// rtWallet
			// 
			this->rtWallet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->rtWallet->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtWallet->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtWallet->ForeColor = System::Drawing::Color::White;
			this->rtWallet->Location = System::Drawing::Point(1130, 47);
			this->rtWallet->Name = L"rtWallet";
			this->rtWallet->Size = System::Drawing::Size(140, 40);
			this->rtWallet->TabIndex = 12;
			this->rtWallet->Text = L"0.00";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// dgForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1377, 727);
			this->Controls->Add(this->rtWallet);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->rtStates);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->rtCrops);
			this->Controls->Add(this->coBtn);
			this->Controls->Add(this->pBtn);
			this->Controls->Add(this->caBtn);
			this->Controls->Add(this->toolsPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"dgForm";
			this->Text = L"dgForm";
			this->toolsPanel->ResumeLayout(false);
			this->toolsPanel->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void hoeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		machineFLAG = false;
		hoeFLAG = true;
		shovelFLAG = false;
		carrotFLAG = false;
		potatoFLAG = false;
		cornFLAG = false;
		rtTools->Clear();
		rtTools->AppendText("HOE");
	}
	private: System::Void machineBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		machineFLAG = true;
		hoeFLAG = false;
		shovelFLAG = false;
		carrotFLAG = false;
		potatoFLAG = false;
		cornFLAG = false;
		rtTools->Clear();
		rtTools->AppendText("MACHINE");
	}
	private: System::Void shovelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		machineFLAG = false;
		hoeFLAG = false;
		shovelFLAG = true;
		carrotFLAG = false;
		potatoFLAG = false;
		cornFLAG = false;
		rtTools->Clear();
		rtTools->AppendText("SHOVEL");
	}
	private: System::Void caBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		carrotFLAG = true;
		potatoFLAG = false;
		cornFLAG = false;
		machineFLAG = false;
		hoeFLAG = false;
		shovelFLAG = false;
		rtCrops->Clear();
		rtCrops->AppendText("CARROTS SELECTED !");
	}
	private: System::Void pBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		carrotFLAG = false;
		potatoFLAG = true;
		cornFLAG = false;
		machineFLAG = false;
		hoeFLAG = false;
		shovelFLAG = false;
		rtCrops->Clear();
		rtCrops->AppendText("POTATOES SELECTED !");
	}
	private: System::Void coBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		carrotFLAG = false;
		potatoFLAG = false;
		cornFLAG = true;
		machineFLAG = false;
		hoeFLAG = false;
		shovelFLAG = false;
		rtCrops->Clear();
		rtCrops->AppendText("CORN SELECTED !");
	}

	private: System::Void virtualBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			rtStates->Clear();
		}
		catch (System::Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}

		   // LANDPLOT CLICKED
	private: System::Void landPlot1Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//when land plot 1 is clicked
		rtCrops->Clear();
		rtCrops->AppendText("PRESSED LA FUCK");
	}
	private: System::Void landPlot2Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//when land plot 2 is clicked
		land land2 = land();

		if (carrotFLAG) {


			carrot crop2 = carrot();
			crop2.plant();
			if (carrotGrow(landPlot2Btn)) {
				rtCrops->Clear();
				std::string d = crop2.getName() + "is Fully Grown";
				System::String^ disp = gcnew String(d.c_str());
				rtCrops->AppendText(disp);
			}




		}
		else if (cornFLAG) {
			corn crop2 = corn();
			crop2.plant();
			if (cornGrow(landPlot2Btn)) {
				rtCrops->Clear();
				std::string d = crop2.getName() + "is Fully Grown";
				System::String^ disp = gcnew String(d.c_str());
				rtCrops->AppendText(disp);
			}

		}
		else if (potatoFLAG) {
			potato crop2 = potato();
			crop2.plant();
			if (potatoGrow(landPlot2Btn)) {
				rtCrops->Clear();
				std::string d = crop2.getName() + "is Fully Grown";
				System::String^ disp = gcnew String(d.c_str());
				rtCrops->AppendText(disp);
			}

		}
		else if (machineFLAG) {



		}
		else if (hoeFLAG) {


		}
		else if (shovelFLAG) {


		}


	}
		   // LANDPLOT HOVER
	private: System::Void landPlot1Btn_Hover(System::Object^ sender, System::EventArgs^ e) {
		rtStates->Clear();
		rtStates->AppendText("State Of LandPlot1");
		// when mouse hovers over land plot 1
	}
	private: System::Void landPlot2Btn_Hover(System::Object^ sender, System::EventArgs^ e) {
		rtStates->Clear();
		rtStates->AppendText("Yes");
		// when mouse hovers over land plot 2
	}
	private: System::Void landPlot3Btn_Hover(System::Object^ sender, System::EventArgs^ e) {
		rtStates->Clear();
		rtStates->AppendText("State Of LandPlot3");
		// when mouse hovers over land plot 3
	}
	private: System::Void landPlot3Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		//when land plot 3 is clicked
	}





	private: System::Void mResetDBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// reset durability back to 100 for all tools

	}

	private: bool carrotGrow(System::Windows::Forms::Button^ b) {
		b->BackgroundImage = seed;
		b->Refresh();
		_sleep(4000);


		b->BackgroundImage = seedling;
		b->Refresh();
		_sleep(4000);

		b->BackgroundImage = caCrop;
		b->Refresh();



		return true;
	}
	private: bool potatoGrow(System::Windows::Forms::Button^ b) {
		b->BackgroundImage = seed;
		b->Refresh();
		_sleep(4000);


		b->BackgroundImage = seedling;
		b->Refresh();
		_sleep(4000);

		b->BackgroundImage = poCrop;
		b->Refresh();


		return true;
	}
	private: bool cornGrow(System::Windows::Forms::Button^ b) {
		b->BackgroundImage = seed;
		b->Refresh();
		_sleep(4000);


		b->BackgroundImage = seedling;
		b->Refresh();
		_sleep(4000);

		b->BackgroundImage = coCrop;
		b->Refresh();


		return true;
	}



	};
}
