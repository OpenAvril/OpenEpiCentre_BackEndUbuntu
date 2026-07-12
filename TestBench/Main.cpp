#include "IO.h"
#include "include/engine/Framework.h"
    int main()
    {
        TestBench_Cpp_OpenEpiCentre::Framework* pgm = nullptr;
        pgm = TestBench_Cpp_OpenEpiCentre::IO::app_FUNCT_generate_Program();
//        TestBench_Cpp_OpenEpiCentre::IO::app_FUNCT_terminate_Program();

        return 0;
    }
