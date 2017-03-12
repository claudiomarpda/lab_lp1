/**
 * Simulates an item invoice.
 */

#ifndef LIST05_2_INVOICE_H
#define LIST05_2_INVOICE_H

#include <string>

using namespace std;

class Invoice {
private:
    int id;
    string description;
    int quantity;
    float price;

public:
    Invoice(int id, const string &description, int quantity, float price);

    float getInvoiceAmount();

    int getId() const;

    void setId(int id);

    const string &getDescription() const;

    void setDescription(const string &description);

    int getQuantity() const;

    void setQuantity(int quantity);

    float getPrice() const;

    void setPrice(float price);
};


#endif //LIST05_2_INVOICE_H
