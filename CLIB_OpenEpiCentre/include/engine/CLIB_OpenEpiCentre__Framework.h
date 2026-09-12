#ifndef TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
#define TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
#include "CLIB_OpenEpiCentre__App.h"
#include "CLIB_OpenEpiCentre__Global.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h"
namespace CLIBOpenEpiCentre {
    class CLIB_OpenEpiCentre__Framework {
    public:
        CLIB_OpenEpiCentre__Framework();
        virtual ~CLIB_OpenEpiCentre__Framework();
        void dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Architecture();
        void dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Global_and_Settings();
        class CLIB_OpenEpiCentre__App* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App();
        class CLIB_OpenEpiCentre__Global* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input();
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output();
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent();
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input();
        void dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input();
        void dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output();
        struct CLIB_OpenEpiCentre_STRUCT__Concurrent* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent();
        struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input();
        struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output();
        struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        struct CLIB_OpenEpiCentre_STRUCT__User_Input* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input();
        struct CLIB_OpenEpiCentre_STRUCT__User_Output* dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
        static void stat_STRUCT_boot0_DECLARE_CLIB_OpenEpiCentre__Framework();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework();
    private:
        static struct CLIB_OpenEpiCentre__App* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App;
        static struct CLIB_OpenEpiCentre__Global* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global;
        static struct CLIB_OpenEpiCentre_STRUCT__Concurrent* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent;
        static struct CLIB_OpenEpiCentre_STRUCT__Input* _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input;
        static struct CLIB_OpenEpiCentre_STRUCT__Output* _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Input* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Output* _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__App();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Global();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__App();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Global();
        static struct CLIB_OpenEpiCentre__App* stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App();
        static struct CLIB_OpenEpiCentre__Global* stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global();

        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input();
        static void stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input();
        static void stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output();
        static struct CLIB_OpenEpiCentre_STRUCT__Concurrent* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent();
        static struct CLIB_OpenEpiCentre_STRUCT__Input* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input();
        static struct CLIB_OpenEpiCentre_STRUCT__Output* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Input* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Output* stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output();
    };
}
#endif //TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
