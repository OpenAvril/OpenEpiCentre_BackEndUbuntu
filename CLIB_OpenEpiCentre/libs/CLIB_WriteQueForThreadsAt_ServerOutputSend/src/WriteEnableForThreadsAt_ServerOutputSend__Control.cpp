#include "../include/WriteEnableForThreadsAt_ServerOutputSend__App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Control.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Global.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <list>
    bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE;
    bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
    bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE;
    bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING;
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
    std::list<uint8_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index;
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index;
// public.
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::WriteEnableForThreadsAt_ServerOutputSend__Control() {

    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::~WriteEnableForThreadsAt_ServerOutputSend__Control() {
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE;
            delete _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING;
            delete _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
            delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
            delete _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index;
            delete _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index;
        }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__dynamicIn(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__dynamicOut(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index(false);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() == coreId) {

        }
        else {
            while (!obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING()) {

            }
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Activate(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId) {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT());
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId_A, uint8_t coreId_B) {
        auto temp_A = static_cast<uint64_t>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_SortQue(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj) {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeQue_Update(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj) {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj) {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE();
        stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE();
        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj) {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE();
        stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState();
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE(obj);
        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj) {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE();
        stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadIdd();
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE();
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE();
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING() {
        return stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING();
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index();
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() {
        return stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index();
    }
    std::array<bool, 2> CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_FLAG_WriteState(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint64_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }

    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE(FLAGState);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING(bool FLAGState) {
        stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING(FLAGState);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState(concurrentThreadID, new2bitState);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount){
        stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID){
        stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(slotID, newID);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue) {
        stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index(newValue);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue) {
       stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index(newValue);
    }
// private.
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE = true;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING() {
        _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING = new bool();
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING = true;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState() == nullptr) {}
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(2) = { true, true };
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId = new std::list<uint64_t>();
        while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = UINT64_MAX;
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite() == nullptr) {}
        stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = UINT8_MAX;
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() {
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index = UINT8_MAX;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE = false;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING() {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING = false;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()
    {
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState() == nullptr) {}
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()->at(0) = { false, false };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()->at(1) = { false, true };
        stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()->at(2) = { true, false };
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadIdd() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE() {
        for (int threadId = 0; threadId < stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->size(); threadId++) {
            auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
            std::advance(temp, threadId);
            *temp = static_cast<uint8_t>(threadId);
        }
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index = 0;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() {
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index = 0;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING() {
        return _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING;
    }
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState() {
        return _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
    }
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
    }
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
    }
    std::list<uint64_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId() {
        return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
    }
    std::list<uint8_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite() {
        return _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
    }
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index;
    }
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index() {
        return _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteStartThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteStartThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_ONE(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_ONE = newFLAG;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend__Control__isWriteEndThreadRELASE_REMAINING(bool newFLAG) {
        *_stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend__FLAG_Control__isWriteEndThreadRELASE_REMAINING = newFLAG;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState) {
        auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_FLAG_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount) {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID) {
        auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = concurrentThreadID;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteStartThreadId_Index = newValue;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue)  {
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_WriteEndThreadId_Index = newValue;
    }