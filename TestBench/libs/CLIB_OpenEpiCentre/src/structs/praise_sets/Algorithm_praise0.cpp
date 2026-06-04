#include "../../../include/structs/praise_sets/Algorithm_praise0.h"
#include "../../../include/structs/praise_sets/Input_praise0.h"
#include "../../../include/structs/praise_sets/Output_praise0.h"
// public.
    void CLIBOpenEpiCentre::Algorithm_praise0::app_Do_Praise(Input_praise0* ptr_In_SubSet, Output_praise0* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_output_Value(ptr_In_SubSet->dyn_REG_get_Item_Input_praise0_valueA() + ptr_In_SubSet->dyn_REG_get_Item_Input_praise0_valueB());
    }
// private.
