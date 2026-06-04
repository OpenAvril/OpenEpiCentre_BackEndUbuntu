#include "../../../include/structs/praise_sets/Algorithm_praise3.h"
#include "../../../include/structs/praise_sets/Input_praise3.h"
#include "../../../include/structs/praise_sets/Output_praise3.h"
// public.
    void CLIBOpenEpiCentre::Algorithm_praise3::app_Do_Praise(Input_praise3* ptr_In_SubSet, Output_praise3* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_output_Value(ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueA() / ptr_In_SubSet->dyn_REG_get_Item_Input_praise3_valueB());
    }
// private.
