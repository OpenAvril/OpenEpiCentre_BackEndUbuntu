#include "../include/WriteEnableForThreadsAt_ServerInputReceive_App.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control;
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App();
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::~WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_App()
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()" << std::endl;
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerInputReceive_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive_Control_2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerInputReceive_2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteEndThreadRELASE_REMAINING(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerInputReceive_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerInputReceive_Control_writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive_Control_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
    }

    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control = nullptr;
    }

    void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control = new class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control() == nullptr) {}
    }
    CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Control* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control;
    }