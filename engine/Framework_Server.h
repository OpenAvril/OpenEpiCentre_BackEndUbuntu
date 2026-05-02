#include "pch.h"
namespace CLIBOpenEpiCentre
{
    class Framework_Server
    {
    public:
        Framework_Server();
        virtual ~Framework_Server();
        class Server* dyn_CLASS_get_ptr_Server();
        void dyn_REG_boot1_DEFINE_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_Framework_Server(class Framework_Server* obj);
        void dyn_PGM_boot4_INSTANTIATE_Framework_Server(class Framework_Server* obj);
        static struct Concurrent* dyn_STRUCT_get_Concurrent();
        static struct Input* dyn_STRUCT_get_Input();
        static struct Output* dyn_STRUCT_get_Output();
        static struct User_Algorithim* dyn_STRUCT_get_User_Algorithim();
        static struct User_Input* dyn_STRUCT_get_User_Input();
        static struct User_Output* dyn_STRUCT_get_User_Output();
        static void stat_CLASS_boot0_DECLAIRE_Framework_Server();
        static void stat_CLASS_boot1_DEFINE_Framework_Server();
        static void stat_CLASS_boot3_INITIALISE_Framework_Server();
        static void stat_CLASS_boot4_INSTANTIATE_Framework_Server();
        static void stat_REG_boot0_DECLAIRE_Framework_Server();
        static void stat_STRUCT_boot0_DECLAIRE();
        static void stat_STRUCT_boot1_DEFINE();
        static void stat_STRUCT_boot3_INITIALISE();
    private:
        static class Server* _stat_CLASS_ptr_Server;
        static struct Concurrent* _stat_STRUCT_Concurrent;
        static struct Input* _stat_STRUCT_Input;
        static struct Output* _stat_STRUCT_Output;
		static struct User_Algorithim* _stat_CLASS_ptr_User_Algorithim;
		static struct User_Input* _stat_STRUCT_User_Input;
		static struct User_Output* _stat_STRUCT_User_Output;

        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static class Server* stat_CLASS_get_ptr_Server();
        static void stat_STRUCT_boot0_DECLAIRE_User_Algorithim();
        static void stat_STRUCT_boot0_DECLAIRE_User_Input();
        static void stat_STRUCT_boot0_DECLAIRE_User_Output();
        static void stat_STRUCT_boot0_DECLAIRE_Concurrent();
        static void stat_STRUCT_boot0_DECLAIRE_Input();
        static void stat_STRUCT_boot0_DECLAIRE_Output();
        static void stat_STRUCT_boot1_DEFINE_User_Algorithim();
        static void stat_STRUCT_boot1_DEFINE_User_Input();
        static void stat_STRUCT_boot1_DEFINE_User_Output();
        static void stat_STRUCT_boot1_DEFINE_Concurrent();
        static void stat_STRUCT_boot1_DEFINE_Input();
        static void stat_STRUCT_boot1_DEFINE_Output();
        static void stat_STRUCT_boot3_INITIALISE_User_Algorithim();
        static void stat_STRUCT_boot3_INITIALISE_User_Input();
        static void stat_STRUCT_boot3_INITIALISE_User_Output();
        static void stat_STRUCT_boot3_INITIALISE_Concurrent();
        static void stat_STRUCT_boot3_INITIALISE_Input();
        static void stat_STRUCT_boot3_INITIALISE_Output();
        static struct Concurrent* stat_STRUCT_get_Concurrent();
        static struct Input* stat_STRUCT_get_Input();
        static struct Output* stat_STRUCT_get_Output();
        static struct User_Algorithim* stat_STRUCT_get_User_Algorithim();
        static struct User_Input* stat_STRUCT_get_User_Input();
        static struct User_Output* stat_STRUCT_get_User_Output();
    };
}