#ifndef TESTBENCH_CPP_OPENEPICENTRE_IO_H
#define TESTBENCH_CPP_OPENEPICENTRE_IO_H
#include "include/engine/Framework.h"
namespace TestBench_Cpp_OpenEpiCentre {
    class IO {
    public:
        static Framework* app_FUNCT_generate_Program();
        static void app_FUNCT_terminate_Program();
    private:
        static void stat_CLASS_boot1_DEFINE_Framework();
        static void stat_CLASS_boot3_INITIALISE_Framework();
        static Framework* stat_CLASS_get_ptr_Framework();
    };
}
#endif //TESTBENCH_CPP_OPENEPICENTRE_IO_H
