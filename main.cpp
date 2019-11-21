/*C++ Array of Class Objects */
// Luis reyes Gaddis 2019 Example
#include<iostream>
#include<iomanip>
#include"Inventoryitem.h"
#include<vector>
int main()
{
InventoryItem item1;
InventoryItem item2 ("HAMMER");//set Description

item1.setDescription("SAW");
item1.setCost(25.99);
item1.setUnits(8);

InventoryItem item3 ("FLATHEAD SCREWDRIVER",5.33,63);
/**************ARRAY OF OBJECTS***************************
Goal store and effeciently dislay the items in the list (array)*/
const int NUM_ITEMS=3;
InventoryItem inventoryArray [NUM_ITEMS];
inventoryArray[0]=item1;
inventoryArray[1]=item2;
inventoryArray[2]=item3;
cout<<"\nItem in the Inventory list: "<<endl;
cout<< setw(20)<<"Inventory Item"
    <<setw(8)<<"Cost"<<setw(8)
    <<setw(16)<< "Unit on Hand\n";
cout<<"****************************************\n";
for(int i=0;i<NUM_ITEMS; i++)
{
cout<<setw(20)<<inventoryArray[i].getDescription();
cout<<setw(8)<<inventoryArray[i].getCost();
cout<<setw(8)<<inventoryArray[i].getUnits()<<endl;
}
//output these data using a vector
//vector inventoryvector
vector <InventoryItem> inventoryVector;
inventoryVector.push_back(item1);
inventoryVector.push_back(item2);
inventoryVector.push_back(item3);
cout<<"\nItem in the Inventory list(VECTOR STYLE): "<<endl;
cout<< setw(20)<<"Inventory Item"
    <<setw(8)<<"Cost"<<setw(8)
    <<setw(16)<< "Unit on Hand\n";
cout<<"****************************************\n";
for(int i=0;i<NUM_ITEMS; i++)
{
cout<<setw(20)<<inventoryVector[i].getDescription();
cout<<setw(8)<<inventoryVector[i].getCost();
cout<<setw(8)<<inventoryVector[i].getUnits()<<endl;
}

return 0;
}

