#include "../include/WriteEnableForThreadsAt_ServerOutputSend_App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control;
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App();
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::~WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        std::cout << "thread "  << threadId << " :: entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
        std::cout << "thread "  << threadId << " :: exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_App()
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()" << std::endl;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
    }

    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control = nullptr;
    }

    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control = new class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control() == nullptr) {}
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Control* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control;
    }