#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
 
int main(void)
{
    wchar_t c = L'\u3000'; // Ideographic space ('　')
    printf("in the default locale, iswblank(%#x) = %d\n", c, !!iswblank(c));
    setlocale(LC_ALL, "en_US.utf8");
    printf("in Unicode locale, iswblank(%#x) = %d\n", c, !!iswblank(c));
    printf("printf(%%c):'%c'\n", c);
    printf("printf(%%lc):'%lc'\n", c);
    wprintf(L"wprintf(%%c):'%c'\n", c);
    wprintf(L"wprintf(%%lc):'%lc'\n", c);
    printf("%c%c%c%c%c_     v\n", c, c, c, c, c);
    printf("%lc%lc%lc%lc%lc_     v\n", c, c, c, c, c);
    wprintf(L"%c%c%c%c%c_     v\n", c, c, c, c, c);
    wprintf(L"%lc%lc%lc%lc%lc_     v\n", c, c, c, c, c);
    printf("　　　　　_     v\n");
    printf("\u3000\u3000\u3000\u3000\u3000_     v\n");
}

//OUTPUT:
/*
in the default locale, iswblank(0x3000) = 1
in Unicode locale, iswblank(0x3000) = 1
printf(%c):''
printf(%lc):''
wprintf(%c):''
wprintf(%lc):''
_     v
_     v
_     v
_     v
　　　　　_     v
　　　　　_     v

*/