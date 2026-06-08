#ifndef TESTBENCH_CPP_OPENEPICENTRE_DATA_H
#define TESTBENCH_CPP_OPENEPICENTRE_DATA_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class Data
    {
    public:
        Data();
        virtual ~Data();
        void dyn_REG_boot1_DEFINE_Data();
        void dyn_REG_boot3_INITIALISE_Data();
        void dyn_REG_boot4_INSTANTIATE_Data();
        static void stat_CLASS_boot0_DECLARE_Data();
        static void stat_CLASS_boot1_DEFINE_Data();
        static void stat_CLASS_boot3_INITIALISE_Data();
        static void stat_CLASS_boot4_INSTANTIATE_Data();
        static void stat_REG_boot0_DECLARE_Data();
    private:
    };
}
#endif //TESTBENCH_CPP_OPENEPICENTRE_DATA_H