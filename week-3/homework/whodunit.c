#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./whodunit clue.bmp verdict.bmp\n");
        return 1;
    }

    FILE *clue_ptr = fopen("clue.bmp", "r");
    if (clue_ptr == NULL)
    {
        printf("Could not open %s\n", "clue.bmp");
        return 2;
    }

    FILE *verdict_ptr = fopen("verdict.bmp", "w");
    if (verdict_ptr == NULL)
    {
        fclose(clue_ptr);
        fprintf(stderr, "Could not create %s\n", "verdict.bmp");
        return 3;
    }

    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, clue_ptr);

    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, clue_ptr);

    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(verdict_ptr);
        fclose(clue_ptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, verdict_ptr);

    fwrite(&bf, sizeof(BITMAPINFOHEADER), 1, verdict_ptr);

    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        for (int j = 0; j < bi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from clue.bmp
            fread(&triple, sizeof(RGBTRIPLE), 1, clue_ptr);

           if (triple.rgbtRed > 235)
            {
                triple.rgbtBlue = 0x30;
                triple.rgbtGreen = 0x30;
                triple.rgbtRed = 0x10;
            }

             fwrite(&triple, sizeof(RGBTRIPLE), 1, verdict_ptr);
            }
        fseek(clue_ptr, padding, SEEK_CUR);

        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, verdict_ptr);
        }
       }

    fclose(clue_ptr);

    fclose(verdict_ptr);

    return 0;
}
