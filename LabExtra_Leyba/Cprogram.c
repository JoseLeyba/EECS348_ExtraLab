/*
 * Cprogram.c
 *
 *  Created on: February 19, 2023
 *      Author: jlol2
 *      Sorts through preferences of programmers and Departments to find the best fits
 */
#include <stdio.h>
int main()
{
	int department1[5]; //Starts all the arrays of preference
	int department2[5];
	int department3[5];
	int department4[5];
	int department5[5];
	int programmer1[5];
	int programmer2[5];
	int programmer3[5];
	int programmer4[5];
	int programmer5[5];
    FILE* inputfile; // Looks at our input file
    int i = 0; //Creates number to iterate through the files
    if (inputfile = fopen("inputfile.txt", "r")) //Opens the inputfile in reading mode
    {
    	for (i = 0; i < 10 ;i++ ) //iterates through every line of the file
    	{
    		if (i < 5) // for the first half
    		{
    			fscanf(inputfile,"%d %d %d %d %d", &department1[i],&department2[i],&department3[i],&department4[i],&department5[i]); //Save the information into the departments
    		}
    		else //For the second half
    		{
    			fscanf(inputfile,"%d %d %d %d %d", &programmer1[i-5],&programmer2[i-5],&programmer3[i-5],&programmer4[i-5],&programmer5[i-5]); //Save the information for the programmers
    		}
    	}
        fclose(inputfile); //Closes files to avoid problems
    	department1[i/2] = '\0'; //Saves the last position of the each department array as \0
    	department2[i/2] = '\0';
    	department3[i/2] = '\0';
    	department4[i/2] = '\0';
    	department5[i/2] = '\0';
    	department1[i/2] = '\0'; //Saves the last position of the each programmer array as \0
    	department2[i/2] = '\0';
    	department3[i/2] = '\0';
    	department4[i/2] = '\0';
    	department5[i/2] = '\0';
    	int departments[5][5] = {*department1,*department2,*department3,*department4,*department5};
    	int programmers[5][5] = {*programmer1,*programmer2,*programmer3,*programmer4,*programmer5};
    	printf("%d",programmers[1][4]);


    	//From here on I have a loop that checks with each department if they have the same preference, if they don't then print at the end what number of programmer the department got
    	for (int x = 0; x < 5; x++)
    	{
    		if (department1[x] != department2[x])
    		{
    			if (department1[x] != department3[x])
    			{
    				if (department1[x] != department4[x])
    				{
    					if (department1[x] != department5[x])
    					{
    						printf("Department #1 will get Programmer #%d",department1[x]);
    						break;
    					}
    					else
    					{
    						for (int i = 0; i < 5; i++)
    						{
    							if (programmers[x][i] == 1)
    							{
    								printf("Department #1 will get Programmer #%d",department1[x]);
    							}
    							else if(programmers[x][i] == 5)
    							{
    								break;
    							}
    						}
    					}
    				}
    			}
    		}
			else
			{
				for (int i = 0; i < 5; i++)
				{
					if (programmers[x][i] == 1)
					{
						printf("Department #1 will get Programmer #%d",department1[x]);
					}
					else if(programmers[x][i] == 2)
					{
						break;
					}
				}
			}

    	}




    } //Nothing happens if you don't open the file
}


