#include "../../include/engine/Data_Control.h"

#include "../../include/engine/Data.h"
#include "../../include/engine/Server.h"
bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_InputAction;
bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
// public.
CLIBOpenEpiCentre::Data_Control::Data_Control()
{

}
CLIBOpenEpiCentre::Data_Control::~Data_Control()
{

}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_flip_Input_DoubleBuffer()
{

}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_Flip_Output_DoubleBuffer()
{

}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_pop_From_Stack_Of_Input(Framework_Server* obj, uint8_t concurrentThreadID)
{
     Input* referenceForCore = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
     std::vector<Input*>* ptr_inputStack = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
     referenceForCore = ptr_inputStack->at(1);
     ptr_inputStack->erase(ptr_inputStack->begin()+1);
     if (sizeof(ptr_inputStack) < 2)
     {
      SetFlag_InputStackLoaded(false);
     }
     else
     {
      SetFlag_InputStackLoaded(true);
     }
}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_pop_From_Stack_Of_Output(Framework_Server* obj)
{
 class Output* distributeBuffer = obj->Get_Server_Assembly()->Get_Data()->GetBuffer_OutputBackDouble();
 std::vector<class Output*>* ptr_outputStack = obj->Get_Server_Assembly()->Get_Data()->Get_Stack_OutputPraise();
 distributeBuffer = ptr_outputStack->at(1);
 ptr_outputStack->erase(ptr_outputStack->begin()+1);
 if (sizeof(ptr_outputStack) < 2)
 {
  SetFlag_OutputStackLoaded(false);
 }
 else
 {
  SetFlag_OutputStackLoaded(true);
 }
}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_push_To_STACK_Of_Input(Framework_Server* obj)
{
 std::vector<class Avril_FSD::Input*>* ptr_InputStack = obj->Get_Server_Assembly()->Get_Data()->Get_Stack_InputPraise();
 class Avril_FSD::Input* ptr_Buffer_Praise = obj->Get_Server_Assembly()->Get_Data()->GetBuffer_InputBackDouble();
 ptr_InputStack->push_back(ptr_InputStack->at(0));
 ptr_InputStack->at(ptr_InputStack->size()) = ptr_Buffer_Praise;
 if (sizeof(ptr_InputStack) < 2)
 {
  SetFlag_InputStackLoaded(false);
 }
 else
 {
  SetFlag_InputStackLoaded(true);
 }
}
void CLIBOpenEpiCentre::Data_Control::app_FUNCT_push_To_STACK_Of_Output(Framework_Server* obj, uint8_t concurrentThreadID)
{
 std::vector<class Avril_FSD::Output*>* ptr_outputStack = obj->Get_Server_Assembly()->Get_Data()->Get_Stack_OutputPraise();
 class Avril_FSD::Output* ptr_referenceForCore = obj->Get_Server_Assembly()->Get_Data()->Get_OutputRefferenceOfCore(concurrentCoreId);
 ptr_outputStack->push_back(ptr_outputStack->at(0));
 ptr_outputStack->at(ptr_outputStack->size()) = ptr_referenceForCore;
 if (sizeof(ptr_outputStack) < 2)
 {
  SetFlag_OutputStackLoaded(false);
 }
 else
 {
  SetFlag_OutputStackLoaded(true);
 }
}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot1_DEFINE_Data_Control(Framework_Server* obj)
{

}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot2_SUBSTANTIATE_Data_Control(Framework_Server* obj)
{

}
 void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot3_INITIALISE_Data_Control(Framework_Server* obj)
{

}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot4_INSTANTIATE_Data_Control(Framework_Server* obj)
{

}
bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_InputAction()
{
  return
}
bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend()
{
 return
}
bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
{
 return
}
bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
{
 return
}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool value)
{

}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool value)
{

}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
{

}
void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
{

}
void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot0_DECLARE_Data_Control()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot1_DEFINE_Data_Control()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot3_INITIALISE_Data_Control()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot4_INSTANTIATE_Data_Control()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot0_DECLARE_Data_Control()
{

}
// private.
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input()
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output()
{

}
bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_InputAction()
{
 return
}
bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend()
{
 return
}
bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input()
{
 return
}
bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
{
  return
}
void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool new_Bool)
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool new_Bool)
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
{

}
void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
{

}