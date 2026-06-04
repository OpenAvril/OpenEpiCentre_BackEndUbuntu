#ifndef TESTBENCH_CPP_OPENEPICENTRE_ALGORITHMS_H
#define TESTBENCH_CPP_OPENEPICENTRE_ALGORITHMS_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class Algorithms
    {
    public:
        Algorithms();
        virtual ~Algorithms();
        void dyn_REG_boot1_DEFINE_Algorithm();
        void dyn_REG_boot2_SUBSTANTIATE_Algorithm();
        void dyn_REG_boot3_INITIALISE_Algorithm();
        void dyn_REG_boot4_INSTANTIATE_Algorithm();
        static void stat_CLASS_boot0_DECLARE_Algorithm();
        static void stat_CLASS_boot1_DEFINE_Algorithm();
        static void stat_CLASS_boot3_INITIALISE_Algorithm();
        static void stat_CLASS_boot4_INSTANTIATE_Algorithm();
        static void stat_REG_boot0_DECLARE_Algorithm();
    private:
    };
}
#endif //TESTBENCH_CPP_OPENEPICENTRE_ALGORITHMS_H
