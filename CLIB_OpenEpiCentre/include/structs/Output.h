#pragma once
#include <cstdint>
#include <list>
namespace CLIBOpenEpiCentre
{
    struct Output
    {
    public:
        void app_select_And_Set_Output_Subset(CLIB_OpenEpiCentre_Framework* obj, uint8_t praiseEventId);
        void dyn_REG_boot1_DEFINE_Output();
        void dyn_REG_boot2_SUBSTANTIATE_Output();
        void dyn_REG_boot3_INITIALISE_Output(CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Output();
        uint8_t dyn_REG_get_ptr_Output_playerId();
        uint8_t dyn_REG_get_ptr_Output_praiseEventId();
        class Object* dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
        void dyn_REG_set_Output_playerId(uint8_t newPraiseId);
        void dyn_REG_set_ptr_Output_praiseEventId(uint8_t new_uint8_t);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class Output_praise0* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class Output_praise1* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class Output_praise2* objOutputSubset);
        void dyn_REG_set_ptr_Item_Of_ptr_Outputs_Subset(class Output_praise3* objOutputSubset);
        static void stat_CLASS_boot0_DECLARE_Output();
        static void stat_CLASS_boot1_DEFINE_Output();
        static void stat_CLASS_boot3_INITIALISE_Output();
        static void stat_CLASS_boot4_INSTANTIATE_Output();
        static void stat_REG_boot0_DECLARE_Output();
    private:
        static uint8_t* _REG_ptr_Output_praiseEventId;
        static uint8_t* _REG_ptr_Output_playerId;
        static std::list<Object*>* _REG_ptr_List_Of_PraiseOutputSubset;
        static void stat_REG_boot1_DEFINE_Output_praiseEventId();
        static void stat_REG_boot1_DEFINE_Output_playerId();
        static void stat_REG_boot1_DEFINE_Output_List_Of_PraiseOutputSubset();
        static void stat_REG_boot2_SUBSTANTIATE_Output_praiseEventId();
        static void stat_REG_boot2_SUBSTANTIATE_Output_playerId();
        static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset();
        static void stat_REG_boot3_INITIALISE_Output_praiseEventId();
        static void stat_REG_boot3_INITIALISE_Output_playerId();
        static void stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(CLIB_OpenEpiCentre_Framework* obj, uint8_t praiseId);
        static uint8_t* stat_REG_get_ptr_Output_playerId();
        static uint8_t* stat_REG_get_ptr_Output_praiseEventId();
        static std::list<Object*>* stat_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
    };
}