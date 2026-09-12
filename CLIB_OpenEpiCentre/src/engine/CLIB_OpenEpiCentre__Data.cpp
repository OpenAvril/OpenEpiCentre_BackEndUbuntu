#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include <array>
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::CLIB_OpenEpiCentre__Data() {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::~CLIB_OpenEpiCentre__Data() {
        delete _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
        delete _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control() {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Output();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_InputPraise();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_OutputPraise();
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Input* objInput, CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input(obj, objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output(obj, objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(objOutput);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_READ(CLIB_OpenEpiCentre__Framework* obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Input()->begin();
        std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(obj)));
        return *temp;
    }
    struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE()" << std::endl;
        return stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Input()->at(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Input(obj)));
        std::cout << "exiting dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Input_WRITE()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_READ(CLIB_OpenEpiCentre__Framework* obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Output()->begin();
        std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj)));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_side_To_Write_For_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre__Framework *obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Output()->begin();
        std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj)));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(std::byte concurrentThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, static_cast<int>(concurrentThreadId));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(std::byte concurrentThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, static_cast<int>(concurrentThreadId));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_On_vector_Of_stack_Of_InputPraise(unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_On_vector_Of_stack_Of_OutputPraise(unsigned long long slot) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        return *temp;
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise() {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise();
    }
    std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise() {
        return stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(std::byte concurrentThreadId, CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadId, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread(std::byte concurrentThreadId, CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadId, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_InputPraise(unsigned long long slot, CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_InputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_OutputPraise(unsigned long long slot, CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_OutputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data() {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data() {
        std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control = nullptr;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control = new CLIB_OpenEpiCentre__Data__Control();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control() == nullptr) {}
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control() {
        std::cout << "entered stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
        return _stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
        std::cout << "exiting stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Output() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_InputPraise() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_InputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_OutputPraise() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_OutputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->at(index) = nullptr;
        }
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>();//todo number of implemented CONCURRENT threads.
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->size(); index++) {
            stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->at(index) = nullptr;
        }
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = new std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>();
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = { nullptr, nullptr };
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>();
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = { nullptr, nullptr };
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise() == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { nullptr };
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>();
        while (stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise() == nullptr) {}
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { nullptr };
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(CLIB_OpenEpiCentre_STRUCT__Input* objInput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->begin();
            std::advance(temp, index);
            *temp = objInput;
        }
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
        for (int index = 0; index < stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->size(); index++) {
            auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->begin();
            std::advance(temp, index);
            *temp = objOutput;
        }
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input(class CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj, struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* objInput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ(obj, objInput);
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE(obj, objInput);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE(obj, objOutput);
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ(obj, objOutput);
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(CLIB_OpenEpiCentre_STRUCT__Input* objInput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise()" << std::endl;
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise()" << std::endl;
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise()" << std::endl;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread() {
        return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread() {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Input() {
        return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Output() {
        return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise() {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise() {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(std::byte concurrentThreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, static_cast<int>(concurrentThreadId));
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread(std::byte concurrentThreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, static_cast<int>(concurrentThreadId));
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ()" << std::endl;
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Input()->at(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj))) = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_READ()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE()" << std::endl;
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Input()->at(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj))) = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Input_WRITE()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ()" << std::endl;
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Output()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj))));
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_READ()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre__Framework* obj, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE()" << std::endl;
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_side_To_Write_For_doubleBuffer_Output()->begin();
        std::advance(temp, CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_side_To_Write_For_side_To_Write_For_doubleBuffer_Output(obj))));
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_side_To_Write_For_doubleBuffer_Output_WRITE()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_InputPraise(unsigned long long slot, CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_InputPraise()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_OutputPraise(unsigned long long slot, CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_OutputPraise()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Vector_Of_stack_Of_OutputPraise()" << std::endl;
    }