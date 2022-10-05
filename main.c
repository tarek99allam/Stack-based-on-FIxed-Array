/**************************************************************************
 * @name   : main.c
 * @brief  : test of functions
 * @author : TAREK ALLAM
 * ************************************************************************
 */
/********************* includes *************************/
#include <stdio.h>
#include <stdlib.h>
#include "stackFixedArray.h"
/********************************************************/

int main ()
{
    ES_t errorState ;

    stack_t mainStack ;
    uint32 pop_MDATA ;

    errorState = stack_Intial(&mainStack);
    if (errorState == ES_OK)
        printf("stack inistiazed \n");
    else
        printf("error \n");

    errorState = stack_PUSH(&mainStack , 0x11);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x22);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x33);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x44);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x55);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x66);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);
    errorState = stack_PUSH(&mainStack , 0x77);
    printf("data 0x%X Pushed ERRORSTATE : %i \n",stack_TOP(&mainStack ,&errorState),errorState);

    printf("----------------------------------------------\n");
    stack_SHOW(&mainStack);
    printf("SIZE OF STACK %i\n",stack_SIZE(&mainStack ,&errorState));
    printf("----------------------------------------------\n");
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    errorState = stack_POP (&mainStack ,&pop_MDATA);
    printf("data 0x%X Poped ERRORSTATE : %i \n",pop_MDATA,errorState);
    printf("----------------------------------------------\n");
    stack_SHOW(&mainStack);


    return 0 ;
}

/*****************************************************************************
 *  AUTHOR              DATE                    BRIEF 
 * ***************************************************************************
 *  TAREK ALLAM         5 OCT 2022              TESTS
 */
