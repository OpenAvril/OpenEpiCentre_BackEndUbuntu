#include "../include/WriteEnableForThreadsAt_ServerInputReceive.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Global.h"
class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::_stat_CLASS_ptr_Global = NULL;
    class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive();
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::~WriteEnableForThreadsAt_ServerInputReceive()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::dyn_app_FUNCT_write_End(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::dyn_app_FUNCT_write_Start(CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }