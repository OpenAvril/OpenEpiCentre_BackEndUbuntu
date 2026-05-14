#pragma once
#include <list>
#include <thread>
namespace CLIBOpenEpiCentre
{
    class Execute
    {
    public:
        Execute();
        virtual ~Execute();
        class Execute_Control* dyn_CLASS_get_ptr_Execute_Control();
        void dyn_REG_boot1_DEFINE_Execute(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Execute(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Execute(class Framework_Server* obj);
        void dyn_REG_boot4_INSTANTIATE_Execute(class Framework_Server* obj);
        void* dyn_PGM_get_ConcurrentQue_Server();
        void* dyn_PGM_get_WriteEnable_SERVERINPUTRECEIVE();
        void* dyn_PGM_get_WriteEnable_SERVEROUTPUTSEND();
        static void stat_CLASS_boot0_DECLARE_Execute();
        static void stat_CLASS_boot1_DEFINE_Execute();
        static void stat_CLASS_boot3_INITIALISE_Execute();
        static void stat_CLASS_boot4_INSTANTIATE_Execute();
        static void stat_REG_boot0_DECLARE_Execute();
    private:
        static Execute_Control* _stat_CLASS_ptr_Execute_Control;
        static std::list<std::thread*>* _stat_REG_List_Of_Threads;
        static void* _stat_PGM_ConcurrentQue_Server;
        static void* _stat_PGM_WriteEnable_SERVERINPUTRECEIVE;
        static void* _stat_PGM_WriteEnable_SERVEROUTPUTSEND;
        static void stat_CLASS_boot1_DEFINE_Execute_Control();
        static void stat_CLASS_boot3_INITIALISE_Execute_Control();
        static Execute_Control* stat_CLASS_get_ptr_Execute_Control();
        static void stat_REG_boot1_DEFINE_List_Of_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(Framework_Server* obj);
        static void stat_REG_boot3_INITIALISE_List_Of_Threads(Framework_Server* obj);
        static std::list<std::thread*>* stat_PGM_get_ptr_List_Of_Threads();
        static void stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        static void stat_PGM_boot1_DEFINE_SERVERINPUTRECEIVE();
        static void stat_PGM_boot1_DEFINE_SERVEROUTPUTSEND();
        static void stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        static void stat_PGM_boot3_INITIALISE_SERVERINPUTRECEIVE();
        static void stat_PGM_boot3_INITIALISE_SERVEROUTPUTSEND();
        static void* stat_PGM_get_ptr_ConcurrentQue_Server();
        static void* stat_PGM_get_ptr_WriteEnable_SERVERINPUTRECEIVE();
        static void* stat_PGM_get_ptr_WriteEnable_SERVEROUTPUTSEND();
    };
}
