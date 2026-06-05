#pragma once
#include "CLIB_OpenEpiCentre_Global.h"
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre_Framework_Server
    {
    public:
        CLIB_OpenEpiCentre_Framework_Server();
        virtual ~CLIB_OpenEpiCentre_Framework_Server();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_Global_and_Settings();
        class Server* dyn_CLASS_get_ptr_Server();
        class Global* dyn_CLASS_get_ptr_Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_Server(class Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Server(class Framework_Server* obj);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_Server(class Framework_Server* obj);
        static struct Concurrent* dyn_STRUCT_get_Concurrent();
        static struct Input* dyn_STRUCT_get_Input();
        static struct Output* dyn_STRUCT_get_Output();
        static struct User_Algorithm* dyn_STRUCT_get_User_Algorithm();
        static struct User_Input* dyn_STRUCT_get_User_Input();
        static struct User_Output* dyn_STRUCT_get_User_Output();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_Server();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Server();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Server();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_Server();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework_Server();
        static void stat_STRUCT_boot0_DECLARE();
        static void stat_STRUCT_boot1_DEFINE();
        static void stat_STRUCT_boot3_INITIALISE();
    private:
        static Server* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Server;
        static Global* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Global;
        static Concurrent* _stat_STRUCT_Concurrent;
        static Input* _stat_STRUCT_Input;
        static Output* _stat_STRUCT_Output;
		static User_Algorithm* _stat_CLASS_ptr_User_Algorithm;
		static User_Input* _stat_STRUCT_User_Input;
		static User_Output* _stat_STRUCT_User_Output;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static Global* stat_CLASS_get_ptr_Global();
        static Server* stat_CLASS_get_ptr_Server();
        static void stat_STRUCT_boot0_DECLARE_User_Algorithm();
        static void stat_STRUCT_boot0_DECLARE_User_Input();
        static void stat_STRUCT_boot0_DECLARE_User_Output();
        static void stat_STRUCT_boot0_DECLARE_Concurrent();
        static void stat_STRUCT_boot0_DECLARE_Input();
        static void stat_STRUCT_boot0_DECLARE_Output();
        static void stat_STRUCT_boot1_DEFINE_User_Algorithm();
        static void stat_STRUCT_boot1_DEFINE_User_Input();
        static void stat_STRUCT_boot1_DEFINE_User_Output();
        static void stat_STRUCT_boot1_DEFINE_Concurrent();
        static void stat_STRUCT_boot1_DEFINE_Input();
        static void stat_STRUCT_boot1_DEFINE_Output();
        static void stat_STRUCT_boot3_INITIALISE_User_Algorithm();
        static void stat_STRUCT_boot3_INITIALISE_User_Input();
        static void stat_STRUCT_boot3_INITIALISE_User_Output();
        static void stat_STRUCT_boot3_INITIALISE_Concurrent();
        static void stat_STRUCT_boot3_INITIALISE_Input();
        static void stat_STRUCT_boot3_INITIALISE_Output();
        static struct Concurrent* stat_STRUCT_get_Concurrent();
        static struct Input* stat_STRUCT_get_Input();
        static struct Output* stat_STRUCT_get_Output();
        static struct User_Algorithm* stat_STRUCT_get_User_Algorithm();
        static struct User_Input* stat_STRUCT_get_User_Input();
        static struct User_Output* stat_STRUCT_get_User_Output();
    };
}
