#include "../include/WriteEnableForThreadsAt_SIMULATION.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include "../include/WriteEnableForThreadsAt_SIMULATION_Control.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Framework.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Global.h"
class CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::_stat_CLASS_ptr_Global = NULL;
    class CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::WriteEnableForThreadsAt_SIMULATION()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION();
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::~WriteEnableForThreadsAt_SIMULATION()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION()" << std::endl;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::dyn_app_FUNCT_write_End(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId)
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
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::dyn_app_FUNCT_write_Start(CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Control* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }