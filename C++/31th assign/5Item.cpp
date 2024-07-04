#include<iostream>
using namespace std;

class ItemDetails
{
    public:
       int item_no;
       char item_name[50];
       float item_price;
};
class DiscountedItem : public ItemDetails{
    public:
    int discount_percent;
    int discount_price;
    void accept_details()
    {
        cout<<"\n Enter Item Name : ";
        cin>>item_name;
        cout<<"\n Enter Item no. : ";
        cin>>item_no;
         cout<<"\n Enter Discount Price :";
         cin>>item_price;
        cout<<"\n Enter Discount Percent : ";
        cin>>discount_percent;
        cout<<"\n------------------\n";
        discount_price = item_price - item_price * discount_percent / 100;
}
void display_details()
{
   cout<<"\n Item Name : "<<item_name;
   cout<<"\n Item no. :"<<item_no;
   cout<<"\n Item price :"<<discount_price;
   cout<<"\n Discount percent :"<<discount_percent;
   cout<<"\n Discounted Price : "<<discount_price;
   cout<<"\n ----------------------";
}
};
int main()
{
  int i, cnt, discount = 0, price = 0;
  DiscountedItem dt[100];
  cout<<"\n How many items you want to enter? :";
  cin>>cnt;
  for(i=1; i<=cnt; i++)
  {
        dt[i].accept_details();
  }
    for(i=1; i<=cnt; i++)
{
       dt[i].accept_details();
}
for(i=1;i<=cnt;i++)
{
      price = price + dt[i].item_price;
}
for(i=1;i<=cnt;i++)
{
    discount = discount + dt[i].item_price - dt[i].discount_price;
}
cout<<"\n total price : "<<price;
cout<<"\n total discount : "<<discount;
cout<<"\n total payable amount : "<<price - discount;
cout<<"please visit again ";
return 0;
}