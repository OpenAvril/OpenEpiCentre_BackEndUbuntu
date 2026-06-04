#include "../../include/engine/Algorithms.h"
#include "../../include/engine/Data.h"
#include "../../include/engine/Execute.h"
#include "../../include/engine/App.h"
#include <iostream>
    TestBench_Cpp_OpenEpiCentre::Algorithms* TestBench_Cpp_OpenEpiCentre::App::_stat_CLASS_ptr_Algorithms;
    TestBench_Cpp_OpenEpiCentre::Data* TestBench_Cpp_OpenEpiCentre::App::_stat_CLASS_ptr_Data;
    TestBench_Cpp_OpenEpiCentre::Execute* TestBench_Cpp_OpenEpiCentre::App::_stat_CLASS_ptr_Execute;
// public.
    TestBench_Cpp_OpenEpiCentre::App::App()
    {
        std::cout << "entered CONSTRUCTOR of App()" << std::endl;
        stat_CLASS_boot0_DECLARE_App();
        stat_CLASS_boot1_DEFINE_App();
        stat_CLASS_boot3_INITIALISE_App();
        stat_REG_boot0_DECLARE_App();
        std::cout << "exiting CONSTRUCTOR of App()" << std::endl;
    }
    TestBench_Cpp_OpenEpiCentre::App::~App()
    {
        delete _stat_CLASS_ptr_Algorithms;
        delete _stat_CLASS_ptr_Data;
        delete _stat_CLASS_ptr_Execute;
    }
    TestBench_Cpp_OpenEpiCentre::Algorithms* TestBench_Cpp_OpenEpiCentre::App::dyn_CLASS_get_ptr_Algorithms()
    {
        return stat_CLASS_get_ptr_Algorithms();
    }
    TestBench_Cpp_OpenEpiCentre::Data* TestBench_Cpp_OpenEpiCentre::App::dyn_CLASS_get_ptr_Data()
    {
        return stat_CLASS_get_ptr_Data();
    }
    TestBench_Cpp_OpenEpiCentre::Execute* TestBench_Cpp_OpenEpiCentre::App::dyn_CLASS_get_ptr_Execute()
    {
        return stat_CLASS_get_ptr_Execute();
    }
    void TestBench_Cpp_OpenEpiCentre::App::dyn_REG_boot1_DEFINE_App()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::dyn_REG_boot2_SUBSTANTIATE_App()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::dyn_REG_boot3_INITIALISE_App()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_AppApp()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::dyn_REG_boot4_INSTANTIATE_App()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_App()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot0_DECLARE_App()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_App()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot1_DEFINE_App()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_App()" << std::endl;
        stat_CLASS_boot1_DEFINE_Algorithms();
        stat_CLASS_boot1_DEFINE_Data();
        stat_CLASS_boot1_DEFINE_Execute();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot3_INITIALISE_App()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_App()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Algorithms();
        stat_CLASS_boot3_INITIALISE_Data();
        stat_CLASS_boot3_INITIALISE_Execute();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot4_INSTANTIATE_App()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_App()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_App()" << std::endl;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_REG_boot0_DECLARE_App()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_App()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_App()" << std::endl;
    }
// private.
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot1_DEFINE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot1_DEFINE_Data()
    {
        _stat_CLASS_ptr_Data = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot1_DEFINE_Execute()
    {
        _stat_CLASS_ptr_Execute = nullptr;
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot3_INITIALISE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = new class TestBench_Cpp_OpenEpiCentre::Algorithms();
        while (stat_CLASS_get_ptr_Algorithms() == nullptr) {}
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot3_INITIALISE_Data()
    {
        _stat_CLASS_ptr_Data = new class TestBench_Cpp_OpenEpiCentre::Data();
        while (stat_CLASS_get_ptr_Data() == nullptr) {}
    }
    void TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_boot3_INITIALISE_Execute()
    {
        _stat_CLASS_ptr_Execute = new class TestBench_Cpp_OpenEpiCentre::Execute();
        while (stat_CLASS_get_ptr_Execute() == nullptr) {}
    }
    TestBench_Cpp_OpenEpiCentre::Algorithms* TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_get_ptr_Algorithms()
    {
        return _stat_CLASS_ptr_Algorithms;
    }
    TestBench_Cpp_OpenEpiCentre::Data* TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_get_ptr_Data()
    {
        return _stat_CLASS_ptr_Data;
    }
    TestBench_Cpp_OpenEpiCentre::Execute* TestBench_Cpp_OpenEpiCentre::App::stat_CLASS_get_ptr_Execute()
    {
        return _stat_CLASS_ptr_Execute;
    }