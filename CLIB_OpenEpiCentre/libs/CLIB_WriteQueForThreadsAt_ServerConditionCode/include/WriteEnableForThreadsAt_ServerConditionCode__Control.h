#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerConditionCode_WRITEENABLEFORTHREADSAT_ServerConditionCode__Control_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerConditionCode_WRITEENABLEFORTHREADSAT_ServerConditionCode__Control_H
#include <cstdint>
#include <list>
namespace CLIBWriteQueAtServerConditionCode
{
    class WriteEnableForThreadsAt_ServerConditionCode__Control
    {
    public:
        WriteEnableForThreadsAt_ServerConditionCode__Control();
        ~WriteEnableForThreadsAt_ServerConditionCode__Control();
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__dynamicIn(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__dynamicOut(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__writeEnable_Activate(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId_A, uint8_t coreId_B);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__writeEnable_SortQue(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__writeEnable_Request(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerConditionCode__Control__writeQue_Update(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__Control(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerConditionCode__Control(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__Control(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        bool dyn_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index();
        std::array<bool, 2> dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__list_Of_2ibt_FLAG_WriteState(uint8_t concurrentThreadID);
        uint64_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerConditionCode__Control__list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint64_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerConditionCode__Control__list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint64_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerConditionCode__Control__list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint8_t dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE(bool FLAGState);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING(bool FLAGState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__2ibt_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        void dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue);
        void dyn_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue);
    private:
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerConditionCode__FLAG_Control__isWriteStartThreadRELASE_ONE;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerConditionCode__FLAG_Control__isWriteStartThreadRELASE_REMAINING;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerConditionCode__FLAG_Control__isWriteEndThreadRELASE_ONE;
        static bool* _stat_REG_FLAG_WriteEnableForThreadsAt_ServerConditionCode__FLAG_Control__isWriteEndThreadRELASE_REMAINING;
        static std::array<std::array<bool, 2>, 3>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerConditionCode__Control__2bitFLAG_STATE;
        static std::list<uint64_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteACTIVE_Count_For_ThreadId;
        static std::list<uint64_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIDLE_Count_For_ThreadId;
        static std::list<uint64_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWAIT_Count_For_ThreadId;
        static std::list<uint8_t>* _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__ThreadID_To_WRITE;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index;
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot1_DEFINE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__3STATE_FLAG_WriteState();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWAIT_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__ThreadID_To_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__3STATE_FLAG_WriteState();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteACTIVE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIDLE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWAIT_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE(class WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE();
        static void stat_REG_boot3_INITIALISE_ptr_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__3STATE_FLAG_WriteState();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWAIT_Count_For_ThreadIdd();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING();
        static bool stat_REG_get_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isCurrentThreadRELEASED();
        static std::array <std::array<bool, 2>, 3>* stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__3STATE_FLAG_WriteState();
        static std::list<uint64_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteActive_Count_For_ThreadId();
        static std::list<uint64_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIdle_Count_For_ThreadId();
        static std::list<uint64_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWait_Count_For_ThreadId();
        static std::list<uint8_t>* stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerConditionCode__Control__List_Of_ThreadToWrite();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index();
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_ONE(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteStartThreadRELASE_REMAINING(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_ONE(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isWriteEndThreadRELASE_REMAINING(bool newFLAG);
        static void stat_REG_set_FLAG_WriteEnableForThreadsAt_ServerConditionCode__Control__isCurrentThreadRELEASED(bool FLAGState);
        static void stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__3STATE_FLAG_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerConditionCode__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint64_t newCount);
        static void stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerConditionCode__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID);
        static void stat_REG_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteStartThreadId_Index(uint8_t newValue);
        static void stat_REG_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Control__writeCycle_Try_WriteEndThreadId_Index(uint8_t newValue);

    };
}
#endif
