// Exercise 11.9 Solution: OvernightPackage.cpp
// Member-function definitions of class OvernightPackage.
#include <stdexcept>
#include "OvernightPackage.h" // OvernightPackage class definition

// constructor
OvernightPackage::OvernightPackage( const std::string &sName, const std::string &sAddress, const std::string &sCity, const std::string &sState, int sZIP, const std::string &rName, const std::string &rAddress, const std::string &rCity, const std::string &rState, int rZIP, double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setOvernightFeePerOunce( fee ); // validate and store overnight fee
} // end OvernightPackage constructor

// set overnight fee
void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
   if ( overnightFee >= 0.0 )
      overnightFeePerOunce = overnightFee;
   else
      throw std::invalid_argument( "Overnight fee must be >= 0.0" );
} // end function setOvernightFeePerOunce

// return overnight fee
double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
} // end function getOvernightFeePerOunce

// calculate shipping cost for package
double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
} // end function calculateCost