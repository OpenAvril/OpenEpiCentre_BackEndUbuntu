#pragma once
#include <cstdint>
#include <vector>

#include "CLIB_OpenEpiCentre_Framework_Server.h"

namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre_Data
    {
    public:
        CLIB_OpenEpiCentre_Data();
        virtual ~CLIB_OpenEpiCentre_Data();
        class Data_Control* dyn_CLASS_get_ptr_Data_Control();
        class User_Input* dyn_CLASS_get_ptr_User_Input();
        class User_Output* dyn_CLASS_get_ptr_User_Output();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_Framework_Server* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_Framework_Server* obj, struct Input* objInput, struct Output* objOutput);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_Framework_Server* obj);
        Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(CLIB_OpenEpiCentre_Framework_Server* obj);
        Input* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre_Framework_Server* obj);
        Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIB_OpenEpiCentre_Framework_Server* obj);
        Output* dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre_Framework_Server *obj);
        Input* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID);
        Output* dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID);
        Input* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot);
        Output* dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot);
        std::vector<Input*>* dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        std::vector<Output*>* dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(CLIB_OpenEpiCentre_Framework_Server* obj, Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre_Framework_Server* obj, Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(CLIB_OpenEpiCentre_Framework_Server* obj, Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre_Framework_Server* obj, Output* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, Input* newClass);
        void dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, Output* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass);
        void dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data();
    private:
        static Data_Control* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Data_Control;
        static User_Input* _stat_CLASS_ptr_User_Input;
        static User_Output* _stat_CLASS_ptr_User_Output;
        static std::array<Input*, 3>* _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<Output*, 3>* _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
        static std::array<Input*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Input;
        static std::array<Output*, 2>* _stat_REG_ptr_array_Of_doubleBuffer_Output;
        static std::vector<Input*>* _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        static std::vector<Output*>* _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        static void stat_CLASS_boot1_DEFINE_Data_Control();
        static void stat_CLASS_boot1_DEFINE_User_Input();
        static void stat_CLASS_boot1_DEFINE_User_Output();
        static void stat_CLASS_boot3_INITIALISE_Data_Control();
        static void stat_CLASS_boot3_INITIALISE_User_Input();
        static void stat_CLASS_boot3_INITIALISE_User_Output();
        static Data_Control* stat_CLASS_get_ptr_Data_Control();
        static User_Input* stat_CLASS_get_ptr_User_Input();
        static User_Output* stat_CLASS_get_ptr_User_Output();
        static void stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        static void stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        static void stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        static void stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(Input* objInput);
        static void stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(Output* objOutput);
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Input(Input* objInput);
        static void stat_REG_boot3_INITIALISE_doubleBuffer_Output(Output* objOutput);
        static void stat_REG_boot3_INITIALISE_stack_Of_InputPraise(Input* objInput);
        static void stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(Output* objOutput);
        static std::array<Input*, 3>* stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<Output*, 3>* stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread();//NUMBER OF CONCURRENT THREADS.
        static std::array<Input*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Input();
        static std::array<Output*, 2>* stat_get_REG_ptr_array_Of_doubleBuffer_Output();
        static std::vector<Input*>* stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        static std::vector<Output*>* stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        static void stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(CLIB_OpenEpiCentre_Framework_Server* obj, Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(CLIB_OpenEpiCentre_Framework_Server* obj, Input* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(CLIB_OpenEpiCentre_Framework_Server* obj, Output* newClass);
        static void stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(CLIB_OpenEpiCentre_Framework_Server* obj, Output* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass);
        static void stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass);
    };
}
