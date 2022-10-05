/**************************************************************************
 * @name   : stack fixed array
 * @brief  : sub-program for stack
 * @author : TAREK ALLAM
 * ************************************************************************
 */

/********************* HEADER GAURD **********************/
#ifndef     STACKFUXEDARRAY_H_
#define     STACKFUXEDARRAY_H_
/********************* includes **************************/
#include "stdTypes.h"
#include "errorState.h"
#include <stdio.h>       // for stack show
/********************* DEFINES ***************************/
 #define STACK_MAX_SIZE     5

 #define ZERO    0
 #define INITIALED_POINTER -1
/********************* STRUCT ***************************/
typedef struct
{
    uint32 stackArr [STACK_MAX_SIZE];
    sint32 stackPointer ;
}stack_t;

typedef enum
{
    STACK_FULL,
    STACK_EMPITY,
    STACK_NORMAL
}stack_state_t;

/********************* DECLERATIONS ***********************/

/*
 *@brief    : initial the stack
 *@param    : (stack) pointer to your stack
 *@retval   : ERROR STATE
 */
ES_t stack_Intial (stack_t *stack );
/*
 *@brief    : Push the stack
 *@param    : (stack) pointer to your stack
              (push_Data) the data you need to Push
 *@retval   : ERROR STATE
 */
ES_t stack_PUSH (stack_t *stack, uint32 push_Data);
/*
 *@brief    : Pop the stack
 *@param    : (stack) pointer to your stack
              (pop_Data) pointer to variable poped data
 *@retval   : ERROR STATE
 */
ES_t stack_POP  (stack_t *stack, uint32 *pop_Data);
/*
 *@brief    : show the top of stack
 *@param    : (stack) pointer to your stack
              (ERRORSTATE) pointer to give error state
 *@retval   : stack top
 */
uint32 stack_TOP(stack_t *stack, ES_t *ERRORSTATE);  
/*
 *@brief    : Push the stack
 *@param    : (stack) pointer to your stack
 *@retval   : ERROR STATE
 */
ES_t stack_SHOW (stack_t *stack);
/*
 *@brief    : Push the stack
 *@param    : (stack) pointer to your stack
              (ERRORSTATE) pointer to give error state
 *@retval   : Size of the stack
 */
uint32 stack_SIZE (stack_t *stack, ES_t *ERRORSTATE);

#endif // !STACKFUXEDARRAY_H_

/* ***************************************************************************
 *  AUTHOR              DATE                    BRIEF 
 * ***************************************************************************
 *  TAREK ALLAM         5 OCT 2022              WRITE DECLERATION
 */

