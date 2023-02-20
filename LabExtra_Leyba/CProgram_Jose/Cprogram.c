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
    	int used [5];
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
    						used[0] = department1[x];
    						break;
    					}
    					else
    					{
    		    			switch(x)
    		    			{
    		    				case(0):
    		    				   for (int y = 0; y < 5; y++)
    		    				   {
    		    					   if (programmer1[y] == 1)
    		    					   {
    		    						   printf("Department #1 will get Programmer #%d",department1[x]);
    		    					   	   goto loop2;
    		    					   }
    		    					   if (programmer1[y] == 2)
    		    						   break;
    		    				   }
    		    				break;

    		    				case(1):
    		    				  for (int y = 0; y < 5; y++)
    		    				  {
    		    				    if (programmer2[y] == 1)
    		    				    {
    		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    		    				    	goto loop2;
    		    				    }
    		    				    if (programmer2[y] == 5)
    		    				    break;
    		    				  }
    		    				break;
    		    				case(2):
    		    				   for (int y = 0; y < 5; y++)
    		    				   {
    		    					   if (programmer3[y] == 1)
    		    					   {
    		    						   printf("Department #1 will get Programmer #%d",department1[x]);
    		    						   used[0] = department1[x];
    		    					   	   goto loop2;
    		    					   }
    		    					   if (programmer3[y] == 5)
    		    						   break;
    		    				   }
    		    				break;

    		    				case(3):
    		    				  for (int y = 0; y < 5; y++)
    		    				  {
    		    				    if (programmer4[y] == 1)
    		    				    {
    		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    		    				    	used[0] = department1[x];
    		    				    	goto loop2;
    		    				    }
    		    				    if (programmer4[y] == 5)
    		    				    break;
    		    				  }
    		    				break;
    		    				case(4):
    		    				  for (int y = 0; y < 5; y++)
    		    				  {
    		    				    if (programmer5[y] == 1)
    		    				    {
    		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    		    				    	used[0] = department1[x];
    		    				    	goto loop2;
    		    				    }
    		    				    if (programmer5[y] == 5)
    		    				    break;
    		    				  }
    		    				break;
    		    			}
    					}
    				}
					else
					{
		    			switch(x)
		    			{
		    				case(0):
		    				   for (int y = 0; y < 5; y++)
		    				   {
		    					   if (programmer1[y] == 1)
		    					   {
		    						   printf("Department #1 will get Programmer #%d",department1[x]);
		    						   used[0] = department1[x];
		    					   	   goto loop2;
		    					   }
		    					   if (programmer1[y] == 4)
		    						   break;
		    				   }
		    				break;

		    				case(1):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer2[y] == 1)
		    				    {
		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
		    				    	used[0] = department1[x];
		    				    	goto loop2;
		    				    }
		    				    if (programmer2[y] == 4)
		    				    break;
		    				  }
		    				break;
		    				case(2):
		    				   for (int y = 0; y < 5; y++)
		    				   {
		    					   if (programmer3[y] == 1)
		    					   {
		    						   printf("Department #1 will get Programmer #%d",department1[x]);
		    						   used[0] = department1[x];
		    					   	   goto loop2;
		    					   }
		    					   if (programmer3[y] == 4)
		    						   break;
		    				   }
		    				break;

		    				case(3):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer4[y] == 1)
		    				    {
		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
		    				    	used[0] = department1[x];
		    				    	goto loop2;
		    				    }
		    				    if (programmer4[y] == 4)
		    				    break;
		    				  }
		    				break;
		    				case(4):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer5[y] == 1)
		    				    {
		    				    	printf("Department #1 will get Programmer #%d",department1[x]);
		    				    	used[0] = department1[x];
		    				    	goto loop2;
		    				    }
		    				    if (programmer5[y] == 4)
		    				    break;
		    				  }
		    				break;
		    			}
					}
    			}
				else
				{
	    			switch(x)
	    			{
	    				case(0):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer1[y] == 1)
	    					   {
	    						   printf("Department #1 will get Programmer #%d",department1[x]);
	    						   used[0] = department1[x];
	    					   	   goto loop2;
	    					   }
	    					   if (programmer1[y] == 3)
	    						   break;
	    				   }
	    				break;

	    				case(1):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer2[y] == 1)
	    				    {
	    				    	printf("Department #1 will get Programmer #%d",department1[x]);
	    				    	used[0] = department1[x];
	    				    	goto loop2;
	    				    }
	    				    if (programmer2[y] == 3)
	    				    break;
	    				  }
	    				break;
	    				case(2):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer3[y] == 1)
	    					   {
	    						   printf("Department #1 will get Programmer #%d",department1[x]);
	    						   used[0] = department1[x];
	    					   	   goto loop2;
	    					   }
	    					   if (programmer3[y] == 3)
	    						   break;
	    				   }
	    				break;

	    				case(3):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer4[y] == 1)
	    				    {
	    				    	printf("Department #1 will get Programmer #%d",department1[x]);
	    				    	used[0] = department1[x];
	    				    	goto loop2;
	    				    }
	    				    if (programmer4[y] == 3)
	    				    break;
	    				  }
	    				break;
	    				case(4):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer5[y] == 1)
	    				    {
	    				    	printf("Department #1 will get Programmer #%d",department1[x]);
	    				    	used[0] = department1[x];
	    				    	goto loop2;
	    				    }
	    				    if (programmer5[y] == 3)
	    				    break;
	    				  }
	    				break;
	    			}
				}
    		}
    		else
    		{
    			switch(x)
    			{
    				case(0):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer1[y] == 1)
    					   {
    						   printf("Department #1 will get Programmer #%d",department1[x]);
    						   used[0] = department1[x];
    					   	   goto loop2;
    					   }
    					   if (programmer1[y] == 2)
    						   break;
    				   }
    				break;

    				case(1):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer2[y] == 1)
    				    {
    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    				    	used[0] = department1[x];
    				    	goto loop2;
    				    }
    				    if (programmer2[y] == 2)
    				    break;
    				  }
    				break;
    				case(2):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer3[y] == 1)
    					   {
    						   printf("Department #1 will get Programmer #%d",department1[x]);
    						   used[0] = department1[x];
    					   	   goto loop2;
    					   }
    					   if (programmer3[y] == 2)
    						   break;
    				   }
    				break;

    				case(3):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer4[y] == 1)
    				    {
    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    				    	used[0] = department1[x];
    				    	goto loop2;
    				    }
    				    if (programmer4[y] == 2)
    				    break;
    				  }
    				break;
    				case(4):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer5[y] == 1)
    				    {
    				    	printf("Department #1 will get Programmer #%d",department1[x]);
    				    	used[0] = department1[x];
    				    	goto loop2;
    				    }
    				    if (programmer5[y] == 2)
    				    break;
    				  }
    				break;
    			}
    		}
    	}


    	loop2: printf("\n");
    	for (int x = 0; x < 5; x++)
    	{
    		for (int y = 0; y < 2; y++)
    		{
    			if (used[y] == department2[x])
    			{
    				x++;
    				break;
    			}
    		}
    		if (department2[x] != department3[x])
    		{
    			if (department2[x] != department4[x])
    			{
    				if (department2[x] != department5[x])
    				{
    					printf("Department #2 will get Programmer #%d", department2[x]);
    					used[1] = department2[x];
    					break;
    				}
					else
					{
		    			switch(x)
		    			{
		    				case(0):
		    				   for (int y = 0; y < 5; y++)
		    				   {
		    					   if (programmer1[y] == 2)
		    					   {
		    						   printf("Department #2 will get Programmer #%d",department2[x]);
		    						   used[1] = department2[x];
		    					   	   goto loop3;
		    					   }
		    					   if (programmer1[y] == 5)
		    						   break;
		    				   }
		    				break;

		    				case(1):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer2[y] == 2)
		    				    {
		    				    	printf("Department #2 will get Programmer #%d",department2[x]);
		    				    	used[1] = department2[x];
		    				    	goto loop3;
		    				    }
		    				    if (programmer2[y] == 5)
		    				    break;
		    				  }
		    				break;
		    				case(2):
		    				   for (int y = 0; y < 5; y++)
		    				   {
		    					   if (programmer3[y] == 2)
		    					   {
		    						   printf("Department #2 will get Programmer #%d",department2[x]);
		    						   used[1] = department2[x];
		    					   	   goto loop3;
		    					   }
		    					   if (programmer3[y] == 5)
		    						   break;
		    				   }
		    				break;

		    				case(3):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer4[y] == 2)
		    				    {
		    				    	printf("Department #2 will get Programmer #%d",department2[x]);
		    				    	used[1] = department2[x];
		    				    	goto loop3;
		    				    }
		    				    if (programmer4[y] == 5)
		    				    break;
		    				  }
		    				break;
		    				case(4):
		    				  for (int y = 0; y < 5; y++)
		    				  {
		    				    if (programmer5[y] == 2)
		    				    {
		    				    	printf("Department #2 will get Programmer #%d",department2[x]);
		    				    	used[1] = department2[x];
		    				    	goto loop3;
		    				    }
		    				    if (programmer5[y] == 5)
		    				    break;
		    				  }
		    				break;
		    			}
					}
    			}
				else
				{
	    			switch(x)
	    			{
	    				case(0):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer1[y] == 2)
	    					   {
	    						   printf("Department #2 will get Programmer #%d",department2[x]);
	    						   used[1] = department2[x];
	    					   	   goto loop3;
	    					   }
	    					   if (programmer1[y] == 4)
	    						   break;
	    				   }
	    				break;

	    				case(1):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer2[y] == 2)
	    				    {
	    				    	printf("Department #2 will get Programmer #%d",department2[x]);
	    				    	used[1] = department2[x];
	    				    	goto loop3;
	    				    }
	    				    if (programmer2[y] == 4)
	    				    break;
	    				  }
	    				break;
	    				case(2):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer3[y] == 2)
	    					   {
	    						   printf("Department #2 will get Programmer #%d",department2[x]);
	    						   used[1] = department2[x];
	    					   	   goto loop3;
	    					   }
	    					   if (programmer3[y] == 4)
	    						   break;
	    				   }
	    				break;

	    				case(3):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer4[y] == 2)
	    				    {
	    				    	printf("Department #2 will get Programmer #%d",department2[x]);
	    				    	used[1] = department2[x];
	    				    	goto loop3;
	    				    }
	    				    if (programmer4[y] == 4)
	    				    break;
	    				  }
	    				break;
	    				case(4):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer5[y] == 2)
	    				    {
	    				    	printf("Department #2 will get Programmer #%d",department2[x]);
	    				    	used[1] = department2[x];
	    				    	goto loop3;
	    				    }
	    				    if (programmer5[y] == 4)
	    				    break;
	    				  }
	    				break;
	    			}
				}
    		}
    		else
    		{
    			switch(x)
    			{
    				case(0):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer1[y] == 2)
    					   {
    						   printf("Department #2 will get Programmer #%d",department2[x]);
    						   used[1] = department2[x];
    					   	   goto loop3;
    					   }
    					   if (programmer1[y] == 3)
    						   break;
    				   }
    				break;

    				case(1):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer2[y] == 2)
    				    {
    				    	printf("Department #2 will get Programmer #%d",department2[x]);
    				    	used[1] = department2[x];
    				    	goto loop3;
    				    }
    				    if (programmer2[y] == 3)
    				    break;
    				  }
    				break;
    				case(2):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer3[y] == 2)
    					   {
    						   printf("Department #2 will get Programmer #%d",department2[x]);
    						   used[1] = department2[x];
    					   	   goto loop3;
    					   }
    					   if (programmer3[y] == 3)
    						   break;
    				   }
    				break;

    				case(3):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer4[y] == 2)
    				    {
    				    	printf("Department #2 will get Programmer #%d",department2[x]);
    				    	used[1] = department2[x];
    				    	goto loop3;
    				    }
    				    if (programmer4[y] == 3)
    				    break;
    				  }
    				break;
    				case(4):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer5[y] == 2)
    				    {
    				    	printf("Department #2 will get Programmer #%d",department2[x]);
    				    	used[1] = department2[x];
    				    	goto loop3;
    				    }
    				    if (programmer5[y] == 3)
    				    break;
    				  }
    				break;
    			}
    		}
    	}

    	loop3:printf("\n");
    	for (int x = 0; x < 5; x++)
    	{
    		for (int y = 0; y < 3; y++)
    		{
    			if (used[y] == department3[x])
    			{
    				x++;
    				break;
    			}
    		}
    		if (department3[x] != department4[x])
    		{
    			if (department3[x] != department5[x])
    			{
					printf("Department #3 will get Programmer #%d",department3[x]);
					used[0] = department3[x];
					break;
    			}
				else
				{
	    			switch(x)
	    			{
	    				case(0):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer1[y] == 3)
	    					   {
	    						   printf("Department #3 will get Programmer #%d",department3[x]);
	    						   used[2] = department3[x];
	    					   	   goto loop4;
	    					   }
	    					   if (programmer1[y] == 5)
	    						   break;
	    				   }
	    				break;

	    				case(1):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer2[y] == 3)
	    				    {
	    				    	printf("Department #3 will get Programmer #%d",department3[x]);
	    				    	used[2] = department3[x];
	    				    	goto loop4;
	    				    }
	    				    if (programmer2[y] == 5)
	    				    break;
	    				  }
	    				break;
	    				case(2):
	    				   for (int y = 0; y < 5; y++)
	    				   {
	    					   if (programmer3[y] == 3)
	    					   {
	    						   printf("Department #3 will get Programmer #%d",department3[x]);
	    						   used[2] = department3[x];
	    					   	   goto loop4;
	    					   }
	    					   if (programmer3[y] == 5)
	    						   break;
	    				   }
	    				break;

	    				case(3):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer4[y] == 3)
	    				    {
	    				    	printf("Department #3 will get Programmer #%d",department3[x]);
	    				    	used[2] = department3[x];
	    				    	goto loop4;
	    				    }
	    				    if (programmer4[y] == 5)
	    				    break;
	    				  }
	    				break;
	    				case(4):
	    				  for (int y = 0; y < 5; y++)
	    				  {
	    				    if (programmer5[y] == 3)
	    				    {
	    				    	printf("Department #3 will get Programmer #%d",department3[x]);
	    				    	used[2] = department3[x];
	    				    	goto loop4;
	    				    }
	    				    if (programmer5[y] == 5)
	    				    break;
	    				  }
	    				break;
	    			}
				}
    		}
    		else
    		{
    			switch(x)
    			{
    				case(0):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer1[y] == 3)
    					   {
    						   printf("Department #3 will get Programmer #%d",department3[x]);
    						   used[2] = department3[x];
    					   	   goto loop4;
    					   }
    					   if (programmer1[y] == 4)
    						   break;
    				   }
    				break;

    				case(1):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer2[y] == 2)
    				    {
    				    	printf("Department #3 will get Programmer #%d",department3[x]);
    				    	used[2] = department3[x];
    				    	goto loop3;
    				    }
    				    if (programmer2[y] == 4)
    				    break;
    				  }
    				break;
    				case(2):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer3[y] == 3)
    					   {
    						   printf("Department #3 will get Programmer #%d",department3[x]);
    						   used[2] = department3[x];
    					   	   goto loop4;
    					   }
    					   if (programmer3[y] == 4)
    						   break;
    				   }
    				break;

    				case(3):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer4[y] == 3)
    				    {
    				    	printf("Department #3 will get Programmer #%d",department3[x]);
    				    	used[2] = department3[x];
    				    	goto loop4;
    				    }
    				    if (programmer4[y] == 4)
    				    break;
    				  }
    				break;
    				case(4):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer5[y] == 3)
    				    {
    				    	printf("Department #3 will get Programmer #%d",department3[x]);
    				    	used[2] = department3[x];
    				    	goto loop4;
    				    }
    				    if (programmer5[y] == 4)
    				    break;
    				  }
    				break;
    			}
    		}
    	}



    	loop4: printf("\n");
    	for (int x = 0; x < 5; x++)
    	{
    		for (int y = 0; y < 4; y++)
    		{
    			if (used[y] == department4[x])
    			{
    				x++;
    			}
    		}
    		if (department4[x] != department5[x])
    		{
    			printf("Department #4 will get Programmer #%d",department4[x]);
				used[3] = department4[x];
				break;
    		}
    		else
    		{
    			switch(x)
    			{
    				case(0):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer1[y] == 4)
    					   {
    						   printf("Department #4 will get Programmer #%d",department4[x]);
    						   used[3] = department4[x];
    					   	   goto loop5;
    					   }
    					   if (programmer1[y] == 5)
    						   break;
    				   }
    				break;

    				case(1):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer2[y] == 4)
    				    {
    				    	printf("Department #4 will get Programmer #%d",department4[x]);
    				    	used[3] = department4[x];
    				    	goto loop5;
    				    }
    				    if (programmer2[y] == 5)
    				    break;
    				  }
    				break;
    				case(2):
    				   for (int y = 0; y < 5; y++)
    				   {
    					   if (programmer3[y] == 4)
    					   {
    						   printf("Department #4 will get Programmer #%d",department4[x]);
    						   used[3] = department4[x];
    					   	   goto loop5;
    					   }
    					   if (programmer3[y] == 5)
    						   break;
    				   }
    				break;

    				case(3):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer4[y] == 4)
    				    {
    				    	printf("Department #4 will get Programmer #%d",department4[x]);
    				    	used[3] = department4[x];
    				    	goto loop5;
    				    }
    				    if (programmer4[y] == 5)
    				    break;
    				  }
    				break;
    				case(4):
    				  for (int y = 0; y < 5; y++)
    				  {
    				    if (programmer5[y] == 4)
    				    {
    				    	printf("Department #4 will get Programmer #%d",department4[x]);
    				    	used[3] = department4[x];
    				    	goto loop5;
    				    }
    				    if (programmer5[y] == 5)
    				    break;
    				  }
    				break;
    			}
    		}
    	}



    loop5: printf("\n");
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (used[y] == department5[x])
			{
				x++;
			}
		}
	printf("Department #5 will get Programmer #%d",department5[x]);
	break;
	}


    } //Nothing happens if you don't open the file
}


