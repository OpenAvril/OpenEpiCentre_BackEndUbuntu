#include "../../include/engine/CLIB_OpenEpiCentre_Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;

// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_App()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_App()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::~CLIB_OpenEpiCentre_App()
    {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Algorithms()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Data()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_CLASS_get_ptr_Execute()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_App()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_App()" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_App()" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_App()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_App()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_App()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_App()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_App()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithms()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithms()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()
    {
        _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute() == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Algorithms()
    {
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Algorithms;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Data* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Data()
    {
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute()
    {
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Execute;
    }