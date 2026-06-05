#ifndef TESTBENCH_CPP_OPENEPICENTRE_APP_H
#define TESTBENCH_CPP_OPENEPICENTRE_APP_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class App
    {
    public:
        App();
        virtual ~App();
        class Algorithms* dyn_CLASS_get_ptr_Algorithms();
        class Data* dyn_CLASS_get_ptr_Data();
        class Execute* dyn_CLASS_get_ptr_Execute();
        void dyn_REG_boot1_DEFINE_App();
        void dyn_REG_boot2_SUBSTANTIATE_App();
        void dyn_REG_boot3_INITIALISE_App();
        void dyn_REG_boot4_INSTANTIATE_App();
        static void stat_CLASS_boot0_DECLARE_App();
        static void stat_CLASS_boot1_DEFINE_App();
        static void stat_CLASS_boot3_INITIALISE_App();
        static void stat_CLASS_boot4_INSTANTIATE_App();
        static void stat_REG_boot0_DECLARE_App();
    private:
        static class Algorithms* _stat_CLASS_ptr_Algorithms;
        static class Data* _stat_CLASS_ptr_Data;
        static class Execute* _stat_CLASS_ptr_Execute;
        static void stat_CLASS_boot1_DEFINE_Algorithms();
        static void stat_CLASS_boot1_DEFINE_Data();
        static void stat_CLASS_boot1_DEFINE_Execute();
        static void stat_CLASS_boot3_INITIALISE_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_Data();
        static void stat_CLASS_boot3_INITIALISE_Execute();
        static class Algorithms* stat_CLASS_get_ptr_Algorithms();
        static class Data* stat_CLASS_get_ptr_Data();
        static class Execute* stat_CLASS_get_ptr_Execute();
    };
}
#endif //TESTBENCH_CPP_OPENEPICENTRE_APP_H