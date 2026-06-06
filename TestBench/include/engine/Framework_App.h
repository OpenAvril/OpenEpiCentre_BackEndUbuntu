#ifndef TESTBENCH_CPP_OPENEPICENTRE_FRAMEWORK_APP_TESTBENCH_H
#define TESTBENCH_CPP_OPENEPICENTRE_FRAMEWORK_APP_TESTBENCH_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class Framework_App
    {
    public:
        Framework_App();
        virtual ~Framework_App();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_Global_and_Settings();
        class App* dyn_CLASS_get_ptr_App();
        class Global* dyn_CLASS_get_ptr_Global();
        void dyn_REG_boot1_DEFINE_Framework_App();
        void dyn_REG_boot2_SUBSTANTIATE_Framework_App(Framework_App* obj);
        void dyn_REG_boot3_INITIALISE_Framework_App(Framework_App* obj);
        void dyn_PGM_boot4_INSTANTIATE_Framework_App();
        static void stat_CLASS_boot0_DECLARE_Framework_App();
        static void stat_CLASS_boot1_DEFINE_Framework_App();
        static void stat_CLASS_boot3_INITIALISE_Framework_App();
        static void stat_CLASS_boot4_INSTANTIATE_Framework_App();
        static void stat_REG_boot0_DECLARE_Framework_App();
        static void stat_STRUCT_boot0_DECLARE();
        static void stat_STRUCT_boot1_DEFINE();
        static void stat_STRUCT_boot3_INITIALISE();
    private:
        static class App* _stat_CLASS_ptr_App;
        static class Global* _stat_CLASS_ptr_Global;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot1_DEFINE_App();
        static void stat_CLASS_boot3_INITIALISE_App();
        static Global* stat_CLASS_get_ptr_Global();
        static App* stat_CLASS_get_ptr_App();

    };
};
#endif //TESTBENCH_CPP_OPENEPICENTRE_FRAMEWORK_TESTBENCH_H
