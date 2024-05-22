#ifndef PIECE_WORKER_H
#define PIECE_WORKER_H

#include "Employee.h"

class PieceWorker : public Employee {
public:
    PieceWorker(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);

    void setWagePerPiece(double);
    double getWagePerPiece() const;

    void setPiecesProduced(double);
    double getPiecesProduced() const;

    // keyword 'override' ensures that the function is virtual in the base class
    virtual double earnings() const override;
    virtual std::string toString() const override;

private:
    double wagePerPiece;
    double piecesProduced;
};

#endif