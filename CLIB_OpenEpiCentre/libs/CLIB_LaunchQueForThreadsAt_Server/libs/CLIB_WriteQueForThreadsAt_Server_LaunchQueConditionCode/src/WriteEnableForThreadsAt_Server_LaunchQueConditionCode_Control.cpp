#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global.h"
#include <array>
#include <iostream>
#include <iterator>
    bool* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE;
    bool* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    bool* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE;
    bool* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE;
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId;
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId;
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId;
    std::list<uint8_t>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE;
    uint8_t* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index;
    uint8_t* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index;
// public.
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control() {

    }
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::~WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control() {
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING;
            delete _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId;
            delete _stat_REG_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index;
        }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_dynamicIn(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_dynamicOut(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_Activate(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT());
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        auto temp_A = static_cast<unsigned long long>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_SortQue(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeQue_Update(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        std::cout << "thread "  << threadId << " :: entered REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE();
        std::cout << "thread "  << threadId << " :: exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        std::cout << "thread "  << threadId << " :: entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ptr_QUE_Of_ThreadID_To_WRITE(obj);
        std::cout << "thread "  << threadId << " :: exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj) {
        std::cout << "thread "  << threadId << " :: entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadIdd();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ptr_QUE_Of_ThreadID_To_WRITE();
        std::cout << "thread "  << threadId << " :: exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control()" << std::endl;
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE();
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE();
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index();
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index();
    }
    std::array<bool, 2> CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_2ibt_FLAG_WriteState(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    unsigned long long CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    unsigned long long CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    unsigned long long CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }

    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2ibt_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState(concurrentThreadID, new2bitState);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount){
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID){
        stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(slotID, newID);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue) {
        stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(newValue);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(uint8_t newValue) {
       stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(newValue);
    }
// private.
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index = nullptr;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState() == nullptr) {}
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE->at(2) = { true, true };
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId(CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId = new std::list<unsigned long long>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ptr_QUE_Of_ThreadID_To_WRITE(CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite() == nullptr) {}
        stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = UINT8_MAX;
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState() == nullptr) {}
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()->at(2) = { true, false };
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadIdd() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<unsigned long long>(0);
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ptr_QUE_Of_ThreadID_To_WRITE() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint8_t>(threadId);
        }
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index = 0;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index = 0;
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE;
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE;
    }
    bool CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState() {
        return _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2bitFLAG_STATE;
    }
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId;
    }
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIDLE_Count_For_ThreadId;
    }
    std::list<unsigned long long>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWAIT_Count_For_ThreadId;
    }
    std::list<uint8_t>* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite() {
        return _stat_REG_QUE_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_ThreadID_To_WRITE;
    }
    uint8_t* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index;
    }
    uint8_t* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_FLAG_Control_iswriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = concurrentThreadID;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index = newValue;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control::stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index = newValue;
    }