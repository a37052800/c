#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Tool.h"
using namespace std;

// function prototypes
void initializeFile(fstream &);
void inputData(fstream &);
void listTools(fstream &);
void updateRecord(fstream &);
void insertRecord(fstream &);
void deleteRecord(fstream &);
int instructions();

int main()
{
   int choice;
   char response;
   cout << "Should the file be initialized? (Y or N): ";
   cin >> response;
   fstream inOutTool("inventory.dat", ios::in | ios::out | ios::binary);
   if (!inOutTool)
   {
      cerr << "File could not be opened." << endl;
      exit(1);
   }
   if (response == 'Y')
   {
      initializeFile(inOutTool);
      inputData(inOutTool);
   }
   while ((choice = instructions()) != 5)
   {
      switch (choice)
      {
      case 1:
         listTools(inOutTool);
         break;
      case 2:
         updateRecord(inOutTool);
         break;
      case 3:
         insertRecord(inOutTool);
         break;
      case 4:
         deleteRecord(inOutTool);
         break;
      default:
         cerr << "Incorrect choice" << endl;
         break;
      }
   }

   inOutTool.close();
   return 0;
} // end main

// function to clear file
void initializeFile(fstream &fRef)
{
   Tool blankItem; // empty Tool object
   blankItem.setPartNumber(-1); // set partNumber to -1
   for(int i = 0; i < 100; i++)
   {
      fRef.seekp(i * sizeof(Tool));
      fRef.write(reinterpret_cast<char *>(&blankItem), sizeof(Tool));
   }

} // end function initializeFile

// function that receives input
void inputData(fstream &fRef)
{
   Tool temp; // temporary Tool object

   // temporary variables used to hold user input
   int number;
   string name;
   double price;
   int stock;

   for (int i = 0; i < 100; i++)
   {
      cout << "Enter the part number (0 - 99, -1 to end input): ";
      cin >> number;
      if (number == -1)
         return;
      cout << "Enter the tool name: ";
      cin.ignore();
      getline(cin, name);
      cout << "Enter the quantity and price: ";
      cin >> stock >> price;

      temp.setPartNumber(number);
      temp.setToolName(name);
      temp.setInStock(stock);
      temp.setUnitPrice(price);

      fRef.seekp(number * sizeof(Tool));
      fRef.write(reinterpret_cast<char *>(&temp), sizeof(Tool));
   }

} // end inputData

// function that decides what choice user selected
int instructions()
{
   int choice;

   // ask user to enter a choice
   cout << "\nEnter a choice:\n1  List all tools."
        << "\n2  Update record.\n3  Insert record."
        << "\n4  Delete record.\n5  End program.\n";

   // ask user for choice until a valid choice is entered
   do
   {
      cout << "? ";
      cin >> choice;
   } while (choice < 1 || choice > 5);

   return choice; // return user choice
} // end function instructions

// function that lists tools in file
void listTools(fstream &fRef)
{
   Tool temp;
   cout << left << setw(10) << "Record#" << setw(30) << "Tool Name"
        << setw(13) << "In Stock" << "Unit Price" << endl;
   for (int i = 0; i < 100; i++)
   {
      fRef.seekg(i * sizeof(Tool));
      fRef.read(reinterpret_cast<char *>(&temp), sizeof(Tool));
      if (temp.getPartNumber() != -1)
         cout << left << setw(10) << temp.getPartNumber()
              << setw(30) << temp.getToolName()
              << setw(13) << temp.getInStock()
              << temp.getUnitPrice() << endl;
   }
} // end function listTools

// function to update a tool's information
void updateRecord(fstream &fRef)
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;

} // end function updateRecord

// function to insert a new record
void insertRecord(fstream &fRef)
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;

   cout << "Enter the part number (0 - 99, -1 to end input): ";
   cin >> part;
   cout << "Enter the tool name: ";
   cin.ignore();
   getline(cin, name);
   cout << "Enter the quantity and price: ";
   cin >> stock >> price;

   temp.setPartNumber(part);
   temp.setToolName(name);
   temp.setInStock(stock);
   temp.setUnitPrice(price);

   fRef.seekp(part * sizeof(Tool));
   fRef.write(reinterpret_cast<char *>(&temp), sizeof(Tool));

} // end function insertRecord

// function to delete a record
void deleteRecord(fstream &fRef)
{
   Tool blankItem;
   Tool temp;
   int part;

} // end function deleteRecord
