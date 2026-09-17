#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include <cstdint>
#include <iostream>
#include <list>
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_playerId;
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::_REG_ptr_OpenEpiCentre_STRUCT_Input_Subset;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_Framework* obj, unsigned long long praiseEventId) {
        switch (praiseEventId) {
            case 0:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 1:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 2:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            case 3:
                obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(praiseEventId)));
                break;

            default:
                break;
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset();
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset();
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
        std::cout << "thread "  << threadId << " :: entered dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset(obj);
        std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId();
    }
    unsigned long long CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId();
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        return *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_CLIB_OpenEpiCentre_STRUCT_Input_playerId(uint8_t newPlayerId) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() = newPlayerId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(unsigned long long new_unsignedLongLong) {
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() = new_unsignedLongLong;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise0* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise1* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise2* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Item_Of_ptr_Inputs_Subset(CLIB_OpenEpiCentre_STRUCT_Input_praise3* objInputSubset) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objInputSubset);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_STRUCT_Input()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = nullptr;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = nullptr;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset = nullptr;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = new uint8_t();
        *_REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = static_cast<uint8_t>(255);
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = new unsigned long long();
        *_REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = ULONG_LONG_MAX;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset = new std::list<Object*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() == nullptr) { }
        stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->resize(1);
        *stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset()->begin() = nullptr;
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId = static_cast<uint8_t*>(0);
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_playerId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId = static_cast<unsigned long long*>(0);
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_Framework* obj) {
        std::cout << "thread "  << threadId << " :: entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
        _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset->assign(0, obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(0));
        std::cout << "thread "  << threadId << " :: exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_Input_Subset()" << std::endl;
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_playerId;
    }
    unsigned long long* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_praiseEventId;
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input::stat_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset() {
        return _REG_ptr_OpenEpiCentre_STRUCT_Input_Subset;
    }