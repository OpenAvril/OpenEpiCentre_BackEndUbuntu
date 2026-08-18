#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__OUTPUT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__OUTPUT_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include <cstdint>
#include <list>
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT__Output
    {
    public:
        void app_select_And_Set_Output_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId);
        void dyn_REG_boot1_DEFINE_Output();
        void dyn_REG_boot2_SUBSTANTIATE_Output();
        void dyn_REG_boot3_INITIALISE_Output(CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Output();
        std::byte dyn_REG_get_ptr_Output_playerId();
        unsigned long long dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
        void dyn_REG_set_Output_playerId(std::byte newPraiseId);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId(unsigned long long new_unsignedLongLong);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise0* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise1* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise2* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise3* objOutputSubset);
        static void stat_CLASS_boot0_DECLARE_Output();
        static void stat_CLASS_boot1_DEFINE_Output();
        static void stat_CLASS_boot3_INITIALISE_Output();
        static void stat_CLASS_boot4_INSTANTIATE_Output();
        static void stat_REG_boot0_DECLARE_Output();
    private:
        static unsigned long long* _REG_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId;
        static std::byte* _REG_ptr_Output_playerId;
        static std::list<Object*>* _REG_ptr_List_Of_PraiseOutputSubset;
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        static void stat_REG_boot1_DEFINE_Output_playerId();
        static void stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        static void stat_REG_boot3_INITIALISE_Output_playerId();
        static void stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseId);
        static std::byte* stat_REG_get_ptr_Output_playerId();
        static unsigned long long* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
        static std::list<Object*>* stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
    };
}
#endif