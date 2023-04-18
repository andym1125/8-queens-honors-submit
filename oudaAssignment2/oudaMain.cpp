#include "oudaStart.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace oudaAssignment2;

int main(void) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	oudaAssignment2::oudaStart form;
	Application::Run(%form);

	return 0;

}
