#include "../include/WriteEnableForThreadsAt_SIMULATION_Control.h"

#include <array>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <list>

#include "../include/WriteEnableForThreadsAt_SIMULATION.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Framework.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Global.h"
bool* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_ptr_flag_praisingWrite;
std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_CONST_2bitFLAG_STATE;
std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
uint8_t* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
std::list<uint8_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_QUE_Of_ThreadID_To_WRITE;
uint8_t* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::_stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::WriteEnableForThreadsAt_SIMULATION_Control()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control();
        boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control();
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::~WriteEnableForThreadsAt_SIMULATION_Control()
    {
        delete _stat_REG_ptr_flag_praisingWrite;
        delete _stat_REG_CONST_2bitFLAG_STATE;
        delete _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
        delete _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
        delete _stat_REG_QUE_Of_ThreadID_To_WRITE;
        delete _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control" << std::endl;

        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;

        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
        stat_REG_boot1_DEFINE_ptr_flag_praisingWrite();
        stat_REG_boot1_DEFINE_ptr_3STATE_flag_WriteState();
        stat_REG_boot1_DEFINE_ptr_WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteIDLE_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_WriteWAIT_Count_For_ThreadId();
        stat_REG_boot1_DEFINE_ptr_new_writeCycle_Try_ThreadId_Index();
        stat_REG_boot1_DEFINE_ptr_QUE_Of_ThreadID_To_WRITE();
        stat_REG_boot1_DEFINE_ptr_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Control(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_flag_praisingWrite();
        stat_REG_boot2_SUBSTANTIATE_ptrv_3STATE_flag_WriteState();
        stat_REG_boot2_SUBSTANTIATE_WriteACTIVE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_WriteIDLE_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_WriteWAIT_Count_For_ThreadId(obj);
        stat_REG_boot2_SUBSTANTIATE_new_writeCycle_Try_ThreadId_Index();
        stat_REG_boot2_SUBSTANTIATE_ptr_QUE_Of_ThreadID_To_WRITE();
        stat_REG_boot2_SUBSTANTIATE_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
        stat_REG_boot3_INITIALISE_ptr_flag_praisingWrite();
        stat_REG_boot3_INITIALISE_ptr_3STATE_flag_WriteState();
        stat_REG_boot3_INITIALISE_ptr_WriteACTIVE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_WriteIDLE_Count_For_ThreadId();
        stat_REG_boot3_INITIALISE_WriteWAIT_Count_For_ThreadIdd();
        stat_REG_boot3_INITIALISE_new_writeCycle_Try_ThreadId_Index();
        stat_REG_boot3_INITIALISE_ptr_QUE_Of_ThreadID_To_WRITE();
        stat_REG_boot3_INITIALISE_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_Control(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::app_FUNCT_writeEnable_Activate(WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT());
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::app_FUNCT_writeEnable_SortQue(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::app_FUNCT_writeEnable_Request(WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_flag_praisingWrite() == true)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(true);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index());
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT());
        }
        else
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() + 1);
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads())
            {
                dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
            app_FUNCT_writeEnable_Request(obj, coreId);
        }
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::app_FUNCT_writeQue_Update(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    bool CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_ptr_flag_praisingWrite()
    {
        return *stat_REG_get_ptr_flag_praisingWrite();
    }
    std::array<bool, 2> CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index();
    }
    uint8_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID)
    {
        auto temp = stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }
    uint8_t CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_get_Item_writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_writeCycle_Try_ThreadId_Index();
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_flag_praisingWrite(bool newBoolValue)
    {
        stat_REG_dyn_REG_set_flag_praisingWrite(newBoolValue);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        stat_REG_set_Item_On_Of_3STATE_flag_WriteState(concurrentThreadID, new2bitState);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_REG_set_writeCycle_Try_ThreadId_Index(newID);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID)
    {
        stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(slotID, newID);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dyn_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_REG_set_writeCycle_Try_ThreadId_Index(newID);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::dynamicStagger(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId)
    {
        if (*stat_REG_get_ptr_writeCycle_Try_ThreadId_Index() == coreId)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//TODO record till flag change
            {
                ptr_count = ptr_count + 1;
            }
        }
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::writeEnable_ShiftQueValues(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        auto temp_A = static_cast<uint32_t>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_flag_praisingWrite()
    {
        _stat_REG_ptr_flag_praisingWrite = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_3STATE_flag_WriteState()
    {
        _stat_REG_CONST_2bitFLAG_STATE = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_ThreadID_To_WRITE = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot1_DEFINE_ptr_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_writeCycle_Try_ThreadId_Index = nullptr;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_ptr_flag_praisingWrite()
    {
        _stat_REG_ptr_flag_praisingWrite = new bool();
        *_stat_REG_ptr_flag_praisingWrite = true;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_ptrv_3STATE_flag_WriteState()
    {
        _stat_REG_CONST_2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState() == nullptr) {}
        _stat_REG_CONST_2bitFLAG_STATE->at(0) = { true, true };
        _stat_REG_CONST_2bitFLAG_STATE->at(1) = { true, true };
        _stat_REG_CONST_2bitFLAG_STATE->at(2) = { true, true };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_WriteACTIVE_Count_For_ThreadId(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = new std::list<uint32_t>();
        while (stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads());
        for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); threadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
            std:advance(temp, threadId);
            *temp = (uint32_t)(UINT32_MAX);
        }

    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_WriteIDLE_Count_For_ThreadId(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = new std::list<uint32_t>();
        while (stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads());
        for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); threadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std:
            std::advance(temp, threadId);
            *temp = uint32_t(UINT32_MAX);
        }

    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_WriteWAIT_Count_For_ThreadId(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = new std::list<uint32_t>();
        while (stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId() == nullptr) {}
        stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads());
        for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); threadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
            std:
                std::advance(temp, threadId);
            *temp = uint32_t(UINT32_MAX);
        }
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_new_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = new uint8_t();
        *_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_ptr_QUE_Of_ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_ThreadID_To_WRITE = new std::list<uint8_t>();
        while (stat_REG_get_ptr_QUE_List_Of_ThreadToWrite() == NULL) {}
        *_stat_REG_QUE_Of_ThreadID_To_WRITE = { static_cast<uint8_t>(UINT8_MAX), static_cast<uint8_t>(UINT8_MAX), static_cast<uint8_t>(UINT8_MAX) , static_cast<uint8_t>(UINT8_MAX) };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot2_SUBSTANTIATE_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_writeCycle_Try_ThreadId_Index = new uint8_t();
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_ptr_flag_praisingWrite()
    {
        _stat_REG_ptr_flag_praisingWrite = new bool();
        *_stat_REG_ptr_flag_praisingWrite = false;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_ptr_3STATE_flag_WriteState()
    {
        _stat_REG_CONST_2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState() == NULL) {}
        _stat_REG_CONST_2bitFLAG_STATE->at(0) = { false, false };
        _stat_REG_CONST_2bitFLAG_STATE->at(1) = { false, true };
        _stat_REG_CONST_2bitFLAG_STATE->at(2) = { true, false };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_ptr_WriteACTIVE_Count_For_ThreadId()
    {
        *_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_WriteIDLE_Count_For_ThreadId()
    {
        *_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_WriteWAIT_Count_For_ThreadIdd()
    {
        *_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_new_writeCycle_Try_ThreadId_Index()
    {
        *_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(1);
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_ptr_QUE_Of_ThreadID_To_WRITE()
    {
        *_stat_REG_QUE_Of_ThreadID_To_WRITE = { static_cast<uint8_t>(0), static_cast<uint8_t>(1), static_cast<uint8_t>(2), static_cast<uint8_t>(3) };
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_boot3_INITIALISE_writeCycle_Try_ThreadId_Index()
    {
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(0);
    }
    bool* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_flag_praisingWrite()
    {
        return _stat_REG_ptr_flag_praisingWrite;
    }
    std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()
    {
        return _stat_REG_CONST_2bitFLAG_STATE;
    }
    std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
    }
    std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
    }
    std::list<uint32_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
    }
    uint8_t* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        return _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
    }
    std::list<uint8_t>* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _stat_REG_QUE_Of_ThreadID_To_WRITE;
    }
    uint8_t* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_get_ptr_writeCycle_Try_ThreadId_Index()
    {
        return _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_dyn_REG_set_flag_praisingWrite(bool newFlag)
    {
        *_stat_REG_ptr_flag_praisingWrite = newFlag;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_Item_On_Of_3STATE_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        auto temp = stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        *_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = concurrentThreadID;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control::stat_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = newValue;
    }