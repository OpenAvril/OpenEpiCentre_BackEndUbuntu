#include "../../include/CLIB_OpenEpiCentre/CLIB_OpenEpiCentre.h"
#include "../../include/engine/Execute.h"
#include "../../include/engine/Execute_Control.h"
#include "../../include/engine/Global.h"
#include <iostream>
#include <list>
#include <thread>

#include "engine/Framework_App.h"
TestBench_Cpp_OpenEpiCentre::Execute_Control* TestBench_Cpp_OpenEpiCentre::Execute::_stat_CLASS_ptr_Execute_Control;
    std::list<std::thread*>* TestBench_Cpp_OpenEpiCentre::Execute::_stat_REG_List_Of_Threads;
    void* TestBench_Cpp_OpenEpiCentre::Execute::_stat_PGM_OpenEpiCentre;
// public.
    TestBench_Cpp_OpenEpiCentre::Execute::Execute()
    {
        std::cout << "entered CONSTRUCTOR of Execute()." << std::endl;
        stat_CLASS_boot0_DECLARE_Execute();
        stat_CLASS_boot1_DEFINE_Execute();
        stat_CLASS_boot3_INITIALISE_Execute();
        stat_REG_boot0_DECLARE_Execute();
        std::cout << "exiting CONSTRUCTOR of Execute()." << std::endl;
    }
        TestBench_Cpp_OpenEpiCentre::Execute::~Execute()
    {
        delete _stat_CLASS_ptr_Execute_Control;
        delete _stat_REG_List_Of_Threads;
    }
    TestBench_Cpp_OpenEpiCentre::Execute_Control* TestBench_Cpp_OpenEpiCentre::Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_Execute_Control();
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::dyn_REG_boot1_DEFINE_Execute()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Execute()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_Threads();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::dyn_REG_boot2_SUBSTANTIATE_Execute(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::dyn_REG_boot3_INITIALISE_Execute(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::dyn_REG_boot4_INSTANTIATE_Execute()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot0_DECLARE_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_OpenEpiCentre();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_OpenEpiCentre();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot4_INSTANTIATE_Execute()
    {
    std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* bytes_uint8_t = TestBench_Cpp_OpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(UINT8_MAX);

        //CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_generate_Program();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_flip_Input_DoubleBuffer();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_select_set_Intput_Subset(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_terminate_Program();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_pop_From_Stack_Of_Output();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_push_To_STACK_Of_Input();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerInputReceive();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerOutputSend();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_ServerInputSend();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_ServerOutputSend();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_IsInitialised_CLIBOpenEpiCentre();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise0_Value();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise1_Value();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise2_Value();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise3_Value();
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_A(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_B(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_A(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_B(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_A(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_B(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_A(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_B(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_A(bytes_uint8_t);
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_MetaData_PraiseEventId(bytes_uint8_t);

        delete bytes_uint8_t;
    std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_REG_boot0_DECLARE_Execute()
    {

    }
// private.
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = new Execute_Control();
        while (stat_CLASS_get_ptr_Execute_Control() == nullptr) {}
    }
    TestBench_Cpp_OpenEpiCentre::Execute_Control* TestBench_Cpp_OpenEpiCentre::Execute::stat_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_REG_boot1_DEFINE_List_Of_Threads()
    {
        _stat_REG_List_Of_Threads = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(class Framework_App* obj)
    {
        _stat_REG_List_Of_Threads = new std::list<std::thread*>();
        while (stat_PGM_get_ptr_List_Of_Threads() == nullptr) { }
        stat_PGM_get_ptr_List_Of_Threads()->resize(obj->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1);
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = nullptr;
        }
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_REG_boot3_INITIALISE_List_Of_Threads(class Framework_App* obj)
    {
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = new std::thread();
        }
    }
    std::list<std::thread*>* TestBench_Cpp_OpenEpiCentre::Execute::stat_PGM_get_ptr_List_Of_Threads()
    {
        return _stat_REG_List_Of_Threads;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_OpenEpiCentre()
    {
        _stat_PGM_OpenEpiCentre = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_OpenEpiCentre()
    {
        _stat_PGM_OpenEpiCentre = CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_OpenEpiCentre() == nullptr) {}
    }
    void* TestBench_Cpp_OpenEpiCentre::Execute::stat_PGM_get_ptr_OpenEpiCentre()
    {
        return _stat_PGM_OpenEpiCentre;
    }