
// vrodux.h | lit : 1.0.0 - Fully open source.

// S_ : standard
// M_ : misc
// B_ : background
// HIB_ : high intensity background
// U_ : underline
// RC_ : regular color
// BC_ : bold color
// HI_ : high intensity
// BHI_ : bold high intensity

#define S_AB "\a" // audible bell
#define S_BS "\b" // back space
#define S_EC "\e" // escape character
#define S_FF "\f" // form feed
#define S_NL "\n" // new line
#define S_CR "\r" // carriage return
#define S_HT "\t" // horizontal tab
#define S_VT "\v" // vertical tab

#define S_BL "\\" // back slash

#define S_SQ "\'" // single quotation mark
#define S_DQ "\"" // double quotation mark

#define S_QM "\?" // question mark

#define S_NV "\0" // null value

#define S_OV "\nnn" // octal value
#define S_HV "\xhh" // hexadecimal value

#define M_RE "\033[0m" // reset

#define RC_BLK "\033[0;30m" // black
#define RC_RE "\033[0;31m" // red
#define RC_GR "\033[0;32m" // green
#define RC_YE "\033[0;33m" // yellow
#define RC_BL "\033[0;34m" // blue
#define RC_PU "\033[0;35m" // purple
#define RC_CY "\033[0;36m" // cyan
#define RC_WH "\033[0;37m" // white

#define BC_BLK "\033[1;30m" // bold black
#define BC_RE "\033[1;31m" // bold red
#define BC_GR "\033[1;32m" // bold green
#define BC_YE "\033[1;33m" // bold yellow
#define BC_BL "\033[1;34m" // bold blue
#define BC_PU "\033[1;35m" // bold purple
#define BC_CY "\033[1;36m" // bold cyan
#define BC_WH "\033[1;37m" // bold white

#define HI_BLK "\033[0;90m" // high intensity black
#define HI_RE "\033[0;91m" // high intensity red
#define HI_GR "\033[0;92m" // high intensity green
#define HI_YE "\033[0;93m" // high intensity yellow
#define HI_BL "\033[0;94m" // high intensity blue
#define HI_PU "\033[0;95m" // high intensity purple
#define HI_CY "\033[0;96m" // high intensity cyan
#define HI_WH "\033[0;97m" // high intensity white

#define BHI_RE "\033[1;91m" // bold high intensity black
#define BHI_RE "\033[1;91m" // bold high intensity red
#define BHI_GR "\033[1;92m" // bold high intensity green
#define BHI_YE "\033[1;93m" // bold high intensity yellow
#define BHI_BL "\033[1;94m" // bold high intensity blue
#define BHI_PU "\033[1;95m" // bold high intensity purple
#define BHI_CY "\033[1;96m" // bold high intensity cyan
#define BHI_WH "\033[1;97m" // bold high intensity white

#define U_BLK "\033[4;30m" // black underline
#define U_RE "\033[4;31m" // red underline
#define U_GR "\033[4;32m" // green underline
#define U_YE "\033[4;33m" // yellow underline
#define U_BL "\033[4;34m" // blue underline
#define U_PU "\033[4;35m" // purple underline
#define U_CY "\033[4;36m" // cyan underline
#define U_WH "\033[4;37m" // white underline

#define B_BLK "\033[40m" // black background
#define B_RE "\033[41m" // red background
#define B_GR "\033[42m" // green background
#define B_YE "\033[43m" // yellow background
#define B_BL "\033[44m" // blue background
#define B_PU "\033[45m" // purple background
#define B_CY "\033[46m" // cyan background
#define B_WH "\033[47m" // white background

#define HIB_BLK "\033[0;100m" // high intensity black backround
#define HIB_RE "\033[0;101m" // high intensity red background
#define HIB_GR "\033[0;102m" // high intensity green background
#define HIB_YE "\033[0;103m" // high intensity yellow background
#define HIB_BL "\033[0;104m" // high intensity blue background
#define HIB_PU "\033[0;105m" // high intensity purple background
#define HIB_CY "\033[0;106m" // high intensity cyan background
#define HIB_WH "\033[0;107m" // high intensity white background
