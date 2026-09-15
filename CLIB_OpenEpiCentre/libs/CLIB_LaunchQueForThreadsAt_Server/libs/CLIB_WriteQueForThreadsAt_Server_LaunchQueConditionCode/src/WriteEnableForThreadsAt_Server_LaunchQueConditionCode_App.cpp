#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::_stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control;
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
    }
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::~WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_iswriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_writeEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control_isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control();
    }

    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control = nullptr;
    }

    void CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control = new class CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control() == nullptr) {}
    }
    CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Control* CLIBWriteQueAt_Server_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_Control;
    }