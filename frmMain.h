#pragma once

namespace VirtualKeyboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace Forms = System::Windows::Forms;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ chkCapsLock;
	private: System::Windows::Forms::Button^ btnTab;
	protected:

	private: System::Windows::Forms::CheckBox^ chkShift;
	private: System::Windows::Forms::CheckBox^ chkShiftR;
	private: System::Windows::Forms::CheckBox^ chkNumLock;
	private: System::Windows::Forms::Button^ btnQ;
	private: System::Windows::Forms::Button^ btnW;
	private: System::Windows::Forms::Button^ btnE;
	private: System::Windows::Forms::Button^ btnR;
	private: System::Windows::Forms::Button^ btnT;
	private: System::Windows::Forms::Button^ btnY;
	private: System::Windows::Forms::Button^ btnU;
	private: System::Windows::Forms::Button^ btnI;
	private: System::Windows::Forms::Button^ btnO;
	private: System::Windows::Forms::Button^ btnCloseSquareBracket;










	private: System::Windows::Forms::Button^ btnЗ;
	private: System::Windows::Forms::Button^ btnOpenSquareBracket;
	private: System::Windows::Forms::Button^ btnJ;





	private: System::Windows::Forms::Button^ btnH;
	private: System::Windows::Forms::Button^ btnQuotes;


	private: System::Windows::Forms::Button^ btnD;
	private: System::Windows::Forms::Button^ btnG;

	private: System::Windows::Forms::Button^ btnSemiColon;



	private: System::Windows::Forms::Button^ btnS;
	private: System::Windows::Forms::Button^ btnBackSlash;


	private: System::Windows::Forms::Button^ btnF;
	private: System::Windows::Forms::Button^ btnL;


	private: System::Windows::Forms::Button^ btnK;

	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Button^ btnN;


	private: System::Windows::Forms::Button^ btnB;
	private: System::Windows::Forms::Button^ btnSlash;


	private: System::Windows::Forms::Button^ btnX;
	private: System::Windows::Forms::Button^ btnV;
	private: System::Windows::Forms::Button^ btnDot;



	private: System::Windows::Forms::Button^ btnZ;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnComma;
	private: System::Windows::Forms::Button^ btnM;






	private: System::Windows::Forms::Button^ btnBackSlashL;

	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Button^ btnTilda;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;





	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnPlus;


	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn0;


	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnMinus;


	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnBackspace;



	private: System::Windows::Forms::Button^ btnF7;

	private: System::Windows::Forms::Button^ btnF6;
	private: System::Windows::Forms::Button^ btnF11;


	private: System::Windows::Forms::Button^ btnF3;
	private: System::Windows::Forms::Button^ btnF5;
	private: System::Windows::Forms::Button^ btnF10;



	private: System::Windows::Forms::Button^ btnF2;
	private: System::Windows::Forms::Button^ btnF12;


	private: System::Windows::Forms::Button^ F4;
private: System::Windows::Forms::Button^ btnF9;


	private: System::Windows::Forms::Button^ btnF8;

	private: System::Windows::Forms::Button^ btnF1;

	private: System::Windows::Forms::Button^ btnEsc;
private: System::Windows::Forms::CheckBox^ chkScrollLock;


private: System::Windows::Forms::Button^ btnPrintScreen;
private: System::Windows::Forms::Button^ btnInsert;
private: System::Windows::Forms::Button^ btnHome;
private: System::Windows::Forms::Button^ btnPgUp;
private: System::Windows::Forms::Button^ btnDown;





private: System::Windows::Forms::Button^ btnEnd;
private: System::Windows::Forms::Button^ btnPgDown;
private: System::Windows::Forms::Button^ btnLeft;
private: System::Windows::Forms::Button^ btnRight;




private: System::Windows::Forms::Button^ btnUp;

private: System::Windows::Forms::Button^ btnDelete;

private: System::Windows::Forms::Button^ btnPause;
private: System::Windows::Forms::Button^ btnNumSlash;
private: System::Windows::Forms::Button^ btnNumAsterisk;
private: System::Windows::Forms::Button^ btnNumMinus;
private: System::Windows::Forms::Button^ btnNum7;
private: System::Windows::Forms::Button^ btnNum8;
private: System::Windows::Forms::Button^ btnNum9;







private: System::Windows::Forms::Button^ btnNumPlus;
private: System::Windows::Forms::Button^ btnNum5;
private: System::Windows::Forms::Button^ btnNum6;



private: System::Windows::Forms::Button^ btnNum4;
private: System::Windows::Forms::Button^ btnNum2;
private: System::Windows::Forms::Button^ btnNum3;




private: System::Windows::Forms::Button^ btnNum1;
private: System::Windows::Forms::Button^ btnNumDot;


private: System::Windows::Forms::Button^ btnNumEnter;
private: System::Windows::Forms::Button^ btnNum0;


private: System::Windows::Forms::CheckBox^ chkCtrl;
private: System::Windows::Forms::Button^ btnWin;

private: System::Windows::Forms::CheckBox^ chkAlt;
private: System::Windows::Forms::Button^ btnSpace;

private: System::Windows::Forms::CheckBox^ chkCtrlR;
private: System::Windows::Forms::CheckBox^ chkAltR;
private: System::Windows::Forms::Panel^ panelMainKB;
private: System::Windows::Forms::Panel^ panelToolsKB;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::MenuStrip^ msMain;



private: System::Windows::Forms::ToolStripMenuItem^ tsmiFile;

private: System::Windows::Forms::ToolStripMenuItem^ новийToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^ закритиToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ інформаціяToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ допомогаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
private: System::Windows::Forms::ToolStrip^ tsMain;
private: System::Windows::Forms::ToolStripButton^ tsbNew;
private: System::Windows::Forms::ToolStripButton^ tsbOpen;
private: System::Windows::Forms::ToolStripButton^ tsbSave;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
private: System::Windows::Forms::ToolStripButton^ tsbAbout;

private: System::Windows::Forms::ToolStripButton^ tsbInfo;
private: System::Windows::Forms::StatusStrip^ stMain;
private: System::Windows::Forms::ToolStripStatusLabel^ tslInfo;
private: System::Windows::Forms::ToolStripProgressBar^ tspMain;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripDropDownButton^ tsbPalette;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorStandard;


