#include <cstdint>
#include <iostream>
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index;
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch;
std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID;
std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID;
std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore;
std::list<std::byte>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch;
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index;
// public.
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::LaunchEnableForConcurrentThreadsAt_Server__Control()
{

}
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::~LaunchEnableForConcurrentThreadsAt_Server__Control()
{
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index;
    delete _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_Activate(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj)
{
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(0))), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE());
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_Request(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, std::byte concurrentThreadID)
{
    while (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(0)))) != obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE())
    {

    }
    while (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch() == true)
    {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dynamicStagger(obj, concurrentThreadID);
    }
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch(true);
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index());
    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        //exit
    }
    else
    {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index(static_cast<std::byte>(static_cast<int>(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index()) + 1));
        if (static_cast<int>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index()) == 3)//NUMBER OF CONCURRENT  THREADS
        {
            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index(static_cast<std::byte>(0));
        }
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch(false);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_Request(obj, concurrentThreadID);
    }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_SortQue(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, std::byte number_Implemented_Threads)
{
    for (int index_A = 0; index_A < static_cast<int>(number_Implemented_Threads) - 2; index_A++)
    {
        for (int index_B = index_A + 1; index_B < static_cast<int>(number_Implemented_Threads) - 1; index_B++)
        {
            if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(index_A)))) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE())
            {
                if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(index_B)))) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE())
                {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->launchEnable_ShiftQueValues(obj, static_cast<std::byte>(index_A), static_cast<std::byte>(index_B));
                }
                else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(index_B)))) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE())
                {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(static_cast<std::byte>(index_A)) > obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(static_cast<std::byte>(index_B)))
                    {
                        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->launchEnable_ShiftQueValues(obj, static_cast<std::byte>(index_A), static_cast<std::byte>(index_B));
                    }
                }
            }
            else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(index_A)))) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE())

                if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(static_cast<std::byte>(index_B)))) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(static_cast<std::byte>(index_A)) < obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(static_cast<std::byte>(index_B)))
                    {
                        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->launchEnable_ShiftQueValues(obj, static_cast<std::byte>(index_A), static_cast<std::byte>(index_B));
                    }
                }
        }
    }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchQue_Update(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, std::byte number_Implemented_Threads)
{
    for (int index = 0; index < static_cast<int>(number_Implemented_Threads); index++)
    {
        switch (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(static_cast<std::byte>(index)))
        {
        case false:
        {
            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(static_cast<std::byte>(index), 0);
            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(static_cast<std::byte>(index), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(static_cast<std::byte>(index + 1)));
            break;
        }
        case true:
        {
            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(static_cast<std::byte>(index), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(static_cast<std::byte>(index + 1)));
            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(static_cast<std::byte>(index), 0);
            break;
        }
        }
    }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Control()
{
    std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
    stat_dyn_REG_boot1_DEFINE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch();
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
    stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
    std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Control()
{
    std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
    stat_REG_boot2_SUBSTANTIATE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
    stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
    std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Control()
{
    std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
    stat_REG_boot3_INITIALISE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
    stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
    std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Control()" << std::endl;
}
std::byte CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index()
{
    return *stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch()
{
    return *stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
}
uint64_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(std::byte threadID)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()->begin();
    std::advance(temp, (long)threadID);
    return *temp;
}
uint64_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(std::byte threadID)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()->begin();
    std::advance(temp, (long)threadID);
    return *temp;
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(std::byte concurrentThreadId)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()->begin();
    std::advance(temp, (long)concurrentThreadId);
    return *temp;
}

uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(std::byte concurrentThreadId) {
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__List_QUE_Of_CoreTolaunch()->begin();
    std::advance(temp, (long)concurrentThreadId);
    return static_cast<uint8_t>(*temp);
}
std::byte CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index()
{
    return *stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index(std::byte newValue)
{
    stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index(newValue);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch(bool newFlag)
{
    stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch(newFlag);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(std::byte concurrentThreadId, uint64_t newValue)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newValue;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(std::byte concurrentThreadId, uint64_t newValue)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newValue;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(std::byte concurrentThreadId, bool newState)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newState;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(std::byte slot, std::byte concurrentThreadId)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__List_QUE_Of_CoreTolaunch()->begin();
    std::advance(temp, (long)slot);
    *temp = concurrentThreadId;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index(std::byte newValue)
{
    stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index(newValue);
}
// private.
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::dynamicStagger(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, std::byte concurrentThreadID)
{
    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        //exit early
    }
    else
    {
        int ptr_count = int(0);
        while (ptr_count < 20)//todo time till flag change
        {

            ptr_count = ptr_count + 1;
        }
    }
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::launchEnable_ShiftQueValues(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, std::byte concurrentThreadID_A, std::byte concurrentThreadID_B)
{
    int temp_Int;
    temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A);
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B));
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

    temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A);
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B));
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

    std::byte temp_UnnsignedChar;
    temp_UnnsignedChar = static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A));
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A, static_cast<std::byte>(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B)));
    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control()->stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B, temp_UnnsignedChar);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch()
{
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index = new std::byte();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index = std::byte(1);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch()
{
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch = new bool();
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch = true;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID = new std::list<uint64_t>();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID = { UINT64_MAX, UINT64_MAX, UINT64_MAX };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID = new std::list<uint64_t>();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID = { UINT64_MAX, UINT64_MAX, UINT64_MAX };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore = { true, true, true };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch = new std::list<std::byte>();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch = { static_cast<std::byte>(255), static_cast<std::byte>(255), static_cast<std::byte>(255) };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index = new std::byte();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index = static_cast<std::byte>(1);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index = static_cast<std::byte>(0);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch()
{
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch = (bool)(false);
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID = { 0, 0, 0 };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID = { 0, 0, 0 };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore = { false, false };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch = { static_cast<std::byte>(0), static_cast<std::byte>(1), static_cast<std::byte>(2) };
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index = static_cast<std::byte>(1);
}
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index;
}
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch()
{
    return _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch;
}
std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID;
}
std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID;
}
std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore;
}
std::list<std::byte>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__List_QUE_Of_CoreTolaunch()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch;
}
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index(std::byte newValue)
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index = newValue;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch(bool newFlag)
{
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch = newFlag;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(std::byte concurrentThreadId, uint64_t newValue)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newValue;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(std::byte concurrentThreadId, uint64_t newValue)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newValue;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_STATE_For_ConcurrentCore(std::byte concurrentThreadId, bool newState)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore()->begin();
    std::advance(temp, (long)concurrentThreadId);
    *temp = newState;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_for_Que_Of_CoreTolaunch(std::byte slot, std::byte concurrentThreadId)
{
    auto temp = stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__List_QUE_Of_CoreTolaunch()->begin();
    std::advance(temp, (long)slot);
    *temp = concurrentThreadId;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index(std::byte newValue)
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index = newValue;
}