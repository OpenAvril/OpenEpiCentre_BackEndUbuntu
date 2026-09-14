#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__OUTPUT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__OUTPUT_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include <list>
namespace CLIBOpenEpiCentre {
    struct CLIB_OpenEpiCentre_STRUCT__Output {
    public:
        void dyn_APP_select_And_Set_OpenEpiCentre_STRUCT__Output_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId);
        void dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Output();
        void dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Output();
        void dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Output(CLIB_OpenEpiCentre__Framework* obj);
        uint8_t dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        unsigned long long dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        class Object* dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
        void dyn_REG_set_CLIB_OpenEpiCentre_STRUCT__Output__playerId(uint8_t newPraiseId);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId(unsigned long long new_unsignedLongLong);

        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise0* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise1* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise2* objOutputSubset);
        void dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(class CLIB_OpenEpiCentre_STRUCT__Output_praise3* objOutputSubset);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output();
    private:
        static uint8_t* _REG_ptr_OpenEpiCentre_STRUCT__Output__playerId;
        static unsigned long long* _REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId;
        static std::list<Object*>* _REG_ptr_OpenEpiCentre_STRUCT__Output__Subset;
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__Subset(CLIB_OpenEpiCentre__Framework* obj);
        static uint8_t* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        static unsigned long long* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        static std::list<Object*>* stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
    };
}
#endif