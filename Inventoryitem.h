#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
using namespace std;
 
class InventoryItem
{
private:
      string description; // The item description

      double cost;        // The item cost

      int units;          // Number of units 
public:
        
        InventoryItem() // Constructor #1 (default constructor)
        { // Initialize description, cost, and units.
        description = "";
        cost = 0.0;
        units = 0;
        }
 
        // Constructor #2 (parameterized constructor)
            InventoryItem(string desc)
          {
            description = desc;
              cost = 0.0;
              units = 0;
           }
         
        // Constructor #3
                  InventoryItem(string desc, double c, int u)
                {
                   // Assign values to description, cost, and units.
                    description = desc;
                    cost = c;
                    units = u;
               }
 
   // setters
   void setDescription(string desc) { description = desc; }
 
   void setCost(double c){ cost = c; }
       
   void setUnits(int u){ units = u; }
 
   // Getters
   string getDescription() const{ return description; }
          
   double getCost() const{ return cost; }
 
   int getUnits() const{ return units; }
};
#endif