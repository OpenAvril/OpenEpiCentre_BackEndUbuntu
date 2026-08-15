#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__INPUT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__INPUT_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include "praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include <cstddef>
#include <list>
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT__Input
    {
    public:
        void app_select_And_Set_Input_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId);
        void dyn_REG_boot1_DEFINE_Input();
        void dyn_REG_boot2_SUBSTANTIATE_Input();
        void dyn_REG_boot3_INITIALISE_Input(CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Input();
        std::byte dyn_REG_get_ptr_Input_playerId();
        unsigned long long dyn_REG_get_ptr_Input_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_Of_ptr_Inputs_Subset();
        void dyn_REG_set_Input_playerId(std::byte newPlayerId);
        void dyn_REG_set_ptr_Input_praiseEventId(unsigned long long new_unsignedLongLong);
        void dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise1* objInputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise2* objInputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise3* objInputSubset);
        static void stat_CLASS_boot0_DECLARE_Input();
        static void stat_CLASS_boot1_DEFINE_Input();
        static void stat_CLASS_boot3_INITIALISE_Input();
        static void stat_CLASS_boot4_INSTANTIATE_Input();
        static void stat_REG_boot0_DECLARE_Input();
    private:
        static unsigned long long* _REG_ptr_Input_praiseEventId;
        static std::byte* _REG_ptr_Input_playerId;
        static std::list<Object*>* _REG_ptr_List_Of_PraiseInputSubset;
        static void stat_REG_boot1_DEFINE_Input_praiseEventId();
        static void stat_REG_boot1_DEFINE_Input_playerId();
        static void stat_REG_boot1_DEFINE_Input_List_Of_PraiseInputSubset();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_Input_playerId();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset();
        static void stat_REG_boot3_INITIALISE_Input_praiseEventId();
        static void stat_REG_boot3_INITIALISE_Input_playerId();
        static void stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseId);
        static std::byte* stat_REG_get_ptr_Input_playerId();
        static unsigned long long* stat_REG_get_ptr_Input_praiseEventId();
        static std::list<Object*>* stat_REG_get_ptr_Item_Of_ptr_Inputs_Subset();
    };
}
#endif