#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include <array>
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_CLASS_ptr_CLIB_OpenEpiCentre__Data__Control;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//todo number of implemented CONCURRENT threads.
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
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
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
        delete _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
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
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_InputPraise();
        stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_stack_Of_OutputPraise();
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data(CLIB_OpenEpiCentre__Framework* obj, CLIB_OpenEpiCentre_STRUCT__Input* objInput, CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Input_ReferenceForThread(objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__buffer_Output_ReferenceForThread(objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput(objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput(objOutput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_InputPraise(objInput);
        stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__stack_Of_OutputPraise(objOutput);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data()" << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Input_at_ItemSideToREAD_For_doubleBufferInput(CLIB_OpenEpiCentre__Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput()->at(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput()));
    }
    struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre__Framework* obj) {
        return stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput()->at(CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput()));
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre__Framework* obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput()->begin();
        std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput()));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Output_at_ItemSideToWRITE_For_doubleBufferOutput(CLIB_OpenEpiCentre__Framework *obj) {
        auto temp = stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput()->begin();
        std::advance(temp, CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput()));
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_get_ptr_CLIB_OpenEpiCentre__Data__Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadId);
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
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre__Data__Input_at_ItemSideToREAD_For_doubleBufferInput(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput()) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre__Data__Input_at_ItemSideToWRITE_For_doubleBufferInput(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput()) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre__Data__Output_at_ItemSideToREAD_For_doubleBufferOutput(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput()) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_ptr_CLIB_OpenEpiCentre__Data__Output_at_ItemSideToWRITE_For_doubleBufferOutput(class CLIB_OpenEpiCentre__Framework* obj, struct CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput()->at(obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput()) = newClass;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadId, CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadId, newClass);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::dyn_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadId, CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
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
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = nullptr;
        std::cout << "exiting stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput() {
        std::cout << "entered stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__buffer_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = nullptr;
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
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = new std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { nullptr, nullptr };
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput(CLIB_OpenEpiCentre__Framework* obj) {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = new std::array<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>();
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { nullptr, nullptr };
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
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput(struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* objInput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput = { objInput, objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput(CLIB_OpenEpiCentre_STRUCT__Output* objOutput) {
        std::cout << "entered stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__side_To_Write_For_doubleBuffer_Output()" << std::endl;
        *_stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput = { objOutput, objOutput };
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
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferInput() {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferInput;
    }
    std::array<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*, 2>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_get_REG_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_ItemSide_For_doubleBufferOutput() {
        return _stat_REG_ptr_array_Of_buffer_ItemSide_For_doubleBufferOutput;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_InputPraise() {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output*>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__vector_Of_stack_Of_OutputPraise() {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Input_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Data::stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadId, CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* newClass) {
        std::cout << "entered stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread()" << std::endl;
        auto temp = stat_REG_get_ptr_CLIB_OpenEpiCentre__Data__array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newClass;
        std::cout << "exiting stat_REG_set_CLIB_OpenEpiCentre__Data__Item_On_Array_Of_buffer_Output_ReferenceForThread()" << std::endl;
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