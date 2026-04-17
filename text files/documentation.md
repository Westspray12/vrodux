**Families : S_,M_,B_,HIB_,U_,RC_,BC_,HI_,BHI_,R_**

*R_ is for plus version only.*
*See usage at the bottom of the file.*

S_ :

- S_AB : audible bell
- S_BS : back space
- S_EC : escape character
- S_FF : form feed
- S_NL : new line
- S_CR : carriage return
- S_HT : horizontal tab
- S_VT : vertical tab
- S_BL : back slash
- S_SQ : single quotation mark
- S_DQ : double quotation mark
- S_QM : question mark
- S_NV : null value
- S_OV : octal value
- S_HV : hexadecimal value

M_ :

- M_RE : reset
- M_CS : clear screen

RC_ :

- RC_BLK : black
- RC_RE : red
- RC_GR : green
- RC_YE : yellow
- RC_BL : blue
- RC_PU : purple
- RC_CY : cyan
- RC_WH : white

BC_ :

- BC_BLK : bold black
- BC_RE : bold red
- BC_GR : bold green
- BC_YE : bold yellow
- BC_BL : bold blue
- BC_PU : bold purple
- BC_CY : bold cyan
- BC_WH : bold white

HI_ :

- HI_BLK : high intensity black
- HI_RE : high intensity red
- HI_GR : high intensity green
- HI_YE : high intensity yellow
- HI_BL : high intensity blue
- HI_PU : high intensity purple
- HI_CY : high intensity cyan
- HI_WH : high intensity white

BHI_ :

- BHI_BLK : bold high intensity black
- BHI_RE : bold high intensity red
- BHI_GR : bold high intensity green
- BHI_YE : bold high intensity yellow
- BHI_BL : bold high intensity blue
- BHI_PU : bold high intensity purple
- BHI_CY : bold high intensity cyan
- BHI_WH : bold high intensity white

U_ :

- U_BLK : underline black
- U_RE : underline red
- U_GR : underline green
- U_YE : underline yellow
- U_BL : underline blue
- U_PU : underline purple
- U_CY : underline cyan
- U_WH : underline white

B_ :

- B_BLK : background black
- B_RE : background red
- B_GR : background green
- B_YE : background yellow
- B_BL : background blue
- B_PU : background purple
- B_CY : background cyan
- B_WH : background white
 
HIB_ :

- HIB_BLK : high intensity background black
- HIB_RE : high intensity background red
- HIB_GR : high intensity background green
- HIB_YE : high intensity background yellow
- HIB_BL : high intensity background blue
- HIB_PU : high intensity background purple
- HIB_CY : high intensity background cyan
- HIB_WH : high intensity background white

R_ :

- R_CS : clear screen
- R_MS : move cursor

working example for C :
```C
#include <stdio.h>
#include "vrodux.h"

int main()
{
 printf("%s blue! %s %s", RC_BL, M_RE, S_NL);
}
```


working example for C++ :
```C++
#include <iostream>
#include "vrodux.h"

int main()
{
  std::cout << HI_PU << "Wow!" << M_RE << S_NL;
}
```
---
version : 1.0.0

note : Some colors may be innacurate depending on the OS/compiler.
