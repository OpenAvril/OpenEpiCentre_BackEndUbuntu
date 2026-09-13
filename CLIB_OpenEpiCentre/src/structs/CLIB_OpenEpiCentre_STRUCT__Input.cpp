#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include <cstdint>
#include <iostream>
#include <list>
    std::byte* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_OpenEpiCentre_STRUCT__Input__playerId;
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::_REG_ptr_OpenEpiCentre_STRUCT__Input__Subset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_APP_select_And_Set_OpenEpiCentre_STRUCT__Input_Subset(CLIB_OpenEpiCentre__Framework* obj, unsigned long long praiseEventId) {
        switch (praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserInput__Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserInput__Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserInput__Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserInput__Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Input()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Input()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__Subset();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Input(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Input()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__Subset(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    std::byte CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId();
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_CLIB_OpenEpiCentre_STRUCT__Input__playerId(std::byte newPlayerId) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId(unsigned long long new_unsignedLongLong) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() = new_unsignedLongLong;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise1* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise2* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT__Input_praise3* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input() {
        std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT__Input()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__playerId() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__playerId = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__Subset() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__Subset = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__playerId() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__playerId = new std::byte();
        *_REG_ptr_OpenEpiCentre_STRUCT__Input__playerId = static_cast<std::byte>(255);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId = new unsigned long long();
        *_REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId = ULONG_LONG_MAX;
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__Subset() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset() == nullptr) { }
        stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->resize(1);
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset()->begin() = nullptr;
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__playerId() {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__playerId = static_cast<std::byte*>(0);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId = static_cast<unsigned long long*>(0);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__Subset(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT__Input__Subset->assign(0, obj->dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT__UserInput__Item_On_List_Of_ptr_PraiseInputSubsets(0));
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT__Input__Subset()" << std::endl;
    }
    std::byte* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__playerId() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Input__playerId;
    }
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__praiseEventId() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Input__praiseEventId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Input__Subset() {
        return _REG_ptr_OpenEpiCentre_STRUCT__Input__Subset;
    }