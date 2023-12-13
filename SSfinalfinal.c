#include <stdio.h>

int truthTables[10][4] = 
{
    {0, 0, 0, 0}, 
    {0, 0, 0, 1}, 
    {0, 0, 1, 0}, 
    {0, 0, 1, 1}, 
    {0, 1, 0, 0}, 
    {0, 1, 0, 1}, 
    {0, 1, 1, 0}, 
    {0, 1, 1, 1},
    {1, 0, 0, 0},
    {1, 0, 0, 1}
};

char segments[10][7][6] = 
{
    {
        "*****",
        "*   *",
        "*   *",
        "*   *",
        "*   *",
        "*   *",
        "*****"
    },
    {
        "    *",
        "    *",
        "    *",
        "    *",
        "    *",
        "    *",
        "    *"
    },
    {
        "*****",
        "    *",
        "    *",
        "*****",
        "*    ",
        "*    ",
        "*****"
    },
    {
        "*****",
        "    *",
        "    *",
        "*****",
        "    *",
        "    *",
        "*****"
    },
    {
        "*   *",
        "*   *",
        "*   *",
        "*****",
        "    *",
        "    *",
        "    *"
    },
    {
        "*****",
        "*    ",
        "*    ",
        "*****",
        "    *",
        "    *",
        "*****"
    },
    {
        "*****",
        "*    ",
        "*    ",
        "*****",
        "*   *",
        "*   *",
        "*****"
    },
    {
        "*****",
        "    *",
        "    *",
        "    *",
        "    *",
        "    *",
        "    *"
    },
    {
        "*****",
        "*   *",
        "*   *",
        "*****",
        "*   *",
        "*   *",
        "*****"
    },
    {
        "*****",
        "*   *",
        "*   *",
        "*****",
        "    *",
        "    *",
        "*****"
    }
};

void TruthTable(int num) 
{
    printf("Truth table untuk angka %d:\n", num);
    printf("| X | X | X | X |\n");
    printf("| %d | %d | %d | %d |\n", truthTables[num][0], truthTables[num][1], truthTables[num][2], truthTables[num][3]);
    printf("\n");
}

void SevenSegment(int num) 
{
    printf("Seven segment display untuk angka %d:\n", num);
    for (int i = 0; i < 7; i++) 
    {
        printf("%s\n", segments[num][i]);
    }
    printf("\n");
}

int main() 
{
    int input;

    printf("Masukkan angka: ");
    scanf("%d", &input);

    if (input >= 0 && input <= 9) 
    {
        TruthTable(input);
        SevenSegment(input);
    } 
    
    else 
    
    {
        printf("Tolong masukkan angka dari 0 sampai 9.\n");
    }

    return 0;

    //thanks ジ
}
