#include <stdio.h>
#include <math.h> // floor

struct Pixel {
    unsigned char B;//byte
    unsigned char G;//byte
    unsigned char R;//byte
};

int main(){
    struct Pixel pixel,pixel2;
    int WPX, HPX, BPP, NCP, NIC, PAL,lap,offset,i;
    unsigned char byte;
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    FILE * imagem;
    FILE * imagem2;
    imagem = fopen("images.bmp", "r");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    printf("tamanho do arquivo (bytes): %u\n", dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    //fseek(imagem,4,SEEK_CUR);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Informacao reservada: %08X\n", dword);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset: %u\n", dword);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabeçalho: %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Largura da imagem (pixels): %u\n", dword);
    WPX = dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Altura da imagem (pixels): %u\n", dword);
    HPX = dword;
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    printf("Bits por pixel: %u\n", word);
    BPP = word;
    //dword	30-33	Método de compressão
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Método de compressão: %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução horizontal: %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução vertical: %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? 1 << BPP : dword; // "1 << BPP" equivale a "pow(2,BPP)"
    printf("Numero de cores na paleta: %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    NIC = (dword == 0) ? NCP : dword;
    printf("Numero de cores importantes: %u\n", NIC);
    //Tamanho da linha da array de pixels (bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes) : %u\n", PAL);

    imagem2 = fopen("novosapo.bmp","w");
    rewind(imagem);
    for(i = 0; i < offset; i++){
        fread(&byte, sizeof(byte),1,imagem);
        fwrite(&byte, sizeof(byte),1,imagem2);
    }
    printf("\n======Pixels======\n");
    lap = 0;
    while(!feof(imagem)){
    //leia a informacao do pixel (canais R, G e B)
    if(fread(&pixel, sizeof(pixel), 1, imagem)){
        pixel2.R = pixel.G;
        pixel2.G = pixel.R;
        pixel2.B = pixel.B;
        fwrite(&pixel2, sizeof(pixel2),1,imagem2);
    }
    lap = lap + 3;
    if((lap + 3) > PAL){
        fseek(imagem, (PAL - lap), SEEK_CUR);
        for(i = 0; i < PAL - lap; i ++)
            fwrite(&byte, sizeof(byte),1,imagem2);
        lap = 0;
        }
    }
    fclose(imagem2);
    fclose(imagem);
    return 0;
}
