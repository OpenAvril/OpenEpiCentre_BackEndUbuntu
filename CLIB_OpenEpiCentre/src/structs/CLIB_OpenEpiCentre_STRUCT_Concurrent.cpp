#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute_Control.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <iostream>

#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App.h"
uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(CLIB_OpenEpiCentre_Framework* obj, uint8_t playerId, unsigned long long praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset) {
        switch (praiseEventId) {
            case 0: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise0()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(ptr_Output_Subset));
                break;
            }
            case 1: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise1()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1*>(ptr_Output_Subset));
                break;
            }
            case 2: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise2()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2*>(ptr_Output_Subset));
                break;
            }
            case 3: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise3()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(ptr_Output_Subset));
                break;
            }
            default: {
                break;
            }
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
        _stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = nullptr;
        std::cout << "exiting dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
        _stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = new uint8_t();
        *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = static_cast<uint8_t>(255);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_threadId()
    {
        return *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_threadId(uint8_t praiseId)
    {
        *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = praiseId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency(CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentThreadId)
    {
        bool* checkPass = new bool(false);
        bool* doneOnce = new bool(false);
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));//static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::concurrent_?)
            while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId)) {
                if (!*doneOnce) {
                    obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId, true);
                    *doneOnce = !*doneOnce;
                }
            }
            *checkPass = true;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        *checkPass = false;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            if (concurrentThreadId == 0) {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                    std::cout << "thread " << concurrentThreadId << " :: OpenEpiCentre : waiting on system initialisation flag is set." << std::endl;
                }
                *checkPass = !obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
            } else {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                    std::cout << "thread " << concurrentThreadId << " :: OpenEpiCentre : waiting on system initialisation flag is set." << std::endl;
                }
            }
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));//static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::concurrent_?)
        }
        *checkPass = false;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                switch (CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId)))) {
                case false: {

                    break;
                }
                case true: {
                    if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction() == true)
                    {
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(concurrentThreadId + 1)));
                        //todo
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Output_Subset(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId());
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(obj, concurrentThreadId);
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(concurrentThreadId + 1)));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                            obj,
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()
                        );
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(concurrentThreadId + 1)));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(obj, concurrentThreadId);
                        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend() == true)
                        {
                            if (CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch()) == CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle())
                            {
                                CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch());
                            }
                        }
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<unsigned long>(concurrentThreadId + 1)));
                    }
                    break;
                }
                default: {
                    break;
                };
                }
            }
            *checkPass = true;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Concurrent()" << std::endl;
    }
// private.