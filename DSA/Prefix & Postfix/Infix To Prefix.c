// (A+(B-C)*(D-E)/F)->INFIX TO PREFIX

// Symbole     Stack       Exp
// )           )	
// F           )	       F
// /           )/	       F
// )           )/)	       F
// E           )/)-	       FE
// -           )/)	       FE
// D           )/)- 	   FED
// (           )/	       FED-
// *           )/*	       FED-
// )           )/*)	       FED-
// C           )/*)	       FED-C
// -           )/*)-	   FED-C
// B           )/*)-	   FED-CB
// (           )/*	       FED-CB-
// +           )+	       FED-CB-*/
// A           )+	       FED-CB-*/A
// (                       FED-CB-*/A+

// *Condition:-
// 1.Symbole->stack->Big/Same->As It Is
// 1.Symbole->stack->Small->Stack To Exp