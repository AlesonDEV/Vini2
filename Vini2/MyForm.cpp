#include "MyForm.h"
#include "OptionMenu.h"
#include "Volunteer.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();


    try
    {
        
 
           
            
            while (true)
            {
                Vini2::MyForm form;
                form.ShowDialog();
                Volunteer^ volun2 = form.volun;
                if (volun2 != nullptr)
                {
                    Vini2::OptionMenu form2;
                    form.~MyForm();
                    volun2 = nullptr;
                    form2.ShowDialog();
                   
                }
                else
                {
                    MessageBox::Show("Authentication canceled", "VINI Volunteer", MessageBoxButtons::OK);
                    break;

                }
            }
            
        }
    
    catch (Exception^ ex)
    {
        MessageBox::Show("Authentication canceled", "VINI Volunteer", MessageBoxButtons::OK);
    }
}