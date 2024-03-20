#include <string>

class Invoice
{
public:
    Invoice(std::string number, std::string descript, int qty, int prc);

    void setPartNumber(std::string number);

    void setDescription(std::string descript);

    void setQuantity(int qty);

    void setPrice(int prc);

    std::string getpartNumber();

    std::string getDescription();

    int getQuantity();

    int getPrice();

    int getInvoiceAmount();

private:
    std::string partNumber;
    std::string description;
    int quantity;
    int price;
};

Invoice::Invoice(std::string number, std::string descript, int qty, int prc)
{
    partNumber = number;
    description = descript;
    quantity = qty;
    price = prc;
}
void Invoice::setPartNumber(std::string number)
{
    partNumber = number;
}
void Invoice::setDescription(std::string descript)
{
    description = descript;
}
void Invoice::setQuantity(int qty)
{
    if (qty > 0)
    {
        quantity = qty;
    }
    else
    {
        quantity = 0;
    }
}
void Invoice::setPrice(int prc)
{
    if (prc > 0)
    {
        price = prc;
    }
    else
    {
        price = 0;
    }
}
std::string Invoice::getpartNumber()
{
    return partNumber;
}
std::string Invoice::getDescription()
{
    return description;
}
int Invoice::getQuantity()
{
    return quantity;
}
int Invoice::getPrice()
{
    return price;
}
int Invoice::getInvoiceAmount()
{
    return quantity * price;
}
