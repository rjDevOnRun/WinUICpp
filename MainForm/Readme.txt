-- Make Sure the extension "C++/CLR Winforms.... " is installed
-- Start with an Empty CLI (.Net Framework) project
-- Change Project Properties -> Linker -> SubSystem = Windows -> Apply
-- Change Project Properties -> Advanced -> Entry Point = main -> Apply

-- use the below code in the "Main Form".cpp file:

		#include "Your Main Form.h"

		using namespace System;
		using namespace System::Windows::Forms;
		[STAThreadAttribute]
		void main(array<String^>^ args) {
			Application::EnableVisualStyles();
			Application::SetCompatibleTextRenderingDefault(false);
			"You Project name"::"You Main Form name" form;
			Application::Run(% form);
		}
