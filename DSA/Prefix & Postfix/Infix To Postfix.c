// (A+(B-C)*(D-E)/F)->INFIX TO POSTFIX

// Symbole      Stack       Exp
// (           (
// A           (           A
// +           (+          A
// (           (+(         A
// B           (+(         AB
// -           (+(-        AB
// C           (+(-        ABC
// )           (+          ABC-
// *           (*          ABC-+
// C           (*(         ABC-+
// D           (*(         ABC-+D
// -           (*(-        ABC-+D
// E           (*(-        ABC-+DE
// )           (*          ABC-+DE-
// /           (/          ABC-+DE-*
// F                       ABC-+DE-*F/

// *Condition:-
// 1.Symbole->stack->Big->As It Is
// 1.Symbole->stack->Same/Small->Stack To Exp