#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include <cstdint>
#include <iostream>
#include <list>
    std::byte* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_OpenEpiCentre_STRUCT__Output__playerId;
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::_REG_ptr_OpenEpiCentre_STRUCT__Output__Subset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_APP_select_And_Set_OpenEpiCentre_STRUCT__Output_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId) {
        switch (praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserOutput__Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserOutput__Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserOutput__Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserOutput__Item_On_List_Of_ptr_PraiseOutputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Output()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Output()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__Subset();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Output(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Output()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__Subset(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    std::byte CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId();
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_CLIB_OpenEpiCentre_STRUCT__Output__playerId(std::byte newPlayerId) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId(unsigned long long new_unsignedLongLong) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() = new_unsignedLongLong;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise0* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise1* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise2* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Item_Of_ptr_Outputs_Subset(CLIB_OpenEpiCentre_STRUCT__Output_praise3* objOutputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objOutputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output() {
        std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Output()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__playerId() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__playerId = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__Subset() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__Subset = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__playerId() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__playerId = new std::byte();
        *_REG_ptr_OpenEpiCentre_STRUCT__Output__playerId = static_cast<std::byte>(255);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId = new unsigned long long();
        *_REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId = ULONG_LONG_MAX;
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__Subset() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset() == nullptr) { }
        stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->resize(1);
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset()->begin() = nullptr;
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__playerId() {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__playerId = static_cast<std::byte*>(0);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId = static_cast<unsigned long long*>(0);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__Subset(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Output__Subset->assign(0, obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserOutput__Item_On_List_Of_ptr_PraiseOutputSubsets(0));
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Output__Subset()" << std::endl;
    }
    std::byte* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__playerId() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Output__playerId;
    }
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__praiseEventId() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Output__praiseEventId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output__Subset() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Output__Subset;
    }