#include "../include/WriteEnableForThreadsAt_ThreadLogsId_App.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Control.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Control* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control;
    CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId_App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App();
    }
    CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::~WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId_App()
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ThreadLogsId_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId()" << std::endl;
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ThreadLogsId_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global()->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ThreadLogsId_Control_2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ThreadLogsId_2bitFLAG_IDLE( << std::endl;
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteEndThreadRELASE_REMAINING(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global()->dyn_REG_get_WriteEnableForThreadsAt_ThreadLogsId_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Control_writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ThreadLogsId_Control_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Control* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control();
    }

    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control = nullptr;
    }

    void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control = new class CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control() == nullptr) {}
    }
    CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Control* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control;
    }