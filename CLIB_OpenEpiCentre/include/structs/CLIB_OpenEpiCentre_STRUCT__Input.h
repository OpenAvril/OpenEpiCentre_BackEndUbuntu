#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__Input_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__Input_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include <list>
namespace CLIBOpenEpiCentre {
    struct CLIB_OpenEpiCentre_STRUCT__Input {
    public:
        void dyn_APP_select_And_Set_OpenEpiCentre_STRUCT__Input_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId);
        void dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Input();
        void dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Input();
        void dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Input(CLIB_OpenEpiCentre__Framework* obj);
        std::byte dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        unsigned long long dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        class Object* dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
        void dyn_REG_set_CLIB_OpenEpiCentre_STRUCT__Input__playerId(std::byte newPraiseId);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId(unsigned long long new_unsignedLongLong);

        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Input_praise1* objInputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Input_praise2* objInputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Input_praise3* objInputSubset);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input();
    private:
        static std::byte* _REG_ptr_OpenEpiCentre_STRUCT__Input__playerId;
        static unsigned long long* _REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId;
        static std::list<Object*>* _REG_ptr_OpenEpiCentre_STRUCT__Input__Subset;
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__Subset(CLIB_OpenEpiCentre__Framework* obj);
        static std::byte* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        static unsigned long long* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        static std::list<Object*>* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
    };
}
#endif