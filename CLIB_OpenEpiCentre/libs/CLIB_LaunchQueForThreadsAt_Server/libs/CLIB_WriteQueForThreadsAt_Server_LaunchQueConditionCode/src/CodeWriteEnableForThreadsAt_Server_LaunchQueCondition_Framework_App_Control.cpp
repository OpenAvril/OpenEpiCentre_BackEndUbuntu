#include "../include/CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework.h"
#include "../include/CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_Global.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <list>
    bool* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE;
    bool* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    bool* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE;
    bool* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE;
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId;
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId;
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId;
    std::list<uint8_t>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE;
    uint8_t* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
    uint8_t* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
// public.
    CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
    }
    CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::~CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
        delete _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE;
        delete _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        delete _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE;
        delete _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        delete _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE;
        delete _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId;
        delete _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId;
        delete _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId;
        delete _stat_REG_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE;
        delete _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
        delete _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicIn(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicIn(threadId)."));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId,false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)) {

            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicIn(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicOut(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicOut(threadId)."));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId,false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId) == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)) {

            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_dynamicOut(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_Activate(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_Activate(threadId)."));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2ibt_FLAG_WriteState(threadId, coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WAIT(threadId));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_Activate(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId)."));
        auto temp_A = static_cast<unsigned long long>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId,coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId, coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId,coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId,coreId_B, temp_B);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_SortQue(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_SortQue(threadId)."));
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId) - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WRITE(threadId))
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WAIT(threadId))
                        || (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE(threadId)))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId,obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WRITE(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId,index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId,obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE(threadId))
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, index_A) < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WAIT(threadId))
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE(threadId))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId, index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WAIT(threadId))
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_ShiftQueValues(threadId, obj, index_A, index_B);
                        }
                    }
                }
            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeEnable_SortQue(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeQue_Update(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeQue_Update(threadId)."));
        for (uint8_t concurrenctthreadId = 0; concurrenctthreadId < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId); concurrenctthreadId++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE(threadId))
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, concurrenctthreadId) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WAIT(threadId))
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId, concurrenctthreadId) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId, concurrenctthreadId) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_WRITE(threadId))
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId, concurrenctthreadId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId, concurrenctthreadId) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId, concurrenctthreadId, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId, concurrenctthreadId, 0);
            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_APP_FUNCT_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeQue_Update(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_boot1_DEFINE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot1_DEFINE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
        stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_ptr_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot1_DEFINE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId,obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId,obj);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot2_SUBSTANTIATE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_boot3_INITIALISE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot3_INITIALISE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
        stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
        stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId);
        stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : dyn_REG_boot3_INITIALISE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control(threadId)."));
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        return stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId);
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        return stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId);
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        return stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId);
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        return stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId);
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        return stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId);
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        return stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId);
    }
    std::array<bool, 2> CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_2ibt_FLAG_WriteState(threadId)."));
        return *temp;
    }
    unsigned long long CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteActive_Count_For_threadId(threadId)."));
        return *temp;
    }
    unsigned long long CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteIdle_Count_For_threadId(threadId)."));
        return *temp;
    }
    unsigned long long CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_Item_On_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_list_Of_WriteWait_Count_For_threadId(threadId)."));
        return *temp;
    }
    uint8_t CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
        std::advance(temp, slotID);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : dyn_REG_get_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)."));
        return *temp;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId, bool FLAGState) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId,FLAGState);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId, bool FLAGState) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId,FLAGState);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId, bool FLAGState) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId,FLAGState);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId, bool FLAGState) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId,FLAGState);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2ibt_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId, std::array<bool, 2> new2bitState) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2ibt_FLAG_WriteState(threadId)."));
        stat_REG_set_Item_On_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId,concurrentthreadId, new2bitState);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)."));
        stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)."));
        stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount){
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)."));
        stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId,concurrentthreadId, newCount);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID, uint8_t newID){
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)."));
        stat_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId,slotID, newID);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId, uint8_t newValue) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(newValue);
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId, uint8_t newValue) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : dyn_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
       stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(newValue);
    }
// private.
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE(threadId)."));
        _stat_REG_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot1_DEFINE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE = true;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING = true;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE = true;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING = true;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId) == nullptr) {}
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE->at(2) = { true, true };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId, WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(uint8_t threadId, CLIBLaunchQueAtServer::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)."));
        _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(uint8_t threadId, CLIBLaunchQueAtServer::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)."));
        _stat_REG_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId) == nullptr) {}
        stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads(threadId));
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
            std::advance(temp, threadId);
            *temp = UINT8_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = new uint8_t();
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = UINT8_MAX;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = new uint8_t();
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = UINT8_MAX;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE = false;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING = false;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE = false;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING = false;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
        _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId) == nullptr) {}
        stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->at(2) = { true, false };
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadIdd(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId)."));
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadIdd(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)."));
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint8_t>(threadId);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_ptr_QUE_Of_threadId_To_WRITE(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = 0;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = 0;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control : stat_REG_boot3_INITIALISE_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE;
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE;
    }
    bool CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
        return _stat_REG_CONST_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_2bitFLAG_STATE;
    }
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)."));
        return _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId;
    }
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)."));
        return _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIDLE_Count_For_threadId;
    }
    std::list<unsigned long long>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)."));
        return _stat_REG_LIST_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWAIT_Count_For_threadId;
    }
    std::list<uint8_t>* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)."));
        return _stat_REG_QUE_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_threadId_To_WRITE;
    }
    uint8_t* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        return _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index;
    }
    uint8_t* CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        return _stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(uint8_t threadId,bool newFLAG) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(uint8_t threadId,bool newFLAG) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(uint8_t threadId,bool newFLAG) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_ONE = newFLAG;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(uint8_t threadId, bool newFLAG) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : stat_REG_set_FLAG_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId)."));
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ThreadLogsId_FLAG_Control_isWriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_Item_On_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(uint8_t threadId, uint8_t concurrentthreadId, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => std::array<bool, 2> : stat_REG_set_Item_On_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_3STATE_FLAG_WriteState(threadId)."));
        *temp = new2bitState;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long : stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteACTIVE_Count_For_threadId(threadId)."));
        *temp = newCount;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long : stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteIdle_Count_For_threadId(threadId)."));
        *temp = newCount;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long : stat_REG_set_Item_On_list_Of_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_WriteWait_Count_For_threadId(threadId)."));
        *temp = newCount;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(uint8_t threadId, uint8_t slotID, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_ptr_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)->begin();
        std::advance(temp, slotID);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => uint8_t : stat_REG_set_Item_On_QUE_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_List_Of_ThreadToWrite(threadId)."));
        *temp = concurrentthreadId;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(uint8_t threadId, uint8_t newValue) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => uint8_t : stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)."));
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index = newValue;
    }
    void CLIBLaunchQueAtServer::CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control::stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(uint8_t threadId, uint8_t newValue) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : stat_REG_get_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)."));
        *_stat_REG_ptr_CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index = newValue;
    }