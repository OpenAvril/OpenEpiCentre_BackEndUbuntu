#pragma once
namespace CLIBOpenEpiCentre
{
    struct Concurrent
    {
    public:
        void app_do_ConcurrentAlgorithm_For_PraiseEventId(Framework_Server obj, uint8_t playerId, uint8_t praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        class Concurrent_Control* dyn_CLASS_get_ptr_Concurrent_Control();
        void dyn_REG_boot1_DEFINE_Concurrent();
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent();z
        void dyn_REG_boot3_INITIALISE_Concurrent(Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent();
        static void stat_app_thread_Concurrency(Framework_Server* obj, uint8_t concurrent_threadID);
        static void stat_CLASS_boot0_DECLARE_Concurrent();
        static void stat_CLASS_boot1_DEFINE_Concurrent();
        static void stat_CLASS_boot3_INITIALISE_Concurrent();
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent();
        static void stat_REG_boot0_DECLARE_Concurrent();
    private:
        static Concurrent_Control* _stat_CLASS_ptr_Concurrent_Control;
        static void stat_CLASS_boot1_DEFINE_Concurrent_Control();
        static void stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        static Concurrent_Control* stat_CLASS_get_ptr_Concurrent_Control();
     };
}