#include "../include/WriteEnableForThreadsAt_ServerOutputSend.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Global.h"
class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::_stat_CLASS_ptr_Global = NULL;
    class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend();
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::~WriteEnableForThreadsAt_ServerOutputSend()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::dyn_app_FUNCT_write_End(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId)
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
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::dyn_app_FUNCT_write_Start(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }