#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <iostream>

#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App.h"
uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::_stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(CLIB_OpenEpiCentre__Framework* obj, uint8_t playerId, unsigned long long praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset) {
        switch (praiseEventId) {
            case 0: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise0()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0*>(ptr_Output_Subset));
                break;
            }
            case 1: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise1()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1*>(ptr_Output_Subset));
                break;
            }
            case 2: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise2()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2*>(ptr_Output_Subset));
                break;
            }
            case 3: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise3()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(ptr_Output_Subset));
                break;
            }
            default: {
                break;
            }
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
        _stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId = nullptr;
        std::cout << "exiting dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
        _stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId = new uint8_t();
        *_stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId = static_cast<uint8_t>(255);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_get_CLIB_OpenEpiCentre__Concurrent__threadId()
    {
        return *_stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::dyn_REG_set_CLIB_OpenEpiCentre__Concurrent__threadId(uint8_t praiseId)
    {
        *_stat_REG_CLIB_OpenEpiCentre__Concurrent__threadId = praiseId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_app_thread_Concurrency(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrentThreadId)
    {
        /*
        bool* checkPass = new bool(false);
        bool* doneOnce = new bool(false);
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_Start(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId)) {
                if (!*doneOnce) {
                    obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_set_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId, true);
                    *doneOnce = !*doneOnce;
                }
            }
            *checkPass = true;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        *checkPass = false;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_Start(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised()) {

            }
            *checkPass = true;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        *checkPass = false;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_Start(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised()) {
                switch (CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbunsignedLongLong(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_ConcurrentCoreState(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(concurrentThreadId)))) {
                case false: {

                    break;
                }
                case true: {
                    if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction() == true)
                    {
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(static_cast<unsigned long>(concurrentThreadId + 1)));
                        //todo
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT__Output_Subset(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId());
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_pop_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Input(obj, concurrentThreadId);
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(static_cast<unsigned long>(concurrentThreadId + 1)));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                            obj,
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()
                        );
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(static_cast<unsigned long>(concurrentThreadId + 1)));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_push_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Output(obj, concurrentThreadId);
                        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_thread_End(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(concurrentThreadId));
                        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend() == true)
                        {
                            if (CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_ConcurrentCoreState(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_coreId_To_launch()) == CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Idle())
                            {
                                CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_request_Wait_launch(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_coreId_To_launch());
                            }
                        }
                        //CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(static_cast<unsigned long>(concurrentThreadId + 1)));
                    }
                    break;
                }
                default: {
                    break;
                };
                }
            }
            *checkPass = true;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App_FUNCT_write_End(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        */
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_REG_boot0_DECLARE_Concurrent()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Concurrent()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Concurrent()" << std::endl;
    }
// private.