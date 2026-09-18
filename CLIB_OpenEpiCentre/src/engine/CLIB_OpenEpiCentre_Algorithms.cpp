#include "../../include/engine/CLIB_OpenEpiCentre_Algorithms.h"
#include <iostream>
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::CLIB_OpenEpiCentre_Algorithms()
    {
        std::cout << "thread "  << threadId << " :: entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        std::cout << "thread "  << threadId << " :: exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::~CLIB_OpenEpiCentre_Algorithms()
    {
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentthreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentthreadId);
        return *temp;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot3_INITIALISE_Algorithm()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj, objConcurrent);
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_Framework* obj)
    {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot0_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot0_REG_DECLARE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm()
    {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot0_DECLARE_Algorithm()" << std::endl;

        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot0_DECLARE_Algorithm()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent()
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<CLIB_OpenEpiCentre_STRUCT_Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == nullptr) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(static_cast<unsigned long>(3));//NUMBER OF CONCURRENT THREADS.
        for (int concurrentthreadId = 0; concurrentthreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentthreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentthreadId);
            *temp = nullptr;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(CLIB_OpenEpiCentre_Framework* obj, CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent)
    {
        for (int concurrentthreadId = 0; concurrentthreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentthreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentthreadId);
            *temp = objConcurrent;
        }
    }
    std::list<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
    {
        return _stat_REG_ptr_list_Of_ptr_Concurrent;
    }