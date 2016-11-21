#include <stdio.h>
#include <math.h>
#define RECEBE_RGB(RGB) \
    ({ printf("Entre com R: "); \
       scanf("%d", &RGB.R); \
       printf("Entre com G: "); \
       scanf("%d", &RGB.G); \
       printf("Entre com B: "); \
       scanf("%d", &RGB.B); })

#define CONVERSAO(RGB,YCbCr,conversao) \
    ({conversao.Y = round(0.299*RGB.R + 0.587*RGB.G + 0.114*RGB.B); \
      conversao.Cb = round(-0.168736*RGB.R - 0.331264*RGB.G + 0.5*RGB.B); \
      conversao.Cr = round(0.5*RGB.R - 0.418688*RGB.G - 0.081312*RGB.B); })

#define MOSTRA(YCbCr) \
    ({ printf("Numeros em YCbCr : %g; %g; %g\n", YCbCr.Y, YCbCr.Cb, YCbCr.Cr);})

struct RGB{
    int R;
    int G;
    int B;
};
struct YCbCr{
    float Y;
    float Cb;
    float Cr;
};
int main(){
    struct RGB RGB;
    struct YCbCr converte;
    RECEBE_RGB(RGB);
    CONVERSAO(RGB,YCbCr,converte);
    MOSTRA(converte);
    return 0;
}
