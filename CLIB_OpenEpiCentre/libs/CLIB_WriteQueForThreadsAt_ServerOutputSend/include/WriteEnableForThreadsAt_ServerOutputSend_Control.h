#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_Control_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_Control_H
#include <cstdint>
#include <list>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend_Control
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend_Control();
        ~WriteEnableForThreadsAt_ServerOutputSend_Control();
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_dynamicIn(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_dynamicOut(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_Activate(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId_A, uint8_t coreId_B);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_SortQue(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeEnable_Request(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend_Control_writeQue_Update(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Control(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Control(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Control(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index();
        std::array<bool, 2> dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_list_Of_2ibt_FLAG_WriteState(uint8_t concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend_Control_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend_Control_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID);
        unsigned long long dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend_Control_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint8_t dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend_Control_List_Of_ThreadToWrite(uint8_t slotID);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING(bool FLAGState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_2ibt_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        void dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend_Control_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue);
    private:
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend_FLAG_Control_isWriteStartThreadRELASE_ONE;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend_FLAG_Control_isWriteStartThreadRELASE_REMAINING;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend_FLAG_Control_isWriteEndThreadRELASE_ONE;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerOutputSend_FLAG_Control_isWriteEndThreadRELASE_REMAINING;
        static std::array<std::array<bool, 2>, 3>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_Control_2bitFLAG_STATE;
        static std::list<unsigned long long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteACTIVE_Count_For_ThreadId;
        static std::list<unsigned long long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIDLE_Count_For_ThreadId;
        static std::list<unsigned long long>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWAIT_Count_For_ThreadId;
        static std::list<uint8_t>* _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_ThreadID_To_WRITE;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index;
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_3STATE_FLAG_WriteState();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWAIT_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_ThreadID_To_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_3STATE_FLAG_WriteState();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteACTIVE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIDLE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWAIT_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_ptr_QUE_Of_ThreadID_To_WRITE(class WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_3STATE_FLAG_WriteState();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWAIT_Count_For_ThreadIdd();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isCurrentThreadRELEASED();
        static std::array <std::array<bool, 2>, 3>* stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_3STATE_FLAG_WriteState();
        static std::list<unsigned long long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteActive_Count_For_ThreadId();
        static std::list<unsigned long long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIdle_Count_For_ThreadId();
        static std::list<unsigned long long>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWait_Count_For_ThreadId();
        static std::list<uint8_t>* stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend_Control_List_Of_ThreadToWrite();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_ONE(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteStartThreadRELASE_REMAINING(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_ONE(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isWriteEndThreadRELASE_REMAINING(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerOutputSend_Control_isCurrentThreadRELEASED(bool FLAGState);
        static void stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_3STATE_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend_Control_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, unsigned long long newCount);
        static void stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend_Control_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID);
        static void stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue);
        static void stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Control_writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue);

    };
}
#endif
