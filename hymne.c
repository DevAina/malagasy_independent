#include <stdio.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

void playsound(void);

void    hymne(void)
{
    printf(RED "\033[1mRy tanindrazanay malala\n" RESET);
    printf("Ry Tanindrazanay malala ô\n");
    printf("Ry Madagasikara soa.\n");
    printf("Ny fitiavanay anao tsy miala,\n");
    printf("Fa ho anao ho anao doria tokoa.\n");
    printf(MAGENTA "Refrain\n" RESET);
    printf("\tTahionao ry Zanahary\n");
    printf("\t'Ty Nosindrazanay ity\n");
    printf("\tHiadana sy ho finaritra\n");
    printf("\tHe sambatra tokoa izahay.\n");
    printf("Ry Tanindrazanay malala ô\n");
    printf("Irinay mba hanompoana anao\n");
    printf("Ny tena sy fo fanahy anananay\n");
    printf("‘zay sarobidy sy mendrika tokoa.\n");
    printf(MAGENTA "Refrain\n" RESET);
    printf("Ry Tanindrazanay malala ô\n");
    printf("Irinay mba hitahiana anao,\n");
    printf("Ka ilay Nahary izao tontolo izao\n");
    printf("No fototra ijoroan'ny satanao\n");
    printf(MAGENTA "Refrain\n" RESET);
    playsound();
}