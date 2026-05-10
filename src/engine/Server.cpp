#include "engine/Algorithms.h"
#include "engine/Data.h"
#include "engine/Execute.h"
#include "engine/Global.h"
#include "engine/Server.h"
#include <iostream>
CLIBOpenEpiCentre::Algorithms* CLIBOpenEpiCentre::Server::_stat_CLASS_ptr_Algorithms;
    CLIBOpenEpiCentre::Data* CLIBOpenEpiCentre::Server::_stat_CLASS_ptr_Data;
    CLIBOpenEpiCentre::Execute* CLIBOpenEpiCentre::Server::_stat_CLASS_ptr_Execute;
    CLIBOpenEpiCentre::Global* CLIBOpenEpiCentre::Server::_stat_CLASS_ptr_Global;
// public.
    CLIBOpenEpiCentre::Server::Server()
    {
        std::cout << "entered CONSTRUCTOR of Server()" << std::endl;
        stat_CLASS_boot0_DECLARE_Server();
        stat_CLASS_boot1_DEFINE_Server();
        stat_CLASS_boot3_INITIALISE_Server();
        stat_REG_boot0_DECLARE_Server();
        std::cout << "exiting CONSTRUCTOR of Server()" << std::endl;
    }
    CLIBOpenEpiCentre::Server::~Server()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_Algorithms;
        delete _stat_CLASS_ptr_Data;
        delete _stat_CLASS_ptr_Execute;
    }
    CLIBOpenEpiCentre::Algorithms* CLIBOpenEpiCentre::Server::dyn_CLASS_get_ptr_Algorithms()
    {
        return stat_CLASS_get_ptr_Algorithms();
    }
    CLIBOpenEpiCentre::Data* CLIBOpenEpiCentre::Server::dyn_CLASS_get_ptr_Data()
    {
        return stat_CLASS_get_ptr_Data();
    }
    CLIBOpenEpiCentre::Execute* CLIBOpenEpiCentre::Server::dyn_CLASS_get_ptr_Execute()
    {
        return stat_CLASS_get_ptr_Execute();
    }
    CLIBOpenEpiCentre::Global* CLIBOpenEpiCentre::Server::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    void CLIBOpenEpiCentre::Server::dyn_REG_boot1_DEFINE_Server(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot1_DEFINE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::dyn_REG_boot2_SUBSTANTIATE_Server(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::dyn_REG_boot3_INITIALISE_Server(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_ServerServer()" << std::endl;

        std::cout << "exiting dyn_REG_boot3_INITIALISE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::dyn_REG_boot4_INSTANTIATE_Server(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Server()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot0_DECLARE_Server()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Server()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot1_DEFINE_Server()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Server()" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_Algorithms();
        stat_CLASS_boot1_DEFINE_Data();
        stat_CLASS_boot1_DEFINE_Execute();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot3_INITIALISE_Server()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Server()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_Algorithms();
        stat_CLASS_boot3_INITIALISE_Data();
        stat_CLASS_boot3_INITIALISE_Execute();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot4_INSTANTIATE_Server()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Server()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Server()" << std::endl;
    }
    void CLIBOpenEpiCentre::Server::stat_REG_boot0_DECLARE_Server()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Server()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Server()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot1_DEFINE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = nullptr;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot1_DEFINE_Data()
    {
        _stat_CLASS_ptr_Data = nullptr;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot1_DEFINE_Execute()
    {
        _stat_CLASS_ptr_Execute = nullptr;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = nullptr;
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot3_INITIALISE_Algorithms()
    {
        _stat_CLASS_ptr_Algorithms = new class CLIBOpenEpiCentre::Algorithms();
        while (stat_CLASS_get_ptr_Algorithms() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot3_INITIALISE_Data()
    {
        _stat_CLASS_ptr_Data = new class CLIBOpenEpiCentre::Data();
        while (stat_CLASS_get_ptr_Data() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot3_INITIALISE_Execute()
    {
        _stat_CLASS_ptr_Execute = new class CLIBOpenEpiCentre::Execute();
        while (stat_CLASS_get_ptr_Execute() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Server::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBOpenEpiCentre::Global();
        while (stat_CLASS_get_ptr_Global() == nullptr) {}
    }
    CLIBOpenEpiCentre::Algorithms* CLIBOpenEpiCentre::Server::stat_CLASS_get_ptr_Algorithms()
    {
        return _stat_CLASS_ptr_Algorithms;
    }
    CLIBOpenEpiCentre::Data* CLIBOpenEpiCentre::Server::stat_CLASS_get_ptr_Data()
    {
        return _stat_CLASS_ptr_Data;
    }
    CLIBOpenEpiCentre::Execute* CLIBOpenEpiCentre::Server::stat_CLASS_get_ptr_Execute()
    {
        return _stat_CLASS_ptr_Execute;
    }
    CLIBOpenEpiCentre::Global* CLIBOpenEpiCentre::Server::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }