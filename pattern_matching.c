/* C program to check the common set of occurences betwwen two text files */
/* Attribution CC-BY 4.0 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparison_Files(FILE *fp1, FILE *fp2)
    {
        //fetching string of characters from the files to the variables

        char ch1 = getc(fp1);
        char ch2 = getc(fp2);

        //score keeps track of number of erroes
        //pos keeps track of position of errors
        //lie keeps track of error line
        int score = 0, pos=0, line = 1;

        //iterate loop till enf of file
        while(ch1 != EOF && ch2 != EOF)
            {
                pos++;

                //if both variable encounters new line then line variable is incremented and pos variable is set to 0
                if(ch1 == ch2)
                {
                    score++;
                }
                // fetching character until end of file
                ch1 = getc(fp1);
                ch2 = getc(fp2);
            }
            return(score);
    }

    int main()
    {
        //opening both files in read only mode
        FILE *fp1 = fopen("Python_PL.txt","r");
        FILE *fp1 = fopen("Arbitrary_Doc.txt","r");
        int sc=0; //Score initialised to zero
        if (fp1 == NULL || fp2 == NULL)
        {
            printf("Error: Files not open");
            exit(0);
        }

        sc = comparison_Files(fp1,fp2); //calling the function for comparison of text files

        //closing both files
        fclose(fp1);
        fclose(fp2);
        printf("Score of A is: %d\n",sc);
        FILE *fp3 = fopen("Python_Snake.txt","r");
        FILE *fp4 = fopen("Arbitrary_Doc.txt","r");
        if (fp3 == NULL || fp4 == NULL)
        {
            printf("Error: Files not open");
            exit(0);
        }

        sc = comparison_Files(fp1,fp2); //calling the function for comparison of text files

        //closing both files
        fclose(fp3);
        fclose(fp4);
        printf("Score of B is: %d\n",sc);
        return 0;
    }
