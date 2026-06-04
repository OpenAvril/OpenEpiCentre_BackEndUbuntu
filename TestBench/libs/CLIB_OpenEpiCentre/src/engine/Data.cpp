
#include "../../include/engine/Data.h"
#include "../../include/engine/Data_Control.h"
#include "../../include/engine/Framework_Server.h"
#include "../../include/engine/Global.h"
#include "../../include/engine/Server.h"
#include "../../include/structs/Input.h"
#include "../../include/structs/Output.h"
#include "../../include/structs/User_Input.h"
#include "../../include/structs/User_Output.h"
#include <array>
#include <iostream>
    CLIBOpenEpiCentre::Data_Control* CLIBOpenEpiCentre::Data::_stat_CLASS_ptr_Data_Control;
    CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Data::_stat_CLASS_ptr_User_Input;
    CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Data::_stat_CLASS_ptr_User_Output;
    std::array<CLIBOpenEpiCentre::Input*, 3>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<CLIBOpenEpiCentre::Output*, 3>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;//NUMBER OF CONCURRENT THREADS.
    std::array<CLIBOpenEpiCentre::Input*, 2>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_array_Of_doubleBuffer_Input;
    std::array<CLIBOpenEpiCentre::Output*, 2>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_array_Of_doubleBuffer_Output;
    std::vector<CLIBOpenEpiCentre::Input*>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    std::vector<CLIBOpenEpiCentre::Output*>* CLIBOpenEpiCentre::Data::_stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
