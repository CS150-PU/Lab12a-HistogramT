//*****************************************************************************
// File:				main.cpp
// Author:			
// Date:				11/12/24
// Class:				CS 150-0X
// Assignment:	Lab 12
// Purpose:			Fill 2D Array with random characters, produce a histogram of
//							counts of capital letters, and write both 2D array and 
//							histogram to file
//*****************************************************************************

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLUMNS = 25;
const int LETTERS_IN_ALPHABET = 26;
const char SMALLEST_RANDOM_CHAR = 'A';
const char LARGEST_RANDOM_CHAR = 'z';

const char SMALLEST_HISTOGRAM_CHAR = 'A';
const char LARGEST_HISTOGRAM_CHAR = 'Z';
const char HISTOGRAM_CHARACTER = '*';

const string ARRAY_HEADING = "**** ORIGINAL RANDOM ARRAY ****\n";
const string HISTOGRAM_HEADING = "\n**** HISTOGRAM OF CAPITAL LETTERS ****\n";

void initArray (int array[], int size, int initValue);
void fillCharArray (char array[][MAX_COLUMNS], int numRows, int numCols,
  char lower, char upper);
void writeCharArrayToFile (const char array[][MAX_COLUMNS], int numRows,
  int numCols, ofstream& outFile);
void createHistogram (char array[][MAX_COLUMNS], int numRows, int numCols,
  int histogram[]);
void writeHistogramToFile (int histogram[], int size, ofstream& outFile);
char getCharacterInRange (char lowChar, char highChar);

/******************************************************************************
Function:     main

Description:	Driver

Parameters:   None

Returned:     Exit Status
******************************************************************************/

int main () {
  const string OUTPUT_FILE = "output.txt";
  const string LOWEST_MENU_WORD = "lowest";
  const string HIGHEST_MENU_WORD = "upper";
  const string FILE_OPEN_ERROR = "Cannot open output file.";
  const int RANDOM_SEED = 0;

  char charArray[MAX_ROWS][MAX_COLUMNS];
  int charCounts[LETTERS_IN_ALPHABET];

  char charLower, charUpper;

  ofstream outputFile;

  srand (RANDOM_SEED);

  outputFile.open (OUTPUT_FILE);

  if (outputFile.fail ()) {
    cout << FILE_OPEN_ERROR;
    exit (EXIT_FAILURE);
  }

  do {
    charLower = getCharacterInRange (SMALLEST_RANDOM_CHAR, LARGEST_RANDOM_CHAR);
    charUpper = getCharacterInRange (SMALLEST_RANDOM_CHAR, LARGEST_RANDOM_CHAR);
  } while (charLower > charUpper);

  fillCharArray (charArray, MAX_ROWS, MAX_COLUMNS, charLower, charUpper);
  writeCharArrayToFile (charArray, MAX_ROWS, MAX_COLUMNS, outputFile);
  createHistogram (charArray, MAX_ROWS, MAX_COLUMNS, charCounts);
  writeHistogramToFile (charCounts, LETTERS_IN_ALPHABET, outputFile);

  outputFile.close ();

  return EXIT_SUCCESS;
}

// TODO #1
/******************************************************************************
Function:			getCharacterInRange

Description:	Obtains a character between lowChar and highChar.
              Test to make sure that lowChar is <= highChar. If not,
              switch lowChar and highChar before asking for user input.

Parameters:	  lowOrHigh - string to specialize menu

Returned:			character in the range
******************************************************************************/

char getCharacterInRange (char lowChar, char highChar) {
  char characterInRange;

 

  return 0;
}

// TODO #2
/******************************************************************************
Function:			initArray

Description:  Initializes size element in the array to initValue

Parameters:   array     - an int array to be used for whatever reason
              size      - number of elements in the array
              initValue - value used to initialize each element to

Returned:			None
******************************************************************************/

void initArray (int array[], int size, int initValue) {

}

// TODO #3
/******************************************************************************
Function:			fillCharArray

Description:  This function will initialize a 2D array with random characters
              between a lower character and an upper character inclusive. For
              instance, if the lower character is 'A' and the upper character
              is 'C', then all random characters will be between A and C
              inclusive.

Parameters:   array   - a char array to be used for whatever reason
              numRows - number of rows in the array
              numCols - number of columns in the array
              lower   - lowest random character
              upper   - highest random character

Returned:			None
******************************************************************************/

void fillCharArray (char array[][MAX_COLUMNS], int numRows, int numCols,
  char lower, char upper) {

}

// TODO #4
/******************************************************************************
Function:			writeCharArrayToFile

Description:  Write a 2D array to an open file

Parameters:   array   - a 2D array
              numRows - number of rows of actual values in the array
              numCols - numver of columns of actual values in the array
              outFile - stream to write to

Returned:			None
******************************************************************************/

void writeCharArrayToFile (const char array[][MAX_COLUMNS], int numRows,
  int numCols, ofstream& outFile) {

}

// TODO #5
/******************************************************************************
Function:			createHistogram

Description:  This function creates a count of the number of 'A', 'B', ...
              'Z' characters in the 2D array. Position 0 will hold the count
              of the 'A' characters, and so on.

              NOTE: This function calls initArray

Parameters:   array     - a 2D array
              numRows   - number of rows of actual values in the array
              numCols   - numver of columns of actual values in the array
              histogram - array holding count values as described

Returned:			None
******************************************************************************/

void createHistogram (char array[][MAX_COLUMNS], int numRows, int numCols,
  int histogram[]) {

}

// TODO #6
/******************************************************************************
Function:			writeHistogramToFile

Description:  Outputs the histogram data one line at a time.

Parameters:   histogram - array containing each character count
              size      - number of elements in the array
              outFile   - file to write information to

Returned:			None
******************************************************************************/

void writeHistogramToFile (int histogram[], int size, ofstream& outFile) {

}
