#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include <iostream>
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input;
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::CLIB_OpenEpiCentre__Data__Control() {
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
        stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control();
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::~CLIB_OpenEpiCentre__Data__Control() {
        delete _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input;
        delete _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_flip_CLIB_OpenEpiCentre__Data__Control__REG_Input_DoubleBuffer(class CLIB_OpenEpiCentre__Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(obj, !obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(obj));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_flip_CLIB_OpenEpiCentre__Data__Control__REG_Output_DoubleBuffer(class CLIB_OpenEpiCentre__Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj, !obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_pop_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Input(CLIB_OpenEpiCentre__Framework* obj, std::byte concurrentThreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_On_vector_Of_stack_Of_InputPraise(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->begin()+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->size() < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_pop_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Output(CLIB_OpenEpiCentre__Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->at(1));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->erase(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->begin()+1);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->size() < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Input(CLIB_OpenEpiCentre__Framework* obj) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->size()) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(obj);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->size() < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::app_FUNCT_push_CLIB_OpenEpiCentre__Data__Control__STACK_Of_Output(CLIB_OpenEpiCentre__Framework* obj, std::byte concurrentThreadId) {
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->push_back(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->at(0));
        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->size()) = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId);
        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->size() < 2) {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(false);
        } else {
            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(true);
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control()" << std::endl;
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction();
        stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend();
        stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction();
        stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend();
        stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input();
        stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction();
        stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend();
        stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input();
        stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction() {
    return stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend() {
    return stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(class CLIB_OpenEpiCentre__Framework* obj) {
        return stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input();
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(class CLIB_OpenEpiCentre__Framework* obj) {
    return stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(bool value) {
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(value);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(class CLIB_OpenEpiCentre__Framework* obj, bool new_Bool) {
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(new_Bool);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::dyn_REG_set_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(class CLIB_OpenEpiCentre__Framework* obj, bool new_Bool) {
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(new_Bool);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction() {
        std::cout << "entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend() {
        std::cout << "entered stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input() {
        std::cout << "entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output() {
        std::cout << "entered stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction = new bool();
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(true);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend = new bool();
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(true);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input = new bool();
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(true);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output = new bool();
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(true);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction() {
        std::cout << "entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(false);
        std::cout << "exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend() {
        std::cout << "entered stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(false);
        std::cout << "exiting stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input() {
        std::cout << "entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(false);
        std::cout << "exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output() {
        std::cout << "entered stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(false);
        std::cout << "exiting stat_REG_boot3_INITIALISE_side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction() {
        std::cout << "entered stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        std::cout << "thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_InputAction = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction << std::endl;
        std::cout << "exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend() {
        std::cout << "entered stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        std::cout << "thread ? :: <= _stat_REG_ptr_FLAG_isLoaded_Stack_OutputSend = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend << std::endl;
        std::cout << "exiting stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        return _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input() {
        std::cout << "entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        std::cout << "thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = " << *_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input << std::endl;
        std::cout << "exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        return _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input;
    }
    bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output() {
        std::cout << "entered stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        std::cout << "thread ? :: <= _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output << std::endl;
        std::cout << "exiting stat_REG_get_ptr_side_To_Write_For_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        return _stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(bool new_Bool) {
        std::cout << "entered stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction()" << std::endl;
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction = new_Bool;
        std::cout << "thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_InputAction << std::endl;
        std::cout << "exiting stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(bool new_Bool) {
        std::cout << "entered stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
        *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend = new_Bool;
        std::cout << "thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_FLAG_CLIB_OpenEpiCentre__Data__Control__isLoaded_Stack_OutputSend << std::endl;
        std::cout << "exiting stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(bool new_Bool) {
        std::cout << "entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input()" << std::endl;
        *_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input = new_Bool;
        std::cout << "thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Input << std::endl;
        std::cout << "exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control::stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(bool new_Bool) {
        std::cout << "entered stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output()" << std::endl;
        *_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output = new_Bool;
        std::cout << "thread ? :: => _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = " << *_stat_REG_ptr_CLIB_OpenEpiCentre__Data__Control__side_To_Write_For_doubleBuffer_Output << std::endl;
        std::cout << "exiting stat_REG_set_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }