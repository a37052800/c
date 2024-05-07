// Member-function definitions of class TwoDayPackage.
#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition

// constructor
TwoDayPackage::TwoDayPackage( const std::string &sName, const std::string &sAddress, const std::string &sCity, const std::string &sState, int sZIP, const std::string &rName, const std::string &rAddress, const std::string &rCity, const std::string &rState, int rZIP, double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setFlatFee( fee ); // validate and store flat fee
} // end TwoDayPackage constructor

// set flat fee
void TwoDayPackage::setFlatFee( double fee )
{
   if ( fee >= 0.0 )
      flatFee = fee;
   else
      throw std::invalid_argument( "Flat fee must be >= 0.0" );
} // end function setFlatFee

// return flat fee
double TwoDayPackage::getFlatFee() const
{
   return flatFee;
} // end function getFlatFee

// calculate shipping cost for package
double TwoDayPackage::calculateCost() const
{
   return Package::calculateCost() + flatFee;
} // end function calculateCost

// end class TwoDayPackage