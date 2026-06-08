#include "IO.h"
#include "include/engine/App.h"
#include "include/engine/Execute.h"
#include "include/engine/Execute_Control.h"
#include <iostream>
int main()
{
    TestBench_Cpp_OpenEpiCentre::Framework_App* pgm = nullptr;
    pgm = TestBench_Cpp_OpenEpiCentre::IO::app_FUNCT_generate_Program();
    while (pgm->dyn_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised() == true) {
        // wait while system initialises.
    };
    std::cout << "is_SystemInitialised =" << pgm->dyn_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised();
    return 0;
}