private: System::Windows::Forms::RadioButton^ rbNumLock;
private: System::Windows::Forms::RadioButton^ rbCapsLock;
private: System::Windows::Forms::RadioButton^ rbScrollLock;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorRed;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorBlue;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorGreen;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorYellow;
private: System::Windows::Forms::ToolStripMenuItem^ tsbPaletteColorPurple;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->chkCapsLock = (gcnew System::Windows::Forms::CheckBox());
			this->btnTab = (gcnew System::Windows::Forms::Button());
			this->chkShift = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftR = (gcnew System::Windows::Forms::CheckBox());
			this->chkNumLock = (gcnew System::Windows::Forms::CheckBox());
			this->btnQ = (gcnew System::Windows::Forms::Button());
			this->btnW = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->btnT = (gcnew System::Windows::Forms::Button());
			this->btnY = (gcnew System::Windows::Forms::Button());
			this->btnU = (gcnew System::Windows::Forms::Button());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->btnO = (gcnew System::Windows::Forms::Button());
			this->btnCloseSquareBracket = (gcnew System::Windows::Forms::Button());
			this->btnЗ = (gcnew System::Windows::Forms::Button());
			this->btnOpenSquareBracket = (gcnew System::Windows::Forms::Button());
			this->btnJ = (gcnew System::Windows::Forms::Button());
			this->btnH = (gcnew System::Windows::Forms::Button());
			this->btnQuotes = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnG = (gcnew System::Windows::Forms::Button());
			this->btnSemiColon = (gcnew System::Windows::Forms::Button());
			this->btnS = (gcnew System::Windows::Forms::Button());
			this->btnBackSlash = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnL = (gcnew System::Windows::Forms::Button());
			this->btnK = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnN = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnSlash = (gcnew System::Windows::Forms::Button());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btnV = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnZ = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnComma = (gcnew System::Windows::Forms::Button());
			this->btnM = (gcnew System::Windows::Forms::Button());
			this->btnBackSlashL = (gcnew System::Windows::Forms::Button());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->btnTilda = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnF7 = (gcnew System::Windows::Forms::Button());
			this->btnF6 = (gcnew System::Windows::Forms::Button());
			this->btnF11 = (gcnew System::Windows::Forms::Button());
			this->btnF3 = (gcnew System::Windows::Forms::Button());
			this->btnF5 = (gcnew System::Windows::Forms::Button());
			this->btnF10 = (gcnew System::Windows::Forms::Button());
			this->btnF2 = (gcnew System::Windows::Forms::Button());
			this->btnF12 = (gcnew System::Windows::Forms::Button());
			this->F4 = (gcnew System::Windows::Forms::Button());
			this->btnF9 = (gcnew System::Windows::Forms::Button());
			this->btnF8 = (gcnew System::Windows::Forms::Button());
			this->btnF1 = (gcnew System::Windows::Forms::Button());
			this->btnEsc = (gcnew System::Windows::Forms::Button());
			this->chkScrollLock = (gcnew System::Windows::Forms::CheckBox());
			this->btnPrintScreen = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnPgUp = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnEnd = (gcnew System::Windows::Forms::Button());
			this->btnPgDown = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnNumSlash = (gcnew System::Windows::Forms::Button());
			this->btnNumAsterisk = (gcnew System::Windows::Forms::Button());
			this->btnNumMinus = (gcnew System::Windows::Forms::Button());
			this->btnNum7 = (gcnew System::Windows::Forms::Button());
			this->btnNum8 = (gcnew System::Windows::Forms::Button());
			this->btnNum9 = (gcnew System::Windows::Forms::Button());
			this->btnNumPlus = (gcnew System::Windows::Forms::Button());
			this->btnNum5 = (gcnew System::Windows::Forms::Button());
			this->btnNum6 = (gcnew System::Windows::Forms::Button());
			this->btnNum4 = (gcnew System::Windows::Forms::Button());
			this->btnNum2 = (gcnew System::Windows::Forms::Button());
			this->btnNum3 = (gcnew System::Windows::Forms::Button());
			this->btnNum1 = (gcnew System::Windows::Forms::Button());
			this->btnNumDot = (gcnew System::Windows::Forms::Button());
			this->btnNumEnter = (gcnew System::Windows::Forms::Button());
			this->btnNum0 = (gcnew System::Windows::Forms::Button());
			this->chkCtrl = (gcnew System::Windows::Forms::CheckBox());
			this->btnWin = (gcnew System::Windows::Forms::Button());
			this->chkAlt = (gcnew System::Windows::Forms::CheckBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->chkCtrlR = (gcnew System::Windows::Forms::CheckBox());
			this->chkAltR = (gcnew System::Windows::Forms::CheckBox());
			this->panelMainKB = (gcnew System::Windows::Forms::Panel());
			this->panelToolsKB = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->msMain = (gcnew System::Windows::Forms::MenuStrip());
			this->tsmiFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->закритиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->допомогаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsMain = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbNew = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbOpen = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbAbout = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbInfo = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbPalette = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->tsbPaletteColorStandard = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stMain = (gcnew System::Windows::Forms::StatusStrip());
			this->tslInfo = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tspMain = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->rbNumLock = (gcnew System::Windows::Forms::RadioButton());
			this->rbCapsLock = (gcnew System::Windows::Forms::RadioButton());
			this->rbScrollLock = (gcnew System::Windows::Forms::RadioButton());
			this->tsbPaletteColorRed = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsbPaletteColorBlue = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsbPaletteColorGreen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsbPaletteColorYellow = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsbPaletteColorPurple = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelMainKB->SuspendLayout();
			this->panelToolsKB->SuspendLayout();
			this->panel2->SuspendLayout();
			this->msMain->SuspendLayout();
			this->tsMain->SuspendLayout();
			this->stMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// chkCapsLock
			// 
			this->chkCapsLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCapsLock->BackColor = System::Drawing::SystemColors::Control;
			this->chkCapsLock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkCapsLock->Location = System::Drawing::Point(4, 201);
			this->chkCapsLock->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkCapsLock->Name = L"chkCapsLock";
			this->chkCapsLock->Size = System::Drawing::Size(61, 60);
			this->chkCapsLock->TabIndex = 0;
			this->chkCapsLock->Text = L"Caps Lock";
			this->chkCapsLock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkCapsLock->UseVisualStyleBackColor = false;
			// 
			// btnTab
			// 
			this->btnTab->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTab->Location = System::Drawing::Point(4, 135);
			this->btnTab->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTab->Name = L"btnTab";
			this->btnTab->Size = System::Drawing::Size(61, 60);
			this->btnTab->TabIndex = 1;
			this->btnTab->Text = L"Tab";
			this->btnTab->UseVisualStyleBackColor = true;
			this->btnTab->Click += gcnew System::EventHandler(this, &frmMain::btnTab_Click);
			// 
			// chkShift
			// 
			this->chkShift->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShift->BackColor = System::Drawing::SystemColors::Control;
			this->chkShift->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkShift->Location = System::Drawing::Point(4, 267);
			this->chkShift->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkShift->Name = L"chkShift";
			this->chkShift->Size = System::Drawing::Size(61, 60);
			this->chkShift->TabIndex = 0;
			this->chkShift->Text = L"Shift";
			this->chkShift->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkShift->UseVisualStyleBackColor = false;
			// 
			// chkShiftR
			// 
			this->chkShiftR->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftR->BackColor = System::Drawing::SystemColors::Control;
			this->chkShiftR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkShiftR->Location = System::Drawing::Point(841, 267);
			this->chkShiftR->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkShiftR->Name = L"chkShiftR";
			this->chkShiftR->Size = System::Drawing::Size(130, 60);
			this->chkShiftR->TabIndex = 0;
			this->chkShiftR->Text = L"Shift";
			this->chkShiftR->UseVisualStyleBackColor = false;
			// 
			// chkNumLock
			// 
			this->chkNumLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkNumLock->BackColor = System::Drawing::SystemColors::Control;
			this->chkNumLock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkNumLock->Location = System::Drawing::Point(4, 3);
			this->chkNumLock->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkNumLock->Name = L"chkNumLock";
			this->chkNumLock->Size = System::Drawing::Size(61, 60);
			this->chkNumLock->TabIndex = 0;
			this->chkNumLock->Text = L"Num Lock";
			this->chkNumLock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkNumLock->UseVisualStyleBackColor = false;
			this->chkNumLock->CheckedChanged += gcnew System::EventHandler(this, &frmMain::chkNumLock_CheckedChanged);
			// 
			// btnQ
			// 
			this->btnQ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQ->Location = System::Drawing::Point(73, 135);
			this->btnQ->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnQ->Name = L"btnQ";
			this->btnQ->Size = System::Drawing::Size(61, 60);
			this->btnQ->TabIndex = 2;
			this->btnQ->Text = L"Q";
			this->btnQ->UseVisualStyleBackColor = true;
			this->btnQ->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnW
			// 
			this->btnW->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnW->Location = System::Drawing::Point(142, 135);
			this->btnW->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnW->Name = L"btnW";
			this->btnW->Size = System::Drawing::Size(61, 60);
			this->btnW->TabIndex = 1;
			this->btnW->Text = L"W";
			this->btnW->UseVisualStyleBackColor = true;
			this->btnW->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnE
			// 
			this->btnE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnE->Location = System::Drawing::Point(211, 135);
			this->btnE->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(61, 60);
			this->btnE->TabIndex = 2;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnR
			// 
			this->btnR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnR->Location = System::Drawing::Point(283, 135);
			this->btnR->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(61, 60);
			this->btnR->TabIndex = 1;
			this->btnR->Text = L"R";
			this->btnR->UseVisualStyleBackColor = true;
			this->btnR->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnT
			// 
			this->btnT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnT->Location = System::Drawing::Point(352, 135);
			this->btnT->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnT->Name = L"btnT";
			this->btnT->Size = System::Drawing::Size(61, 60);
			this->btnT->TabIndex = 2;
			this->btnT->Text = L"T";
			this->btnT->UseVisualStyleBackColor = true;
			this->btnT->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnY
			// 
			this->btnY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnY->Location = System::Drawing::Point(421, 135);
			this->btnY->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnY->Name = L"btnY";
			this->btnY->Size = System::Drawing::Size(61, 60);
			this->btnY->TabIndex = 1;
			this->btnY->Text = L"Y";
			this->btnY->UseVisualStyleBackColor = true;
			this->btnY->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnU
			// 
			this->btnU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnU->Location = System::Drawing::Point(490, 135);
			this->btnU->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnU->Name = L"btnU";
			this->btnU->Size = System::Drawing::Size(61, 60);
			this->btnU->TabIndex = 2;
			this->btnU->Text = L"U";
			this->btnU->UseVisualStyleBackColor = true;
			this->btnU->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnI
			// 
			this->btnI->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnI->Location = System::Drawing::Point(562, 135);
			this->btnI->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnI->Name = L"btnI";
			this->btnI->Size = System::Drawing::Size(61, 60);
			this->btnI->TabIndex = 1;
			this->btnI->Text = L"I";
			this->btnI->UseVisualStyleBackColor = true;
			this->btnI->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnO
			// 
			this->btnO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnO->Location = System::Drawing::Point(631, 135);
			this->btnO->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnO->Name = L"btnO";
			this->btnO->Size = System::Drawing::Size(61, 60);
			this->btnO->TabIndex = 2;
			this->btnO->Text = L"O";
			this->btnO->UseVisualStyleBackColor = true;
			this->btnO->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnCloseSquareBracket
			// 
			this->btnCloseSquareBracket->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCloseSquareBracket->Location = System::Drawing::Point(841, 135);
			this->btnCloseSquareBracket->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnCloseSquareBracket->Name = L"btnCloseSquareBracket";
			this->btnCloseSquareBracket->Size = System::Drawing::Size(61, 60);
			this->btnCloseSquareBracket->TabIndex = 1;
			this->btnCloseSquareBracket->Text = L"}\r\n]";
			this->btnCloseSquareBracket->UseVisualStyleBackColor = true;
			this->btnCloseSquareBracket->Click += gcnew System::EventHandler(this, &frmMain::btnCloseSquareBracket_Click);
			// 
			// btnЗ
			// 
			this->btnЗ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnЗ->Location = System::Drawing::Point(700, 135);
			this->btnЗ->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnЗ->Name = L"btnЗ";
			this->btnЗ->Size = System::Drawing::Size(61, 60);
			this->btnЗ->TabIndex = 1;
			this->btnЗ->Text = L"P";
			this->btnЗ->UseVisualStyleBackColor = true;
			this->btnЗ->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnOpenSquareBracket
			// 
			this->btnOpenSquareBracket->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOpenSquareBracket->Location = System::Drawing::Point(769, 135);
			this->btnOpenSquareBracket->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnOpenSquareBracket->Name = L"btnOpenSquareBracket";
			this->btnOpenSquareBracket->Size = System::Drawing::Size(61, 60);
			this->btnOpenSquareBracket->TabIndex = 2;
			this->btnOpenSquareBracket->Text = L"{\r\n[";
			this->btnOpenSquareBracket->UseVisualStyleBackColor = true;
			this->btnOpenSquareBracket->Click += gcnew System::EventHandler(this, &frmMain::btnOpenSquareBracket_Click);
			// 
			// btnJ
			// 
			this->btnJ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnJ->Location = System::Drawing::Point(490, 201);
			this->btnJ->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnJ->Name = L"btnJ";
			this->btnJ->Size = System::Drawing::Size(61, 60);
			this->btnJ->TabIndex = 9;
			this->btnJ->Text = L"J";
			this->btnJ->UseVisualStyleBackColor = true;
			this->btnJ->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnH
			// 
			this->btnH->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnH->Location = System::Drawing::Point(421, 201);
			this->btnH->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnH->Name = L"btnH";
			this->btnH->Size = System::Drawing::Size(61, 60);
			this->btnH->TabIndex = 3;
			this->btnH->Text = L"H";
			this->btnH->UseVisualStyleBackColor = true;
			this->btnH->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnQuotes
			// 
			this->btnQuotes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQuotes->Location = System::Drawing::Point(769, 201);
			this->btnQuotes->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnQuotes->Name = L"btnQuotes";
			this->btnQuotes->Size = System::Drawing::Size(61, 60);
			this->btnQuotes->TabIndex = 10;
			this->btnQuotes->Text = L"\"\r\n\'";
			this->btnQuotes->UseVisualStyleBackColor = true;
			this->btnQuotes->Click += gcnew System::EventHandler(this, &frmMain::btnQuotes_Click);
			// 
			// btnD
			// 
			this->btnD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnD->Location = System::Drawing::Point(211, 201);
			this->btnD->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(61, 60);
			this->btnD->TabIndex = 11;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			this->btnD->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnG
			// 
			this->btnG->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnG->Location = System::Drawing::Point(352, 201);
			this->btnG->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnG->Name = L"btnG";
			this->btnG->Size = System::Drawing::Size(61, 60);
			this->btnG->TabIndex = 12;
			this->btnG->Text = L"G";
			this->btnG->UseVisualStyleBackColor = true;
			this->btnG->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnSemiColon
			// 
			this->btnSemiColon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSemiColon->Location = System::Drawing::Point(700, 201);
			this->btnSemiColon->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnSemiColon->Name = L"btnSemiColon";
			this->btnSemiColon->Size = System::Drawing::Size(61, 60);
			this->btnSemiColon->TabIndex = 4;
			this->btnSemiColon->Text = L":\r\n;";
			this->btnSemiColon->UseVisualStyleBackColor = true;
			this->btnSemiColon->Click += gcnew System::EventHandler(this, &frmMain::btnSemiColon_Click);
			// 
			// btnS
			// 
			this->btnS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnS->Location = System::Drawing::Point(142, 201);
			this->btnS->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnS->Name = L"btnS";
			this->btnS->Size = System::Drawing::Size(61, 60);
			this->btnS->TabIndex = 5;
			this->btnS->Text = L"S";
			this->btnS->UseVisualStyleBackColor = true;
			this->btnS->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnBackSlash
			// 
			this->btnBackSlash->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackSlash->Location = System::Drawing::Point(841, 201);
			this->btnBackSlash->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnBackSlash->Name = L"btnBackSlash";
			this->btnBackSlash->Size = System::Drawing::Size(61, 60);
			this->btnBackSlash->TabIndex = 6;
			this->btnBackSlash->Text = L"|\r\n\\";
			this->btnBackSlash->UseVisualStyleBackColor = true;
			this->btnBackSlash->Click += gcnew System::EventHandler(this, &frmMain::btnBackSlash_Click);
			// 
			// btnF
			// 
			this->btnF->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF->Location = System::Drawing::Point(283, 201);
			this->btnF->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(61, 60);
			this->btnF->TabIndex = 7;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = true;
			this->btnF->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnL
			// 
			this->btnL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnL->Location = System::Drawing::Point(631, 201);
			this->btnL->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnL->Name = L"btnL";
			this->btnL->Size = System::Drawing::Size(61, 60);
			this->btnL->TabIndex = 13;
			this->btnL->Text = L"L";
			this->btnL->UseVisualStyleBackColor = true;
			this->btnL->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnK
			// 
			this->btnK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnK->Location = System::Drawing::Point(562, 201);
			this->btnK->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnK->Name = L"btnK";
			this->btnK->Size = System::Drawing::Size(61, 60);
			this->btnK->TabIndex = 8;
			this->btnK->Text = L"K";
			this->btnK->UseVisualStyleBackColor = true;
			this->btnK->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnA
			// 
			this->btnA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnA->Location = System::Drawing::Point(73, 201);
			this->btnA->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(61, 60);
			this->btnA->TabIndex = 14;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnN
			// 
			this->btnN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnN->Location = System::Drawing::Point(490, 267);
			this->btnN->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnN->Name = L"btnN";
			this->btnN->Size = System::Drawing::Size(61, 60);
			this->btnN->TabIndex = 21;
			this->btnN->Text = L"N";
			this->btnN->UseVisualStyleBackColor = true;
			this->btnN->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnB
			// 
			this->btnB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnB->Location = System::Drawing::Point(421, 267);
			this->btnB->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(61, 60);
			this->btnB->TabIndex = 15;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			this->btnB->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnSlash
			// 
			this->btnSlash->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSlash->Location = System::Drawing::Point(769, 267);
			this->btnSlash->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnSlash->Name = L"btnSlash";
			this->btnSlash->Size = System::Drawing::Size(61, 60);
			this->btnSlash->TabIndex = 22;
			this->btnSlash->Text = L"\?\r\n/";
			this->btnSlash->UseVisualStyleBackColor = true;
			this->btnSlash->Click += gcnew System::EventHandler(this, &frmMain::btnSlash_Click);
			// 
			// btnX
			// 
			this->btnX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnX->Location = System::Drawing::Point(211, 267);
			this->btnX->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(61, 60);
			this->btnX->TabIndex = 23;
			this->btnX->Text = L"X";
			this->btnX->UseVisualStyleBackColor = true;
			this->btnX->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnV
			// 
			this->btnV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnV->Location = System::Drawing::Point(352, 267);
			this->btnV->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnV->Name = L"btnV";
			this->btnV->Size = System::Drawing::Size(61, 60);
			this->btnV->TabIndex = 24;
			this->btnV->Text = L"V";
			this->btnV->UseVisualStyleBackColor = true;
			this->btnV->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDot->Location = System::Drawing::Point(700, 267);
			this->btnDot->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(61, 60);
			this->btnDot->TabIndex = 16;
			this->btnDot->Text = L">\r\n.";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &frmMain::btnDot_Click);
			// 
			// btnZ
			// 
			this->btnZ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnZ->Location = System::Drawing::Point(142, 267);
			this->btnZ->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnZ->Name = L"btnZ";
			this->btnZ->Size = System::Drawing::Size(61, 60);
			this->btnZ->TabIndex = 17;
			this->btnZ->Text = L"Z";
			this->btnZ->UseVisualStyleBackColor = true;
			this->btnZ->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(283, 267);
			this->btnC->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(61, 60);
			this->btnC->TabIndex = 19;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnComma
			// 
			this->btnComma->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnComma->Location = System::Drawing::Point(631, 267);
			this->btnComma->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnComma->Name = L"btnComma";
			this->btnComma->Size = System::Drawing::Size(61, 60);
			this->btnComma->TabIndex = 25;
			this->btnComma->Text = L"<\r\n,";
			this->btnComma->UseVisualStyleBackColor = true;
			this->btnComma->Click += gcnew System::EventHandler(this, &frmMain::btnComma_Click);
			// 
			// btnM
			// 
			this->btnM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnM->Location = System::Drawing::Point(562, 267);
			this->btnM->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnM->Name = L"btnM";
			this->btnM->Size = System::Drawing::Size(61, 60);
			this->btnM->TabIndex = 20;
			this->btnM->Text = L"M";
			this->btnM->UseVisualStyleBackColor = true;
			this->btnM->Click += gcnew System::EventHandler(this, &frmMain::ClickAtoZ);
			// 
			// btnBackSlashL
			// 
			this->btnBackSlashL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackSlashL->Location = System::Drawing::Point(73, 267);
			this->btnBackSlashL->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnBackSlashL->Name = L"btnBackSlashL";
			this->btnBackSlashL->Size = System::Drawing::Size(61, 60);
			this->btnBackSlashL->TabIndex = 26;
			this->btnBackSlashL->Text = L"|\r\n\\";
			this->btnBackSlashL->UseVisualStyleBackColor = true;
			this->btnBackSlashL->Click += gcnew System::EventHandler(this, &frmMain::btnBackSlashL_Click);
			// 
			// btnEnter
			// 
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEnter->Location = System::Drawing::Point(910, 135);
			this->btnEnter->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(61, 126);
			this->btnEnter->TabIndex = 6;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &frmMain::btnEnter_Click);
			// 
			// btnTilda
			// 
			this->btnTilda->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTilda->Location = System::Drawing::Point(4, 69);
			this->btnTilda->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTilda->Name = L"btnTilda";
			this->btnTilda->Size = System::Drawing::Size(61, 60);
			this->btnTilda->TabIndex = 1;
			this->btnTilda->Text = L"~\r\n`";
			this->btnTilda->UseVisualStyleBackColor = true;
			this->btnTilda->Click += gcnew System::EventHandler(this, &frmMain::btnTilda_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(73, 69);
			this->btn1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(61, 60);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"!\r\n1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &frmMain::btn1_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(562, 69);
			this->btn8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(61, 60);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"*\r\n8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &frmMain::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(631, 69);
			this->btn9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(61, 60);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"(\r\n9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &frmMain::btn9_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(283, 69);
			this->btn4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(61, 60);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"$\r\n4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &frmMain::btn4_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(841, 69);
			this->btnPlus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(61, 60);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"+\r\n=";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &frmMain::btnPlus_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(142, 69);
			this->btn2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(61, 60);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"@\r\n2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &frmMain::btn2_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(700, 69);
			this->btn0->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(61, 60);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L")\r\n0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &frmMain::btn0_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(352, 69);
			this->btn5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(61, 60);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"%\r\n5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &frmMain::btn5_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(211, 69);
			this->btn3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(61, 60);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"#\r\n3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &frmMain::btn3_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(769, 69);
			this->btnMinus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(61, 60);
			this->btnMinus->TabIndex = 2;
			this->btnMinus->Text = L"_\r\n-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &frmMain::btnMinus_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(421, 69);
			this->btn6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(61, 60);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"^\r\n6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &frmMain::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(490, 69);
			this->btn7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(61, 60);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"&&\r\n7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &frmMain::btn7_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackspace->Location = System::Drawing::Point(910, 69);
			this->btnBackspace->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(61, 60);
			this->btnBackspace->TabIndex = 1;
			this->btnBackspace->Text = L"Back Space";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &frmMain::btnBackspace_Click);
			// 
			// btnF7
			// 
			this->btnF7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF7->Location = System::Drawing::Point(531, 3);
			this->btnF7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF7->Name = L"btnF7";
			this->btnF7->Size = System::Drawing::Size(61, 60);
			this->btnF7->TabIndex = 34;
			this->btnF7->Text = L"F7";
			this->btnF7->UseVisualStyleBackColor = true;
			this->btnF7->Click += gcnew System::EventHandler(this, &frmMain::btnF7_Click);
			// 
			// btnF6
			// 
			this->btnF6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF6->Location = System::Drawing::Point(462, 3);
			this->btnF6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF6->Name = L"btnF6";
			this->btnF6->Size = System::Drawing::Size(61, 60);
			this->btnF6->TabIndex = 27;
			this->btnF6->Text = L"F6";
			this->btnF6->UseVisualStyleBackColor = true;
			this->btnF6->Click += gcnew System::EventHandler(this, &frmMain::btnF6_Click);
			// 
			// btnF11
			// 
			this->btnF11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF11->Location = System::Drawing::Point(838, 3);
			this->btnF11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF11->Name = L"btnF11";
			this->btnF11->Size = System::Drawing::Size(61, 60);
			this->btnF11->TabIndex = 35;
			this->btnF11->Text = L"F11";
			this->btnF11->UseVisualStyleBackColor = true;
			this->btnF11->Click += gcnew System::EventHandler(this, &frmMain::btnF11_Click);
			// 
			// btnF3
			// 
			this->btnF3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF3->Location = System::Drawing::Point(235, 3);
			this->btnF3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF3->Name = L"btnF3";
			this->btnF3->Size = System::Drawing::Size(61, 60);
			this->btnF3->TabIndex = 36;
			this->btnF3->Text = L"F3";
			this->btnF3->UseVisualStyleBackColor = true;
			this->btnF3->Click += gcnew System::EventHandler(this, &frmMain::btnF3_Click);
			// 
			// btnF5
			// 
			this->btnF5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF5->Location = System::Drawing::Point(393, 3);
			this->btnF5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF5->Name = L"btnF5";
			this->btnF5->Size = System::Drawing::Size(61, 60);
			this->btnF5->TabIndex = 37;
			this->btnF5->Text = L"F5";
			this->btnF5->UseVisualStyleBackColor = true;
			this->btnF5->Click += gcnew System::EventHandler(this, &frmMain::btnF5_Click);
			// 
			// btnF10
			// 
			this->btnF10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF10->Location = System::Drawing::Point(769, 3);
			this->btnF10->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF10->Name = L"btnF10";
			this->btnF10->Size = System::Drawing::Size(61, 60);
			this->btnF10->TabIndex = 28;
			this->btnF10->Text = L"F10";
			this->btnF10->UseVisualStyleBackColor = true;
			this->btnF10->Click += gcnew System::EventHandler(this, &frmMain::btnF10_Click);
			// 
			// btnF2
			// 
			this->btnF2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF2->Location = System::Drawing::Point(166, 3);
			this->btnF2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF2->Name = L"btnF2";
			this->btnF2->Size = System::Drawing::Size(61, 60);
			this->btnF2->TabIndex = 29;
			this->btnF2->Text = L"F2";
			this->btnF2->UseVisualStyleBackColor = true;
			this->btnF2->Click += gcnew System::EventHandler(this, &frmMain::btnF2_Click);
			// 
			// btnF12
			// 
			this->btnF12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF12->Location = System::Drawing::Point(910, 3);
			this->btnF12->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF12->Name = L"btnF12";
			this->btnF12->Size = System::Drawing::Size(61, 60);
			this->btnF12->TabIndex = 30;
			this->btnF12->Text = L"F12";
			this->btnF12->UseVisualStyleBackColor = true;
			this->btnF12->Click += gcnew System::EventHandler(this, &frmMain::btnF12_Click);
			// 
			// F4
			// 
			this->F4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->F4->Location = System::Drawing::Point(304, 3);
			this->F4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(61, 60);
			this->F4->TabIndex = 31;
			this->F4->Text = L"F4";
			this->F4->UseVisualStyleBackColor = true;
			this->F4->Click += gcnew System::EventHandler(this, &frmMain::F4_Click);
			// 
			// btnF9
			// 
			this->btnF9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF9->Location = System::Drawing::Point(700, 3);
			this->btnF9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF9->Name = L"btnF9";
			this->btnF9->Size = System::Drawing::Size(61, 60);
			this->btnF9->TabIndex = 38;
			this->btnF9->Text = L"F9";
			this->btnF9->UseVisualStyleBackColor = true;
			this->btnF9->Click += gcnew System::EventHandler(this, &frmMain::btnF9_Click);
			// 
			// btnF8
			// 
			this->btnF8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF8->Location = System::Drawing::Point(600, 3);
			this->btnF8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF8->Name = L"btnF8";
			this->btnF8->Size = System::Drawing::Size(61, 60);
			this->btnF8->TabIndex = 32;
			this->btnF8->Text = L"F8";
			this->btnF8->UseVisualStyleBackColor = true;
			this->btnF8->Click += gcnew System::EventHandler(this, &frmMain::btnF8_Click);
			// 
			// btnF1
			// 
			this->btnF1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnF1->Location = System::Drawing::Point(97, 3);
			this->btnF1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnF1->Name = L"btnF1";
			this->btnF1->Size = System::Drawing::Size(61, 60);
			this->btnF1->TabIndex = 39;
			this->btnF1->Text = L"F1";
			this->btnF1->UseVisualStyleBackColor = true;
			this->btnF1->Click += gcnew System::EventHandler(this, &frmMain::btnF1_Click);
			// 
			// btnEsc
			// 
			this->btnEsc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEsc->Location = System::Drawing::Point(4, 3);
			this->btnEsc->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnEsc->Name = L"btnEsc";
			this->btnEsc->Size = System::Drawing::Size(61, 60);
			this->btnEsc->TabIndex = 33;
			this->btnEsc->Text = L"Esc";
			this->btnEsc->UseVisualStyleBackColor = true;
			this->btnEsc->Click += gcnew System::EventHandler(this, &frmMain::btnEsc_Click);
			// 
			// chkScrollLock
			// 
			this->chkScrollLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkScrollLock->BackColor = System::Drawing::SystemColors::Control;
			this->chkScrollLock->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkScrollLock->Location = System::Drawing::Point(73, 3);
			this->chkScrollLock->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkScrollLock->Name = L"chkScrollLock";
			this->chkScrollLock->Size = System::Drawing::Size(61, 60);
			this->chkScrollLock->TabIndex = 40;
			this->chkScrollLock->Text = L"Scroll Lock";
			this->chkScrollLock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkScrollLock->UseVisualStyleBackColor = false;
			this->chkScrollLock->CheckedChanged += gcnew System::EventHandler(this, &frmMain::chkScrollLock_CheckedChanged);
			// 
			// btnPrintScreen
			// 
			this->btnPrintScreen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPrintScreen->Location = System::Drawing::Point(4, 3);
			this->btnPrintScreen->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPrintScreen->Name = L"btnPrintScreen";
			this->btnPrintScreen->Size = System::Drawing::Size(61, 60);
			this->btnPrintScreen->TabIndex = 30;
			this->btnPrintScreen->Text = L"Print Screen";
			this->btnPrintScreen->UseVisualStyleBackColor = true;
			this->btnPrintScreen->Click += gcnew System::EventHandler(this, &frmMain::btnPrintScreen_Click);
			// 
			// btnInsert
			// 
			this->btnInsert->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnInsert->Location = System::Drawing::Point(4, 69);
			this->btnInsert->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(61, 60);
			this->btnInsert->TabIndex = 30;
			this->btnInsert->Text = L"Insert";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &frmMain::btnInsert_Click);
			// 
			// btnHome
			// 
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnHome->Location = System::Drawing::Point(73, 69);
			this->btnHome->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(61, 60);
			this->btnHome->TabIndex = 30;
			this->btnHome->Text = L"Home";
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &frmMain::btnHome_Click);
			// 
			// btnPgUp
			// 
			this->btnPgUp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPgUp->Location = System::Drawing::Point(142, 69);
			this->btnPgUp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPgUp->Name = L"btnPgUp";
			this->btnPgUp->Size = System::Drawing::Size(61, 60);
			this->btnPgUp->TabIndex = 30;
			this->btnPgUp->Text = L"Page Up";
			this->btnPgUp->UseVisualStyleBackColor = true;
			this->btnPgUp->Click += gcnew System::EventHandler(this, &frmMain::btnPgUp_Click);
			// 
			// btnDown
			// 
			this->btnDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDown->Location = System::Drawing::Point(73, 331);
			this->btnDown->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(61, 60);
			this->btnDown->TabIndex = 30;
			this->btnDown->Text = L"↓";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &frmMain::btnDown_Click);
			// 
			// btnEnd
			// 
			this->btnEnd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEnd->Location = System::Drawing::Point(73, 135);
			this->btnEnd->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnEnd->Name = L"btnEnd";
			this->btnEnd->Size = System::Drawing::Size(61, 60);
			this->btnEnd->TabIndex = 30;
			this->btnEnd->Text = L"End";
			this->btnEnd->UseVisualStyleBackColor = true;
			this->btnEnd->Click += gcnew System::EventHandler(this, &frmMain::btnEnd_Click);
			// 
			// btnPgDown
			// 
			this->btnPgDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPgDown->Location = System::Drawing::Point(142, 135);
			this->btnPgDown->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPgDown->Name = L"btnPgDown";
			this->btnPgDown->Size = System::Drawing::Size(61, 60);
			this->btnPgDown->TabIndex = 30;
			this->btnPgDown->Text = L"Page Down";
			this->btnPgDown->UseVisualStyleBackColor = true;
			this->btnPgDown->Click += gcnew System::EventHandler(this, &frmMain::btnPgDown_Click);
			// 
			// btnLeft
			// 
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLeft->Location = System::Drawing::Point(4, 331);
			this->btnLeft->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(61, 60);
			this->btnLeft->TabIndex = 30;
			this->btnLeft->Text = L"←";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Click += gcnew System::EventHandler(this, &frmMain::btnLeft_Click);
			// 
			// btnRight
			// 
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRight->Location = System::Drawing::Point(142, 331);
			this->btnRight->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(61, 60);
			this->btnRight->TabIndex = 30;
			this->btnRight->Text = L"→";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &frmMain::btnRight_Click);
			// 
			// btnUp
			// 
			this->btnUp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUp->Location = System::Drawing::Point(73, 265);
			this->btnUp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(61, 60);
			this->btnUp->TabIndex = 30;
			this->btnUp->Text = L"↑";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &frmMain::btnUp_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelete->Location = System::Drawing::Point(4, 135);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(61, 60);
			this->btnDelete->TabIndex = 30;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &frmMain::btnDelete_Click);
			// 
			// btnPause
			// 
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPause->Location = System::Drawing::Point(142, 3);
			this->btnPause->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(61, 60);
			this->btnPause->TabIndex = 30;
			this->btnPause->Text = L"Pause ---- Break";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &frmMain::btnPause_Click);
			// 
			// btnNumSlash
			// 
			this->btnNumSlash->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumSlash->Location = System::Drawing::Point(72, 3);
			this->btnNumSlash->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumSlash->Name = L"btnNumSlash";
			this->btnNumSlash->Size = System::Drawing::Size(61, 60);
			this->btnNumSlash->TabIndex = 30;
			this->btnNumSlash->Text = L"/";
			this->btnNumSlash->UseVisualStyleBackColor = true;
			this->btnNumSlash->Click += gcnew System::EventHandler(this, &frmMain::btnNumSlash_Click);
			// 
			// btnNumAsterisk
			// 
			this->btnNumAsterisk->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumAsterisk->Location = System::Drawing::Point(141, 3);
			this->btnNumAsterisk->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumAsterisk->Name = L"btnNumAsterisk";
			this->btnNumAsterisk->Size = System::Drawing::Size(61, 60);
			this->btnNumAsterisk->TabIndex = 30;
			this->btnNumAsterisk->Text = L"*";
			this->btnNumAsterisk->UseVisualStyleBackColor = true;
			this->btnNumAsterisk->Click += gcnew System::EventHandler(this, &frmMain::btnNumAsterisk_Click);
			// 
			// btnNumMinus
			// 
			this->btnNumMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumMinus->Location = System::Drawing::Point(210, 3);
			this->btnNumMinus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumMinus->Name = L"btnNumMinus";
			this->btnNumMinus->Size = System::Drawing::Size(61, 60);
			this->btnNumMinus->TabIndex = 30;
			this->btnNumMinus->Text = L"-";
			this->btnNumMinus->UseVisualStyleBackColor = true;
			this->btnNumMinus->Click += gcnew System::EventHandler(this, &frmMain::btnNumMinus_Click);
			// 
			// btnNum7
			// 
			this->btnNum7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum7->Location = System::Drawing::Point(3, 69);
			this->btnNum7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum7->Name = L"btnNum7";
			this->btnNum7->Size = System::Drawing::Size(61, 60);
			this->btnNum7->TabIndex = 30;
			this->btnNum7->Text = L"7 Home";
			this->btnNum7->UseVisualStyleBackColor = true;
			this->btnNum7->Click += gcnew System::EventHandler(this, &frmMain::btnNum7_Click);
			// 
			// btnNum8
			// 
			this->btnNum8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum8->Location = System::Drawing::Point(72, 69);
			this->btnNum8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum8->Name = L"btnNum8";
			this->btnNum8->Size = System::Drawing::Size(61, 60);
			this->btnNum8->TabIndex = 30;
			this->btnNum8->Text = L"8\r\n↑";
			this->btnNum8->UseVisualStyleBackColor = true;
			this->btnNum8->Click += gcnew System::EventHandler(this, &frmMain::btnNum8_Click);
			// 
			// btnNum9
			// 
			this->btnNum9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum9->Location = System::Drawing::Point(141, 69);
			this->btnNum9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum9->Name = L"btnNum9";
			this->btnNum9->Size = System::Drawing::Size(61, 60);
			this->btnNum9->TabIndex = 30;
			this->btnNum9->Text = L"9 PgUp";
			this->btnNum9->UseVisualStyleBackColor = true;
			this->btnNum9->Click += gcnew System::EventHandler(this, &frmMain::btnNum9_Click);
			// 
			// btnNumPlus
			// 
			this->btnNumPlus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumPlus->Location = System::Drawing::Point(210, 69);
			this->btnNumPlus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumPlus->Name = L"btnNumPlus";
			this->btnNumPlus->Size = System::Drawing::Size(61, 126);
			this->btnNumPlus->TabIndex = 30;
			this->btnNumPlus->Text = L"+";
			this->btnNumPlus->UseVisualStyleBackColor = true;
			this->btnNumPlus->Click += gcnew System::EventHandler(this, &frmMain::btnNumPlus_Click);
			// 
			// btnNum5
			// 
			this->btnNum5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum5->Location = System::Drawing::Point(72, 135);
			this->btnNum5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum5->Name = L"btnNum5";
			this->btnNum5->Size = System::Drawing::Size(61, 60);
			this->btnNum5->TabIndex = 30;
			this->btnNum5->Text = L"5";
			this->btnNum5->UseVisualStyleBackColor = true;
			this->btnNum5->Click += gcnew System::EventHandler(this, &frmMain::btnNum5_Click);
			// 
			// btnNum6
			// 
			this->btnNum6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum6->Location = System::Drawing::Point(141, 135);
			this->btnNum6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum6->Name = L"btnNum6";
			this->btnNum6->Size = System::Drawing::Size(61, 60);
			this->btnNum6->TabIndex = 30;
			this->btnNum6->Text = L"6\r\n→";
			this->btnNum6->UseVisualStyleBackColor = true;
			this->btnNum6->Click += gcnew System::EventHandler(this, &frmMain::btnNum6_Click);
			// 
			// btnNum4
			// 
			this->btnNum4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum4->Location = System::Drawing::Point(3, 135);
			this->btnNum4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum4->Name = L"btnNum4";
			this->btnNum4->Size = System::Drawing::Size(61, 60);
			this->btnNum4->TabIndex = 30;
			this->btnNum4->Text = L"4\r\n←";
			this->btnNum4->UseVisualStyleBackColor = true;
			this->btnNum4->Click += gcnew System::EventHandler(this, &frmMain::btnNum4_Click);
			// 
			// btnNum2
			// 
			this->btnNum2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum2->Location = System::Drawing::Point(72, 201);
			this->btnNum2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum2->Name = L"btnNum2";
			this->btnNum2->Size = System::Drawing::Size(61, 60);
			this->btnNum2->TabIndex = 30;
			this->btnNum2->Text = L"2\r\n↓";
			this->btnNum2->UseVisualStyleBackColor = true;
			this->btnNum2->Click += gcnew System::EventHandler(this, &frmMain::btnNum2_Click);
			// 
			// btnNum3
			// 
			this->btnNum3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum3->Location = System::Drawing::Point(141, 201);
			this->btnNum3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum3->Name = L"btnNum3";
			this->btnNum3->Size = System::Drawing::Size(61, 60);
			this->btnNum3->TabIndex = 30;
			this->btnNum3->Text = L"3 PgDn";
			this->btnNum3->UseVisualStyleBackColor = true;
			this->btnNum3->Click += gcnew System::EventHandler(this, &frmMain::btnNum3_Click);
			// 
			// btnNum1
			// 
			this->btnNum1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum1->Location = System::Drawing::Point(3, 201);
			this->btnNum1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum1->Name = L"btnNum1";
			this->btnNum1->Size = System::Drawing::Size(61, 60);
			this->btnNum1->TabIndex = 30;
			this->btnNum1->Text = L"1 \r\nEnd";
			this->btnNum1->UseVisualStyleBackColor = true;
			this->btnNum1->Click += gcnew System::EventHandler(this, &frmMain::btnNum1_Click);
			// 
			// btnNumDot
			// 
			this->btnNumDot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumDot->Location = System::Drawing::Point(141, 267);
			this->btnNumDot->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumDot->Name = L"btnNumDot";
			this->btnNumDot->Size = System::Drawing::Size(61, 60);
			this->btnNumDot->TabIndex = 30;
			this->btnNumDot->Text = L".\r\nDel";
			this->btnNumDot->UseVisualStyleBackColor = true;
			this->btnNumDot->Click += gcnew System::EventHandler(this, &frmMain::btnNumDot_Click);
			// 
			// btnNumEnter
			// 
			this->btnNumEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNumEnter->Location = System::Drawing::Point(210, 201);
			this->btnNumEnter->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNumEnter->Name = L"btnNumEnter";
			this->btnNumEnter->Size = System::Drawing::Size(61, 126);
			this->btnNumEnter->TabIndex = 30;
			this->btnNumEnter->Text = L"Enter";
			this->btnNumEnter->UseVisualStyleBackColor = true;
			this->btnNumEnter->Click += gcnew System::EventHandler(this, &frmMain::btnNumEnter_Click);
			// 
			// btnNum0
			// 
			this->btnNum0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum0->Location = System::Drawing::Point(3, 267);
			this->btnNum0->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNum0->Name = L"btnNum0";
			this->btnNum0->Size = System::Drawing::Size(130, 60);
			this->btnNum0->TabIndex = 30;
			this->btnNum0->Text = L"0\r\nInsert";
			this->btnNum0->UseVisualStyleBackColor = true;
			this->btnNum0->Click += gcnew System::EventHandler(this, &frmMain::btnNum0_Click);
			// 
			// chkCtrl
			// 
			this->chkCtrl->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCtrl->BackColor = System::Drawing::SystemColors::Control;
			this->chkCtrl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkCtrl->Location = System::Drawing::Point(4, 333);
			this->chkCtrl->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkCtrl->Name = L"chkCtrl";
			this->chkCtrl->Size = System::Drawing::Size(61, 60);
			this->chkCtrl->TabIndex = 0;
			this->chkCtrl->Text = L"Ctrl";
			this->chkCtrl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkCtrl->UseVisualStyleBackColor = false;
			// 
			// btnWin
			// 
			this->btnWin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnWin->Location = System::Drawing::Point(73, 333);
			this->btnWin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnWin->Name = L"btnWin";
			this->btnWin->Size = System::Drawing::Size(61, 60);
			this->btnWin->TabIndex = 26;
			this->btnWin->Text = L"Win";
			this->btnWin->UseVisualStyleBackColor = true;
			this->btnWin->Click += gcnew System::EventHandler(this, &frmMain::btnWin_Click);
			// 
			// chkAlt
			// 
			this->chkAlt->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkAlt->BackColor = System::Drawing::SystemColors::Control;
			this->chkAlt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkAlt->Location = System::Drawing::Point(142, 333);
			this->chkAlt->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkAlt->Name = L"chkAlt";
			this->chkAlt->Size = System::Drawing::Size(61, 60);
			this->chkAlt->TabIndex = 0;
			this->chkAlt->Text = L"Alt";
			this->chkAlt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkAlt->UseVisualStyleBackColor = false;
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSpace->Location = System::Drawing::Point(211, 333);
			this->btnSpace->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(619, 60);
			this->btnSpace->TabIndex = 26;
			this->btnSpace->Text = L"Space";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &frmMain::btnSpace_Click);
			// 
			// chkCtrlR
			// 
			this->chkCtrlR->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCtrlR->BackColor = System::Drawing::SystemColors::Control;
			this->chkCtrlR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkCtrlR->Location = System::Drawing::Point(910, 333);
			this->chkCtrlR->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkCtrlR->Name = L"chkCtrlR";
			this->chkCtrlR->Size = System::Drawing::Size(61, 60);
			this->chkCtrlR->TabIndex = 0;
			this->chkCtrlR->Text = L"Ctrl";
			this->chkCtrlR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkCtrlR->UseVisualStyleBackColor = false;
			// 
			// chkAltR
			// 
			this->chkAltR->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkAltR->BackColor = System::Drawing::SystemColors::Control;
			this->chkAltR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chkAltR->Location = System::Drawing::Point(838, 333);
			this->chkAltR->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->chkAltR->Name = L"chkAltR";
			this->chkAltR->Size = System::Drawing::Size(61, 60);
			this->chkAltR->TabIndex = 0;
			this->chkAltR->Text = L"Alt";
			this->chkAltR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->chkAltR->UseVisualStyleBackColor = false;
			// 
			// panelMainKB
			// 
			this->panelMainKB->Controls->Add(this->btnEsc);
			this->panelMainKB->Controls->Add(this->chkCapsLock);
			this->panelMainKB->Controls->Add(this->btnF7);
			this->panelMainKB->Controls->Add(this->chkShift);
			this->panelMainKB->Controls->Add(this->btnF6);
			this->panelMainKB->Controls->Add(this->chkShiftR);
			this->panelMainKB->Controls->Add(this->btnF11);
			this->panelMainKB->Controls->Add(this->chkCtrl);
			this->panelMainKB->Controls->Add(this->btnF3);
			this->panelMainKB->Controls->Add(this->chkCtrlR);
			this->panelMainKB->Controls->Add(this->btnF5);
			this->panelMainKB->Controls->Add(this->chkAlt);
			this->panelMainKB->Controls->Add(this->btnF10);
			this->panelMainKB->Controls->Add(this->chkAltR);
			this->panelMainKB->Controls->Add(this->btnF2);
			this->panelMainKB->Controls->Add(this->btnTab);
			this->panelMainKB->Controls->Add(this->btnQ);
			this->panelMainKB->Controls->Add(this->btnTilda);
			this->panelMainKB->Controls->Add(this->btnI);
			this->panelMainKB->Controls->Add(this->btn1);
			this->panelMainKB->Controls->Add(this->btnO);
			this->panelMainKB->Controls->Add(this->btn8);
			this->panelMainKB->Controls->Add(this->btnR);
			this->panelMainKB->Controls->Add(this->btn9);
			this->panelMainKB->Controls->Add(this->btnCloseSquareBracket);
			this->panelMainKB->Controls->Add(this->btn4);
			this->panelMainKB->Controls->Add(this->btnW);
			this->panelMainKB->Controls->Add(this->btnPlus);
			this->panelMainKB->Controls->Add(this->btnBackspace);
			this->panelMainKB->Controls->Add(this->btnЗ);
			this->panelMainKB->Controls->Add(this->btn2);
			this->panelMainKB->Controls->Add(this->btn0);
			this->panelMainKB->Controls->Add(this->btnT);
			this->panelMainKB->Controls->Add(this->btn5);
			this->panelMainKB->Controls->Add(this->btnE);
			this->panelMainKB->Controls->Add(this->btn3);
			this->panelMainKB->Controls->Add(this->btnOpenSquareBracket);
			this->panelMainKB->Controls->Add(this->btnMinus);
			this->panelMainKB->Controls->Add(this->btnY);
			this->panelMainKB->Controls->Add(this->btn6);
			this->panelMainKB->Controls->Add(this->btnU);
			this->panelMainKB->Controls->Add(this->btn7);
			this->panelMainKB->Controls->Add(this->btnA);
			this->panelMainKB->Controls->Add(this->btnK);
			this->panelMainKB->Controls->Add(this->btnF12);
			this->panelMainKB->Controls->Add(this->btnL);
			this->panelMainKB->Controls->Add(this->F4);
			this->panelMainKB->Controls->Add(this->btnF);
			this->panelMainKB->Controls->Add(this->btnF9);
			this->panelMainKB->Controls->Add(this->btnBackSlash);
			this->panelMainKB->Controls->Add(this->btnF8);
			this->panelMainKB->Controls->Add(this->btnEnter);
			this->panelMainKB->Controls->Add(this->btnF1);
			this->panelMainKB->Controls->Add(this->btnS);
			this->panelMainKB->Controls->Add(this->btnSemiColon);
			this->panelMainKB->Controls->Add(this->btnN);
			this->panelMainKB->Controls->Add(this->btnG);
			this->panelMainKB->Controls->Add(this->btnB);
			this->panelMainKB->Controls->Add(this->btnD);
			this->panelMainKB->Controls->Add(this->btnSlash);
			this->panelMainKB->Controls->Add(this->btnQuotes);
			this->panelMainKB->Controls->Add(this->btnX);
			this->panelMainKB->Controls->Add(this->btnH);
			this->panelMainKB->Controls->Add(this->btnV);
			this->panelMainKB->Controls->Add(this->btnJ);
			this->panelMainKB->Controls->Add(this->btnDot);
			this->panelMainKB->Controls->Add(this->btnBackSlashL);
			this->panelMainKB->Controls->Add(this->btnZ);
			this->panelMainKB->Controls->Add(this->btnM);
			this->panelMainKB->Controls->Add(this->btnC);
			this->panelMainKB->Controls->Add(this->btnWin);
			this->panelMainKB->Controls->Add(this->btnComma);
			this->panelMainKB->Controls->Add(this->btnSpace);
			this->panelMainKB->Location = System::Drawing::Point(12, 112);
			this->panelMainKB->Name = L"panelMainKB";
			this->panelMainKB->Size = System::Drawing::Size(993, 408);
			this->panelMainKB->TabIndex = 41;
			// 
			// panelToolsKB
			// 
			this->panelToolsKB->Controls->Add(this->btnPrintScreen);
			this->panelToolsKB->Controls->Add(this->btnInsert);
			this->panelToolsKB->Controls->Add(this->chkScrollLock);
			this->panelToolsKB->Controls->Add(this->btnHome);
			this->panelToolsKB->Controls->Add(this->btnDown);
			this->panelToolsKB->Controls->Add(this->btnLeft);
			this->panelToolsKB->Controls->Add(this->btnRight);
			this->panelToolsKB->Controls->Add(this->btnUp);
			this->panelToolsKB->Controls->Add(this->btnDelete);
			this->panelToolsKB->Controls->Add(this->btnEnd);
			this->panelToolsKB->Controls->Add(this->btnPgUp);
			this->panelToolsKB->Controls->Add(this->btnPause);
			this->panelToolsKB->Controls->Add(this->btnPgDown);
			this->panelToolsKB->Location = System::Drawing::Point(1029, 112);
			this->panelToolsKB->Name = L"panelToolsKB";
			this->panelToolsKB->Size = System::Drawing::Size(208, 408);
			this->panelToolsKB->TabIndex = 42;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->chkNumLock);
			this->panel2->Controls->Add(this->btnNumSlash);
			this->panel2->Controls->Add(this->btnNumAsterisk);
			this->panel2->Controls->Add(this->btnNum0);
			this->panel2->Controls->Add(this->btnNum8);
			this->panel2->Controls->Add(this->btnNum1);
			this->panel2->Controls->Add(this->btnNum9);
			this->panel2->Controls->Add(this->btnNum4);
			this->panel2->Controls->Add(this->btnNum5);
			this->panel2->Controls->Add(this->btnNum7);
			this->panel2->Controls->Add(this->btnNum6);
			this->panel2->Controls->Add(this->btnNumEnter);
			this->panel2->Controls->Add(this->btnNum2);
			this->panel2->Controls->Add(this->btnNumPlus);
			this->panel2->Controls->Add(this->btnNum3);
			this->panel2->Controls->Add(this->btnNumMinus);
			this->panel2->Controls->Add(this->btnNumDot);
			this->panel2->Location = System::Drawing::Point(1266, 180);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(272, 340);
			this->panel2->TabIndex = 43;
			// 
			// msMain
			// 
			this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tsmiFile, this->інформаціяToolStripMenuItem });
			this->msMain->Location = System::Drawing::Point(0, 0);
			this->msMain->Name = L"msMain";
			this->msMain->Size = System::Drawing::Size(1560, 24);
			this->msMain->TabIndex = 44;
			this->msMain->Text = L"menuStrip1";
			// 
			// tsmiFile
			// 
			this->tsmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->новийToolStripMenuItem,
					this->відкритиToolStripMenuItem, this->зберегтиToolStripMenuItem, this->toolStripSeparator1, this->закритиToolStripMenuItem1
			});
			this->tsmiFile->Name = L"tsmiFile";
			this->tsmiFile->Size = System::Drawing::Size(48, 20);
			this->tsmiFile->Text = L"Файл";
			// 
			// новийToolStripMenuItem
			// 
			this->новийToolStripMenuItem->Name = L"новийToolStripMenuItem";
			this->новийToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->новийToolStripMenuItem->Text = L"Новий";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(121, 6);
			// 
			// закритиToolStripMenuItem1
			// 
			this->закритиToolStripMenuItem1->Name = L"закритиToolStripMenuItem1";
			this->закритиToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->закритиToolStripMenuItem1->Text = L"Закрити";
			// 
			// інформаціяToolStripMenuItem
			// 
			this->інформаціяToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->допомогаToolStripMenuItem,
					this->проПрограмуToolStripMenuItem
			});
			this->інформаціяToolStripMenuItem->Name = L"інформаціяToolStripMenuItem";
			this->інформаціяToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->інформаціяToolStripMenuItem->Text = L"Інформація";
			// 
			// допомогаToolStripMenuItem
			// 
			this->допомогаToolStripMenuItem->Name = L"допомогаToolStripMenuItem";
			this->допомогаToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->допомогаToolStripMenuItem->Text = L"Допомога";
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// tsMain
			// 
			this->tsMain->ImageScalingSize = System::Drawing::Size(32, 32);
			this->tsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->tsbNew, this->tsbOpen,
					this->tsbSave, this->toolStripSeparator3, this->tsbAbout, this->tsbInfo, this->tsbPalette
			});
			this->tsMain->Location = System::Drawing::Point(0, 24);
			this->tsMain->Name = L"tsMain";
			this->tsMain->Size = System::Drawing::Size(1560, 39);
			this->tsMain->TabIndex = 45;
			// 
			// tsbNew
			// 
			this->tsbNew->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbNew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNew.Image")));
			this->tsbNew->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNew->Name = L"tsbNew";
			this->tsbNew->Size = System::Drawing::Size(36, 36);
			this->tsbNew->Text = L"Create";
			// 
			// tsbOpen
			// 
			this->tsbOpen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbOpen.Image")));
			this->tsbOpen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbOpen->Name = L"tsbOpen";
			this->tsbOpen->Size = System::Drawing::Size(36, 36);
			this->tsbOpen->Text = L"Open";
			// 
			// tsbSave
			// 
			this->tsbSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbSave.Image")));
			this->tsbSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbSave->Name = L"tsbSave";
			this->tsbSave->Size = System::Drawing::Size(36, 36);
			this->tsbSave->Text = L"Save";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 39);
			// 
			// tsbAbout
			// 
			this->tsbAbout->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbAbout.Image")));
			this->tsbAbout->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->tsbAbout->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbAbout->Name = L"tsbAbout";
			this->tsbAbout->Size = System::Drawing::Size(36, 36);
			this->tsbAbout->Text = L"About";
			// 
			// tsbInfo
			// 
			this->tsbInfo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbInfo.Image")));
			this->tsbInfo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbInfo->Name = L"tsbInfo";
			this->tsbInfo->Size = System::Drawing::Size(36, 36);
			this->tsbInfo->Text = L"Info";
			// 
			// tsbPalette
			// 
			this->tsbPalette->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbPalette->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->tsbPaletteColorStandard,
					this->tsbPaletteColorRed, this->tsbPaletteColorBlue, this->tsbPaletteColorGreen, this->tsbPaletteColorYellow, this->tsbPaletteColorPurple
			});
			this->tsbPalette->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbPalette.Image")));
			this->tsbPalette->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbPalette->Name = L"tsbPalette";
			this->tsbPalette->Size = System::Drawing::Size(45, 36);
			this->tsbPalette->Text = L"Палітра";
			this->tsbPalette->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			// 
			// tsbPaletteColorStandard
			// 
			this->tsbPaletteColorStandard->Name = L"tsbPaletteColorStandard";
			this->tsbPaletteColorStandard->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorStandard->Text = L"Стандартний колір";
			// 
			// stMain
			// 
			this->stMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tslInfo, this->tspMain });
			this->stMain->Location = System::Drawing::Point(0, 537);
			this->stMain->Name = L"stMain";
			this->stMain->Size = System::Drawing::Size(1560, 22);
			this->stMain->TabIndex = 46;
			this->stMain->Text = L"statusStrip1";
			// 
			// tslInfo
			// 
			this->tslInfo->AutoSize = false;
			this->tslInfo->Name = L"tslInfo";
			this->tslInfo->Size = System::Drawing::Size(120, 17);
			this->tslInfo->Text = L"Інформація";
			this->tslInfo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tspMain
			// 
			this->tspMain->Name = L"tspMain";
			this->tspMain->Size = System::Drawing::Size(100, 16);
			// 
			// rbNumLock
			// 
			this->rbNumLock->AutoSize = true;
			this->rbNumLock->Enabled = false;
			this->rbNumLock->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->rbNumLock->Location = System::Drawing::Point(1274, 126);
			this->rbNumLock->Name = L"rbNumLock";
			this->rbNumLock->Size = System::Drawing::Size(88, 20);
			this->rbNumLock->TabIndex = 47;
			this->rbNumLock->Text = L"Num Lock";
			this->rbNumLock->UseVisualStyleBackColor = true;
			// 
			// rbCapsLock
			// 
			this->rbCapsLock->AutoSize = true;
			this->rbCapsLock->Enabled = false;
			this->rbCapsLock->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->rbCapsLock->Location = System::Drawing::Point(1362, 126);
			this->rbCapsLock->Name = L"rbCapsLock";
			this->rbCapsLock->Size = System::Drawing::Size(89, 20);
			this->rbCapsLock->TabIndex = 48;
			this->rbCapsLock->Text = L"Caps Lock";
			this->rbCapsLock->UseVisualStyleBackColor = true;
			// 
			// rbScrollLock
			// 
			this->rbScrollLock->AutoSize = true;
			this->rbScrollLock->Enabled = false;
			this->rbScrollLock->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->rbScrollLock->Location = System::Drawing::Point(1451, 126);
			this->rbScrollLock->Name = L"rbScrollLock";
			this->rbScrollLock->Size = System::Drawing::Size(96, 20);
			this->rbScrollLock->TabIndex = 48;
			this->rbScrollLock->Text = L"Scroll Lock";
			this->rbScrollLock->UseVisualStyleBackColor = true;
			// 
			// tsbPaletteColorRed
			// 
			this->tsbPaletteColorRed->Name = L"tsbPaletteColorRed";
			this->tsbPaletteColorRed->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorRed->Text = L"Червоний";
			// 
			// tsbPaletteColorBlue
			// 
			this->tsbPaletteColorBlue->Name = L"tsbPaletteColorBlue";
			this->tsbPaletteColorBlue->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorBlue->Text = L"Синій";
			// 
			// tsbPaletteColorGreen
			// 
			this->tsbPaletteColorGreen->Name = L"tsbPaletteColorGreen";
			this->tsbPaletteColorGreen->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorGreen->Text = L"Зелений";
			// 
			// tsbPaletteColorYellow
			// 
			this->tsbPaletteColorYellow->Name = L"tsbPaletteColorYellow";
			this->tsbPaletteColorYellow->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorYellow->Text = L"Жовтий";
			// 
			// tsbPaletteColorPurple
			// 
			this->tsbPaletteColorPurple->Name = L"tsbPaletteColorPurple";
			this->tsbPaletteColorPurple->Size = System::Drawing::Size(180, 22);
			this->tsbPaletteColorPurple->Text = L"Фіолетовий";
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1560, 559);
			this->Controls->Add(this->rbScrollLock);
			this->Controls->Add(this->rbCapsLock);
			this->Controls->Add(this->rbNumLock);
			this->Controls->Add(this->stMain);
			this->Controls->Add(this->tsMain);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelToolsKB);
			this->Controls->Add(this->panelMainKB);
			this->Controls->Add(this->msMain);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->msMain;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"frmMain";
			this->Text = L"frmMain";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->panelMainKB->ResumeLayout(false);
			this->panelToolsKB->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->msMain->ResumeLayout(false);
			this->msMain->PerformLayout();
			this->tsMain->ResumeLayout(false);
			this->tsMain->PerformLayout();
			this->stMain->ResumeLayout(false);
			this->stMain->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	protected:
		virtual property Forms::CreateParams^ CreateParams //In C++/CLI, the ^ symbol is used to denote a handle to a reference type, which is similar to a pointer in standard C++, but it is managed by the .NET garbage collector.
		{
			Forms::CreateParams^ get() override
			{
				Forms::CreateParams^ param = __super::CreateParams; //The __super keyword is specific to C++/CLI and refers to the base class of the current class.
				param->ExStyle |= 0x08000000; //The |= operator is a bitwise OR assignment, which sets the specified bits without changing the others.
				return param;
			}
		}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chkNumLock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{ENTER}");
}
private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler(" ");
}
private: System::Void btnNumPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{ADD}");
}private: System::Void btnNumMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{SUBTRACT}");
}
private: System::Void btnNumAsterisk_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{MULTIPLY}");
}
private: System::Void btnNumSlash_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{DIVIDE}");
}
private: System::Void ClickAtoZ(System::Object^ sender, System::EventArgs^ e) {
	Button^ letter = safe_cast<Button^> (sender);
	if(chkCapsLock->Checked == true || chkShift->Checked == true || chkShiftR->Checked == true)
	{
		send_handler((letter->Text)->ToUpper());
	}
	else
	{
		send_handler((letter->Text)->ToLower());
	}
}
private: void special_Click(String^ regular_symbol, String^ shift_symbol)
{
	if (chkShift->Checked == true || chkShiftR->Checked == true)
	{
		send_handler(shift_symbol);
	}
	else
	{
		send_handler(regular_symbol);

	}

}
private: System::Void btnTab_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{TAB}");
}
private: System::Void btnEsc_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{ESC}");
}
private: System::Void btnF1_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F1}");
}
private: System::Void btnF2_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F2}");
}
private: System::Void btnF3_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F3}");
}
private: System::Void F4_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F4}");
}
private: System::Void btnF5_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F5}");
}
private: System::Void btnF6_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F6}");
}
private: System::Void btnF7_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F7}");
}
private: System::Void btnF8_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F8}");
}
private: System::Void btnF9_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F9}");
}
private: System::Void btnF10_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F10}");
}
private: System::Void btnF11_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F11}");
}
private: System::Void btnF12_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{F12}");
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("1", "!");
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("2", "@");
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("3", "#");
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("4", "$");
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("5", "%");
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("6", "^");
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("7", "&");
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("8", "*");
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("9", "(");
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("0", ")");
}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("-", "_");
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("=", "+");
}
private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{BKSP}");
}
private: System::Void btnTilda_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("`", "~");
}
private: System::Void btnBackSlashL_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("\\", "|");
}
private: System::Void btnOpenSquareBracket_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("[", "{");
}
private: System::Void btnCloseSquareBracket_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("]", "}");
}
private: System::Void btnSemiColon_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click(";", ":");
}
private: System::Void btnQuotes_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("'", "\"");
}
private: System::Void btnBackSlash_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("\\", "|");
}
private: System::Void btnComma_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click(",", "<");
}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click(".", ">");
}
private: System::Void btnSlash_Click(System::Object^ sender, System::EventArgs^ e) {
	special_Click("/", "?");
}
private: System::Void btnWin_Click(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::Send("^{ESC}");
}
private: System::Void btnPrintScreen_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{PRTSC}");
}
private: System::Void chkScrollLock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{SCROLLLOCK}");
}
private: System::Void btnPause_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{BREAK}");
}
private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{INSERT}");
}
private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{HOME}");
}
private: System::Void btnPgUp_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{PGUP}");
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{DELETE}");
}
private: System::Void btnEnd_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{END}");
}
private: System::Void btnPgDown_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{PGDN}");
}
private: System::Void btnUp_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{UP}");
}
private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{LEFT}");
}
private: System::Void btnDown_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{DOWN}");
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{RIGHT}");
}
private: System::Void btnNumEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("{ENTER}");
}
private: System::Void btnNum7_Click(System::Object^ sender, System::EventArgs^ e) {
	if(chkNumLock->Checked)
	{
		send_handler("7");
	}
	else
	{
		send_handler("{HOME}");
	}
}
private: System::Void btnNum8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("8");
	}
	else
	{
		send_handler("{UP}");
	}
}
private: System::Void btnNum9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("9");
	}
	else
	{
		send_handler("{PGUP}");
	}
}
private: System::Void btnNum4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("4");
	}
	else
	{
		send_handler("{LEFT}");
	}
}
private: System::Void btnNum6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("6");
	}
	else
	{
		send_handler("{RIGHT}");
	}
}
private: System::Void btnNum1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("1");
	}
	else
	{
		send_handler("{END}");
	}
}
private: System::Void btnNum2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("2");
	}
	else
	{
		send_handler("{DOWN}");
	}
}
private: System::Void btnNum3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("3");
	}
	else
	{
		send_handler("{PGDN}");
	}
}
private: System::Void btnNum0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler("0");
	}
	else
	{
		send_handler("{INSERT}");
	}
}
private: System::Void btnNumDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chkNumLock->Checked)
	{
		send_handler(".");
	}
	else
	{
		send_handler("{DELETE}");
	}
}
private: System::Void btnNum5_Click(System::Object^ sender, System::EventArgs^ e) {
	send_handler("5");
}
private: void send_handler(String^ text)
{
	String^ preffix;
	if (chkAlt->Checked || chkAltR->Checked)
	{
		preffix += "%";
	}
	if (chkCtrl->Checked || chkCtrlR->Checked)
	{
		preffix += "^";
	}
	if (chkShift->Checked || chkShiftR->Checked)
	{
		preffix += "+";
	}

	text = preffix + text;
	SendKeys::Send(text);

	if (chkAlt->Checked || chkAltR->Checked)
	{
		chkAlt->Checked = false;
		chkAltR->Checked = false;
	}
	if (chkCtrl->Checked || chkCtrlR->Checked)
	{
		chkCtrl->Checked = false;
		chkCtrlR->Checked = false;
	}
	if (chkShift->Checked || chkShiftR->Checked)
	{
		chkShift->Checked = false;
		chkShiftR->Checked = false;
	}
}
};
}