// public.
    CLIBOpenEpiCentre::Data::Data()
    {
        std::cout << "entered CONSTRUCTOR of Data()" << std::endl;
        stat_CLASS_boot0_DECLARE_Data();
        stat_CLASS_boot1_DEFINE_Data();
        stat_CLASS_boot3_INITIALISE_Data();
        stat_REG_boot0_DECLARE_Data();
        std::cout << "exiting CONSTRUCTOR of Data()" << std::endl;
    }
    CLIBOpenEpiCentre::Data::~Data()
    {
        delete _stat_CLASS_ptr_Data_Control;
        delete _stat_CLASS_ptr_User_Input;
        delete _stat_CLASS_ptr_User_Output;
        delete _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Input;
        delete _stat_REG_ptr_array_Of_doubleBuffer_Output;
        delete _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
        delete _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
        }
    CLIBOpenEpiCentre::Data_Control* CLIBOpenEpiCentre::Data::dyn_CLASS_get_ptr_Data_Control()
    {
    return stat_CLASS_get_ptr_Data_Control();
    }
    CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Data::dyn_CLASS_get_ptr_User_Input()
    {
    return stat_CLASS_get_ptr_User_Input();
    }
    CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Data::dyn_CLASS_get_ptr_User_Output()
    {
    return stat_CLASS_get_ptr_User_Output();
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_boot1_DEFINE_Data(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Data()" << std::endl;
        stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output();
        stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise();
        stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_boot3_INITIALISE_Data(Framework_Server* obj, Input* objInput, Output* objOutput)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Data()" << std::endl;
        stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(objInput);
        stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(objOutput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Input(objInput);
        stat_REG_boot3_INITIALISE_doubleBuffer_Output(objOutput);
        stat_REG_boot3_INITIALISE_stack_Of_InputPraise(objInput);
        stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(objOutput);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_boot4_INSTANTIATE_Data(Framework_Server* obj)
    {
    std::cout << "entered dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;

    std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Data()" << std::endl;
    }
    CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
    std::advance(temp, Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
    return *temp;
    }
    CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(Framework_Server* obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }

    CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(Framework_Server *obj)
    {
    auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Output()->begin();
    std::advance(temp, Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
    return *temp;
    }
    CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
    CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID)
    {
    auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
    }
    CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(uint8_t slot)
    {
    auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
    std::advance(temp, slot);
    return *temp;
    }
    CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(uint8_t slot)
    {
    auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
    std::advance(temp, slot);
    return *temp;
    }
    std::vector<CLIBOpenEpiCentre::Input*>* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_InputPraise();
    }
    std::vector<CLIBOpenEpiCentre::Output*>* CLIBOpenEpiCentre::Data::dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(obj, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(obj, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, Input* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(concurrentThreadID, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, Output* newClass)
    {
    stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(concurrentThreadID, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::Data::dyn_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {
    stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(slot, newClass);
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot0_DECLARE_Data()
    {
    std::cout << "entered stat_CLASS_boot0_DECLARE_Data()" << std::endl;

    std::cout << "exiting stat_CLASS_boot0_DECLARE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot1_DEFINE_Data()
    {
    std::cout << "entered stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    stat_CLASS_boot1_DEFINE_Data_Control();
    stat_CLASS_boot1_DEFINE_User_Input();
    stat_CLASS_boot1_DEFINE_User_Output();
    std::cout << "exiting stat_CLASS_boot1_DEFINE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot3_INITIALISE_Data()
    {
    std::cout << "entered stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    stat_CLASS_boot3_INITIALISE_Data_Control();
    stat_CLASS_boot3_INITIALISE_User_Input();
    stat_CLASS_boot3_INITIALISE_User_Output();
    std::cout << "exiting stat_CLASS_boot3_INITIALISE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot4_INSTANTIATE_Data()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Data()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot0_DECLARE_Data()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Data()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Data()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot1_DEFINE_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot1_DEFINE_User_Input()
    {
        _stat_CLASS_ptr_User_Input = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot1_DEFINE_User_Output()
    {
        _stat_CLASS_ptr_User_Output = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot3_INITIALISE_Data_Control()
    {
        _stat_CLASS_ptr_Data_Control = new Data_Control();
        while (stat_CLASS_get_ptr_Data_Control() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot3_INITIALISE_User_Input()
    {
        _stat_CLASS_ptr_User_Input = new User_Input();
        while (stat_CLASS_get_ptr_User_Input() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Data::stat_CLASS_boot3_INITIALISE_User_Output()
    {
        _stat_CLASS_ptr_User_Output = new User_Output();
        while (stat_CLASS_get_ptr_User_Output() == nullptr) {}
    }
    CLIBOpenEpiCentre::Data_Control* CLIBOpenEpiCentre::Data::stat_CLASS_get_ptr_Data_Control()
    {
        return _stat_CLASS_ptr_Data_Control;
    }
    CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Data::stat_CLASS_get_ptr_User_Input()
    {
        return _stat_CLASS_ptr_User_Input;
    }
    CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Data::stat_CLASS_get_ptr_User_Output()
    {
        return _stat_CLASS_ptr_User_Output;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_Input_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_Output_ReferenceForThread()
    {
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Input()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Input = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_doubleBuffer_Output()
    {
        _stat_REG_ptr_array_Of_doubleBuffer_Output = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_stack_Of_InputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()
    {
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = nullptr;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_buffer_Input_ReferenceForThread(Input* objInput)
    {
        std::cout << "entered stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = new std::array<Input*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread = { objInput, objInput, objInput };
        std::cout << "exiting stat_REG_boot1_DEFINE_buffer_stack_Of_OutputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread(Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
        _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = new std::array<Output*, 3>();
        *_stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread = { objOutput, objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_buffer_Output_ReferenceForThread()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_doubleBuffer_Input(Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Input = new std::array<Input*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Input = { objInput, objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Input()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_doubleBuffer_Output(Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
        _stat_REG_ptr_array_Of_doubleBuffer_Output = new std::array<Output*, 2>();
        *_stat_REG_ptr_array_Of_doubleBuffer_Output = { objOutput, objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_doubleBuffer_Output()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_stack_Of_InputPraise(Input* objInput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_InputPraise = new std::vector<Input*>();
        *_stat_REG_ptr_vector_Of_stack_Of_InputPraise = { objInput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_InputPraise()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_boot3_INITIALISE_stack_Of_OutputPraise(Output* objOutput)
    {
        std::cout << "entered stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
        _stat_REG_ptr_vector_Of_stack_Of_OutputPraise = new std::vector<Output*>();
        *_stat_REG_ptr_vector_Of_stack_Of_OutputPraise = { objOutput };
        std::cout << "exiting stat_REG_boot3_INITIALISE_stack_Of_OutputPraise()" << std::endl;
    }
    std::array<class CLIBOpenEpiCentre::Input*, 3>* CLIBOpenEpiCentre::Data::stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()
{
    return _stat_REG_ptr_array_Of_buffer_Input_ReferenceForThread;
}
    std::array<class CLIBOpenEpiCentre::Output*, 3>* CLIBOpenEpiCentre::Data::stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()
    {
        return _stat_REG_ptr_array_Of_buffer_Output_ReferenceForThread;
    }
    std::array<class CLIBOpenEpiCentre::Input*, 2>* CLIBOpenEpiCentre::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Input;
    }
    std::array<class CLIBOpenEpiCentre::Output*, 2>* CLIBOpenEpiCentre::Data::stat_get_REG_ptr_array_Of_doubleBuffer_Output()
    {
        return _stat_REG_ptr_array_Of_doubleBuffer_Output;
    }
    std::vector<class CLIBOpenEpiCentre::Input*>* CLIBOpenEpiCentre::Data::stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_InputPraise;
    }
    std::vector<class CLIBOpenEpiCentre::Output*>* CLIBOpenEpiCentre::Data::stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()
    {
        return _stat_REG_ptr_vector_Of_stack_Of_OutputPraise;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_buffer_Input_ReferenceForThread(uint8_t concurrentThreadID, CLIBOpenEpiCentre::Input* newClass)
    {
        auto temp = stat_REG_get_ptr_Array_Of_buffer_Input_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_buffer_Output_ReferenceForThread(uint8_t concurrentThreadID, CLIBOpenEpiCentre::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_array_Of_buffer_Output_ReferenceForThread()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_READ(Framework_Server* obj, CLIBOpenEpiCentre::Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, CLIBOpenEpiCentre::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Input_WRITE(Framework_Server* obj, CLIBOpenEpiCentre::Input* newClass)
    {
        auto temp = stat_get_REG_ptr_array_Of_doubleBuffer_Input()->begin();
        std::advance(temp, CLIBOpenEpiCentre::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_READ(Framework_Server* obj, CLIBOpenEpiCentre::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, CLIBOpenEpiCentre::Global::stat_CONVERT_Bool_To_Int(!obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Array_Of_doubleBuffer_Output_WRITE(Framework_Server* obj, CLIBOpenEpiCentre::Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, CLIBOpenEpiCentre::Global::stat_CONVERT_Bool_To_Int(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()));
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Vector_Of_stack_Of_InputPraise(uint8_t slot, Input* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }
    void CLIBOpenEpiCentre::Data::stat_REG_set_Item_On_Vector_Of_stack_Of_OutputPraise(uint8_t slot, Output* newClass)
    {
        auto temp = stat_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin();
        std::advance(temp, slot);
        *temp = newClass;
    }