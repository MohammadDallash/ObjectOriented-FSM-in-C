#include "FSMmanager.h"
#include "State_A.h"
#include "State_B.h"
#include <stdlib.h>
#define NOfStates 2


f_pointer_void_void* Update;


States myStates;

void FSM_int()
{
    Update = (f_pointer_void_void*)calloc(NOfStates, sizeof(f_pointer_void_void));
    State_A_Init();
    State_B_Init();

     
    
   
};

StatesEnum CurretState;