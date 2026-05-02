#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVERINPUTRECIEVE
    {
    public:
        WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        virtual ~WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        static void boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        static void boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE();
        void boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj);
        void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj);
        void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVERINPUTRECIEVE(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj);
        void dyn_app_FUNCT_write_End(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj, uint8_t coreId);
        void dyn_app_FUNCT_write_Start(class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        static class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}