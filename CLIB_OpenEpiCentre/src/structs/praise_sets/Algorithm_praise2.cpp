#include "../../../include/structs/praise_sets/Algorithm_praise2.h"
#include "../../../include/structs/praise_sets/Input_praise2.h"
#include "../../../include/structs/praise_sets/Output_praise2.h"
// public.
    void CLIBOpenEpiCentre::Algorithm_praise2::app_Do_Praise(Input_praise2* ptr_In_SubSet, Output_praise2* ptr_Out_SubSet)
    {
        ptr_Out_SubSet->dyn_REG_set_output_praise2_Value(ptr_In_SubSet->dyn_REG_get_Item_Input_praise2_valueA() * ptr_In_SubSet->dyn_REG_get_Item_Input_praise2_valueB());
    }
// private.
