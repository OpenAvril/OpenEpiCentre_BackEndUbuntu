#ifndef OPENEPICENTRE_BACKServerUBUNTU_LaunchEnableForConcurrentThreadsAt_Server_Execute_H
#define OPENEPICENTRE_BACKServerUBUNTU_LaunchEnableForConcurrentThreadsAt_Server_Execute_H
#include <cstdint>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server_Execute {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        virtual ~LaunchEnableForConcurrentThreadsAt_Server_Execute();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        void dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);

    private:
        static void* _stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode;
        static void stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId);
        static void stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId);
        static void stat_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId);
        static void* stat_PGM_get_ptr_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId);


    };
};
#endif //OPENEPICENTRE_BACKServerUBUNTU_LaunchEnableForConcurrentThreadsAt_Server_Execute_H