#ifndef TESTBENCH_CPP_OPENEPICENTRE_IO_H
#define TESTBENCH_CPP_OPENEPICENTRE_IO_H
#include "include/engine/Framework_App.h"
extern "C" {
    namespace TestBench_Cpp_OpenEpiCentre {
        class IO {
        public:
            static Framework_App* app_FUNCT_generate_Program();
            static void app_FUNCT_terminate_Program();
        private:
            static void stat_CLASS_boot1_DEFINE_Framework();
            static void stat_CLASS_boot3_INITIALISE_Framework();
            static Framework_App* stat_CLASS_get_ptr_Framework_App();
        };
    }
} // TestBench_Cpp_OpenEpiCentre
#endif //TESTBENCH_CPP_OPENEPICENTRE_IO_H
