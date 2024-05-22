// PieceWorker class derived from Employee class.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "PieceWorker.h" // PieceWorker class definition
using namespace std;

// constructor
PieceWorker::PieceWorker(const string &first, const string &last,
   const string &ssn, double wage, double pieces)
   : Employee(first, last, ssn) {
   setWagePerPiece(wage); // validate and store wage per piece
   setPiecesProduced(pieces); // validate and store pieces produced
}

// set wage
void PieceWorker::setWagePerPiece(double wage) {
   if (wage < 0.0) { // validate wage
      throw invalid_argument("Wage per piece must be >= 0.0");
   }

   wagePerPiece = wage;
}

// return wage
double PieceWorker::getWagePerPiece() const { return wagePerPiece; }

// set pieces produced
void PieceWorker::setPiecesProduced(double pieces) {
   if (pieces < 0.0) { // validate pieces
      throw invalid_argument("Pieces produced must be >= 0.0");
   }

   piecesProduced = pieces;
}

// return pieces produced
double PieceWorker::getPiecesProduced() const { return piecesProduced; }

// calculate earnings; override pure virtual function earnings in Employee
double PieceWorker::earnings() const {
   return getWagePerPiece() * getPiecesProduced();
}

// return a string representation of PieceWorker's information
string PieceWorker::toString() const {
   ostringstream output;
   output << fixed << setprecision(2);
   output << "piece worker: " << Employee::toString()
      << "\nwage per piece: " << getWagePerPiece()
      << "; pieces produced: " << getPiecesProduced();
   return output.str();
}
