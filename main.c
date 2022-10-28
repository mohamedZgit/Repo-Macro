/**
  ****************************************************************************
  * @file    main.c
  * @author  mohamed zaghouani
  * @brief   Macros 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/

/* Macros --------------------------------------------------------------------*/

#define INTEL 1 
#define NOINTEL 0
#define A 4
#define B 8

#define __add(X,Y) (INTEL)?(X+Y):(X*Y)                   // faire add(A+B)
#define __min(X,Y) (INTEL)?((X<Y)? X:Y):((X>Y)? X:Y)     //trouver le min entre (A,B)
#define __mult=(X,Y) (NOINTEL)?(X+Y):(X*Y)               // faire mult(A*B)
#define __max(X,Y) (NOINTEL)?((X<Y)? X:Y):((X>Y)? X:Y)   //trouver le max entre (A,B)

/* Private functions ---------------------------------------------------------*/

int Func_Som(int a,int b){
  return(a+b);
}

int Func_Som2(void){
  return(A+B);
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)

{ 
  
  int som_macro = __add(A,B);  // l'appels des nos fonction : //add
  int mul_macro = __mult(A,B);                                //min 
  int calmax_min = __min(A,B);                                //mult
  int calmax_max = __max(A,B);                                //max

  while (1)
  {}
}
