
#include "../include/LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include <iostream>
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::_stat_CLASS_ptr_Global;
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::_stat_CLASS_ptr_LaunchConcurrency_Control;
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::LaunchEnableForConcurrentThreadsAt_Server()
{
    boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server();
    boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server();
    boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server();
    boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server();
}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::~LaunchEnableForConcurrentThreadsAt_Server()
{
    delete _stat_CLASS_ptr_Global;
    delete _stat_CLASS_ptr_LaunchConcurrency_Control;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::app_thread_Start(LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID)
{
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Request(obj, concurrentThreadID);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Activate(obj);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::app_thread_Server(LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID)
{
    while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_flag_praisinglaunch() == true)
    {

    }
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index());
    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
    }
    else
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() + 1);

        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Server(obj, concurrentThreadID);
    }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;

	std::cout << "exiting boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
    stat_CLASS_boot1_DEFINE_Global();
    stat_CLASS_boot1_DEFINE_WriteEnable_Control();
	std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
    stat_CLASS_boot3_INITIALISE_Global();
    stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
	std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;

	std::cout << "exiting boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
    
	std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;

	std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;

	std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server()
{
	std::cout << "entered boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;

	std::cout << "exiting boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server()." << std::endl;
}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::dyn_CLASS_get_ptr_Global()
{
    return stat_CLASS_get_ptr_Global();
}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::dyn_CLASS_get_ptr_LaunchConcurrency_Control()
{
    return stat_CLASS_get_ptr_LaunchConcurrency_Control();
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_boot1_DEFINE_Global()
{
    _stat_CLASS_ptr_Global = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_boot3_INITIALISE_Global()
{
    _stat_CLASS_ptr_Global = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global();
    while (stat_CLASS_get_ptr_Global() == NULL) { }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Control();
    while (stat_CLASS_get_ptr_LaunchConcurrency_Control() == NULL) { }
}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_get_ptr_Global()
{
    return _stat_CLASS_ptr_Global;
}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_get_ptr_LaunchConcurrency_Control()
{
	return _stat_CLASS_ptr_LaunchConcurrency_Control;
}