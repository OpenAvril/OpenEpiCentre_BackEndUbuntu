#include "engine/Algorithms.h"
#include "engine/Framework_Server.h"
#include "engine/Server.h"
#include "structs/Concurrent.h"
#include "structs/Concurrent_Control.h"
#include "structs/User_Algorithm.h"
#include "structs/praise_sets/Algorithm_praise0.h"
#include "structs/praise_sets/Algorithm_praise1.h"
#include "structs/praise_sets/Algorithm_praise2.h"
#include "structs/praise_sets/Algorithm_praise3.h"
#include "structs/praise_sets/Input_praise0.h"
#include "structs/praise_sets/Input_praise1.h"
#include "structs/praise_sets/Input_praise2.h"
#include "structs/praise_sets/Input_praise3.h"
#include "structs/praise_sets/Output_praise0.h"
#include "structs/praise_sets/Output_praise1.h"
#include "structs/praise_sets/Output_praise2.h"
#include "structs/praise_sets/Output_praise3.h"
#include <cstdint>
#include <iostream>

#include "engine/Data.h"
#include "engine/Data_Control.h"
#include "engine/Execute.h"
#include "engine/Execute_Control.h"
#include "engine/Global.h"
#include "structs/Input.h"
#include "structs/Output.h"
#include "structs/Output_Control.h"
CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::_stat_CLASS_ptr_Concurrent_Control;
// public.
    void CLIBOpenEpiCentre::Concurrent::app_do_ConcurrentAlgorithm_For_PraiseEventId(Framework_Server obj, uint8_t playerId, uint8_t praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset)
    {
        switch (praiseEventId)
        {
        case static_cast<uint8_t>(0):
			Algorithm_praise0* _stat_STRUCT_Algorithm_praise0_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise0();
            _stat_STRUCT_Algorithm_praise0_Subset->app_Do_Praise(reinterpret_cast<Input_praise0*>(ptr_Input_Subset), reinterpret_cast<Output_praise0*>(ptr_Output_Subset));
            break;

        case static_cast<uint8_t>(1):
            Algorithm_praise1* _stat_STRUCT_Algorithm_praise1_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise1();
            _stat_STRUCT_Algorithm_praise1_Subset->app_Do_Praise(reinterpret_cast<Input_praise1*>(ptr_Input_Subset), reinterpret_cast<Output_praise1*>(ptr_Output_Subset));
            break;

        case static_cast<uint8_t>(2):
            Algorithm_praise2* _stat_STRUCT_Algorithm_praise2_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise2();
            _stat_STRUCT_Algorithm_praise2_Subset->app_Do_Praise(reinterpret_cast<Input_praise2*>(ptr_Input_Subset), reinterpret_cast<Output_praise2*>(ptr_Output_Subset));
            break;

        case static_cast<uint8_t>(3):
            Algorithm_praise3* _stat_STRUCT_Algorithm_praise3_Subset = obj.dyn_STRUCT_get_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise3();
            _stat_STRUCT_Algorithm_praise3_Subset->app_Do_Praise(reinterpret_cast<Input_praise3*>(ptr_Input_Subset), reinterpret_cast<Output_praise3*>(ptr_Output_Subset));
            break;

        default:
            break;
        }
    }
    CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::dyn_CLASS_get_ptr_Concurrent_Control()
    {
        return stat_CLASS_get_ptr_Concurrent_Control();
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_app_thread_Concurrency(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool* doneOnce = new bool(true);
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (*doneOnce == true)
            {
                // set condition code (meta data).
                *doneOnce = false;
            }
        }
        //std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised() == true)
        {

        }
        //std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == false)
        {
            /*
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), &concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTReceive::CLIBWriteEnableForThreadsAtSERVERINPUTReceive::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                    //todo
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_CLASS_get_ptr_Output_Control()->app_select_And_Set_Output_Subset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Output_praiseEventId());
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->dyn_CLASS_get_ptr_Concurrent_Control()->app_selectset_Algorithm_Scubset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(), concurrent_threadID);
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Input(obj, concurrent_threadID);
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTReceive::CLIBWriteEnableForThreadsAtSERVERINPUTReceive::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->app_do_ConcurrentAlgorithm_For_PraiseEventId(
                        obj,
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_playerId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Algorithms_Subset(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Inputs_Subset(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset()
                    );                    
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputReceive(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Output(obj, concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_thread_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(concurrent_threadID));
                    if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server())) == OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Idle(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_request_Wait_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputReceive(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(static_cast<uint8_t>(concurrent_threadID + static_cast<uint8_t>(1))));
                }
                break;
            }
            */
        }
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
        stat_CLASS_boot1_DEFINE_Concurrent_Control();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_REG_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Concurrent()" << std::endl;
    }

// private.
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = nullptr;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = new class CLIBOpenEpiCentre::Concurrent_Control();
        while (stat_CLASS_get_ptr_Concurrent_Control() == nullptr) {}
    }
    CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::stat_CLASS_get_ptr_Concurrent_Control()
    {
        return _stat_CLASS_ptr_Concurrent_Control;
    }