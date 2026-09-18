#ifndef OPENEPICENTRE_BACKThreadLogsIdUBUNTU_CLIB_ThreadLogs_Framework_Execute_H
#define OPENEPICENTRE_BACKThreadLogsIdUBUNTU_CLIB_ThreadLogs_Framework_Execute_H
#include <cstdint>
namespace CLIBWriteQueAtThreadLogsId {
    class CLIB_ThreadLogs_Framework_App_Execute {
    public:
        CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId);
        virtual ~CLIB_ThreadLogs_Framework_App_Execute();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
    private:
        static void* _stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId;
        static void stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId);
        static void stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId);
        static void stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId);
        static void* stat_PGM_get_ptr_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId);
    };
};
#endif //OPENEPICENTRE_BACKThreadLogsIdUBUNTU_CLIB_ThreadLogs_Framework_Execute_H