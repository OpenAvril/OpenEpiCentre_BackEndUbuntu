#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control* CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control;
    CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App();
    }
    CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::~WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode()" << std::endl;
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::dyn_APP_FUNCT_write_Server(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteServerThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteServerThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteServerThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteServerThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteServerThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteServerThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteServerThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global()->dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control* CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control();
    }

    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control = nullptr;
    }

    void CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control = new class CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control() == nullptr) {}
    }
    CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control* CLIBWriteQueAtServer_LaunchQueConditionCode::WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App__Control;
    }