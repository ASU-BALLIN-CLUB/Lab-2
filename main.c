// Group members: Sean Slamka, Shangxin (James) Wang, Aydin Balci

#include <stdio.h>
#include "common.h"


int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    
    init_lister(argv[1], source_name[MAX_FILE_NAME_LENGTH], date);	// passes argv1 into init_lister
    
    
    while (line_count < MAX_LINES_PER_PAGE)	// Main while loop for calling get_source_line
    {
    	get_source_line(argv[1], source_name, date);
    	
    	line_count++;	// Increments the line count.
    	
    }
    
    return 0;
}

FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;
    std::fstream fs;
    fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    
    source_name = source_file_name[];
    return file;
}


BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    
    if (fgets (source_buffer, MAX_SOURCE_LINE_LENGTH, src_file )!=NULL) //This is missing a condition
    {
	int n;
	n=sprintf(print_buffer, "%d."+source_buffer, line_number);
	line_number++;
	print_line(print_buffer, src_name[], todays_date[]);
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}// half/almost completed Get source line function...


static void print_page_header(char source_name[], char date[]);


void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    // sets instance variables for the print_line function,
    // save_ch for the characters to be printed,
    // save_chp pointer for the extra rounded off characters.
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
    
    if (++line_count > MAX_LINES_PER_PAGE)
    {
        print_page_header(source_name_to_print[], date_to_print[]);
    }
    
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
    {
    	// Truncates the string to the max length
        save_ch = line.substr(0, MAX_PRINT_LINE_LENGTH)
        
        // printf(print out the save_ch) not finished yet.
        
        // Sets save_chp to the extra characters past the max length.
        save_chp = line.substr(MAX_PRINT_LINE_LENGTH, 99999); 
        
    }
    if (save_chp != NULL)
    {
        // Print out the rest of the extra characters
        // printf(save_chp)
    }
    /* Missing Code Here */
    if (save_chp = NULL)
    {
    	// Continue on with code at this point?
        /* Missing Code Here */
    }
}// Half of Print_line function so far...


static void print_page_header(char source_name[], char date[])
{
    static int page_number = 0;
    
    /* Missing Code Here */
}


