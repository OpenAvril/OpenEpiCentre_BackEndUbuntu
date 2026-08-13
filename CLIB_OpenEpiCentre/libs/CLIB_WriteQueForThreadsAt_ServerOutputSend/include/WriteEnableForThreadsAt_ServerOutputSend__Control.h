#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend__Control_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend__Control_H
#include <cstdint>
#include <list>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend__Control
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend__Control();
        ~WriteEnableForThreadsAt_ServerOutputSend__Control();
        void dyn_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool flagState);
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Control(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__dynamicStagger(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, unsigned long long coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Activate(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, unsigned long long coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, unsigned long long coreId_A, unsigned long long coreId_B);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_SortQue(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Request(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, unsigned long long coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeQue_Update(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        bool dyn_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
        std::array<bool, 2> dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(unsigned long long concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(unsigned long long concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(unsigned long long concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(unsigned long long concurrentThreadID);
        unsigned long long dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
        unsigned long long dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(unsigned long long slotID);
        unsigned long long dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
        void dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(bool newBoolValue);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_flag_WriteState(unsigned long long concurrentThreadID, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(unsigned long long newID);
        void dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(unsigned long long slotID, unsigned long long newID);
        void dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(unsigned long long newID);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control();
    private:
        static bool* _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__flag_Control__isCurrentThreadRELEASED;
        static std::array<std::array<bool, 2>, 3>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
        static std::list<unsigned long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
        static std::list<unsigned long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
        static std::list<unsigned long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
        static unsigned long* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index;
        static std::list<unsigned long>* _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
        static unsigned long* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index;
        static bool* _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite;
        static void stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool flagState);
        static void stat_REG_boot1_DEFINE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadIdd();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
        static bool stat_REG_get_flag_WriteEnableForThreadsAt_ServerOutputSend__flag_Control__isCurrentThreadRELEASED();
        static std::array <std::array<bool, 2>, 3>* stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
        static std::list<unsigned long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId();
        static std::list<unsigned long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId();
        static std::list<unsigned long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId();
        static unsigned long* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
        static std::list<unsigned long>* stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite();
        static unsigned long* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
        static bool* stat_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
        static void stat_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__flag_Control__isCurrentThreadRELEASED(bool flagState);
        static void stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState(unsigned long long concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(unsigned long long concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(unsigned long long newValue);
        static void stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(unsigned long long slotID, unsigned long long concurrentThreadID);
        static void stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(unsigned long long newValue);
        static void stat_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(bool newFlag);
    };
}
#endif
