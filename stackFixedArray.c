/**************************************************************************
 * @name   : stack fixed array
 * @brief  : sub-program for stack
 * @author : TAREK ALLAM
 * ************************************************************************
 */

/********************* INCLUDES *************************/
#include "stackFixedArray.h"
/********************* STATIC HELPER FUNCTIONS **********/

static stack_state_t stack_State (stack_t *stack)
{
    if ((stack->stackPointer)==(STACK_MAX_SIZE-1))
    {
        return STACK_FULL ;
    }
    else if ((stack->stackPointer)==(INITIALED_POINTER))
    {
        return STACK_EMPITY ;
    }
    else
    {
        return STACK_NORMAL ;
    }
}

/********************* SUB_PREGRAMS *********************/
ES_t stack_Intial (stack_t *stack )
{
    ES_t errorStateLocal = ES_NOK ;
    if (stack)
    {
    stack->stackPointer = -1;
    errorStateLocal = ES_OK ;
    }
    else
    {
    errorStateLocal = ES_NOK ;
    }

    return errorStateLocal ;
}


ES_t stack_POP  (stack_t *stack, uint32 *pop_Data)
{
    ES_t errorStateLocal = ES_NOK ;
    if ((stack)&&(pop_Data)&&(stack_State(stack)!=STACK_EMPITY))
    {
       *pop_Data = (stack->stackArr[(stack->stackPointer)]);
        stack->stackPointer--;
        errorStateLocal = ES_OK ; 
    }
    else
    {
        errorStateLocal = ES_NOK ;
    }
     return errorStateLocal ;
}



ES_t stack_PUSH (stack_t *stack, uint32 push_Data)
{
    ES_t errorStateLocal = ES_NOK ;
    if ((stack) && ( stack_State(stack) != STACK_FULL) )
    {
        (stack->stackPointer)++;
        stack->stackArr[stack->stackPointer] = push_Data ;
        errorStateLocal = ES_OK ;
    }
    else
    {
        errorStateLocal = ES_NOK ;
    }
        return errorStateLocal ;

}

uint32 stack_TOP(stack_t *stack, ES_t *ERRORSTATE)
{
    if ((stack) && (ERRORSTATE))
    {
        return (stack->stackArr[stack->stackPointer]);
        *ERRORSTATE = ES_OK ;
    }
    {
        *ERRORSTATE = ES_NOK ;
    }
}

ES_t stack_SHOW (stack_t *stack)
{
    ES_t errorStateLocal = ES_NOK ;
    sint32 counter ;
    if (stack && stack_State(stack)!=STACK_EMPITY)
    {
        for (counter = (stack->stackPointer) ; counter >= 0 ; counter--)
        {
            printf("STACK ELEMENT : %i  VALUE : 0x%X \n", (counter+1) , stack->stackArr[counter]);
        }
        errorStateLocal =ES_OK ;

    }
    else if (stack && stack_State(stack)==STACK_EMPITY)
    {
        errorStateLocal =ES_NOK ;
        printf("STACK IS EMPTY");
    }
    else
    {
        printf("POINTER IS NULL");
        errorStateLocal =ES_NOK ;
    }
     return errorStateLocal ;

}

uint32 stack_SIZE (stack_t *stack, ES_t *ERRORSTATE)
{
    if ((stack) &&(ERRORSTATE))
    {
        return ((stack->stackPointer)+1) ;
        *ERRORSTATE = ES_OK ;
    }
    else
    {
        *ERRORSTATE = ES_NULL_POINTER ;
    }
}

/*****************************************************************************
 *  AUTHOR              DATE                    BRIEF 
 * ***************************************************************************
 *  TAREK ALLAM         5 OCT 2022              WRITE SUB PROGRAM
 */
