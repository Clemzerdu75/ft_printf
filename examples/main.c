#include "./../inc/libft.h"
#include "stdio.h"

int     main(void) {

    printf("\e[1;31m%s\e[m", "\nSIMPLE TEST\n\n");
   
    printf("\e[1;36m%s\e[m", "\n%d of 18\n");
    printf("PRINTF : %d\n",  18);
    ft_printf("FT_PRINTF : %d\n\n" ,  18);

    printf("\e[1;36m%s\e[m", "\n%lx of 4294967296\n");
    printf("PRINTF : %lx\n", 4294967296);
    ft_printf("FT_PRINTF : %lx\n\n", 4294967296);

    printf("\e[1;36m%s\e[m", "\n%-10s of 'this'\n");
    printf("PRINTF : %-10s is a string\n", "this");
    ft_printf("FT_PRINTF : %-10s is a string\n\n", "this");

    printf("\e[1;36m%s\e[m", "\n%+10.5d of 4242\n");
    printf( "PRINTF : %+10.5d\n", 4242);
    printf( "FT_PRINTF : %+10.5d\n\n", 4242);

    printf("\e[1;36m%s\e[m", "\n%f of 1.2345\n");
    printf( "PRINTF : %f\n", 1.2345);
    printf( "FT_PRINTF : %f\n\n", 1.2345);


    printf("\e[1;31m%s\e[m", "\n\nUNDEFINED BEHAVIOR TEST\n\n");

    printf("\e[1;36m%s\e[m", "\n%-0+5d of 42\n");

    printf("PRINTF: %-0+5d\n", 42);
    ft_printf("FT_PRINTF: %-0+5d\n", 42);

    printf("\e[1;36m%s\e[m", "\n%05%\n");

    printf("PRINTF: %05%\n");
    ft_printf("FT_PRINTF: %05%\n");


    printf("\e[1;36m%s\e[m", "\n%-010s of 'this'\n");

    printf("PRINTF: %-010s is a string\n", "this");
    ft_printf("FT_PRINTF: %-010s is a string\n", "this");
    
    ft_printf("\n\n");
    return (0);
}

