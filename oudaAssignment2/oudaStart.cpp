#include "chessBoard.h"
#include "oudaStart.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace oudaAssignment2;

int main(void) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	oudaAssignment2::oudaStart form;
	Application::Run(%form);

	return 0;
}