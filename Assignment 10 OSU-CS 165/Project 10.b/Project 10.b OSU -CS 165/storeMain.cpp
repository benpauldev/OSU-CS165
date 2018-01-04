#include <iostream>
#include "Store.hpp"


using namespace std;

int main()
{
    Customer Ben("Ben", "9999", false);
    Customer Meredith("Meredith", "9998", true);
    Store s;
    
    Product p1("1111","Stool","little red stool",10,3);
    Product p2("1112","table","wood table",10,3);
    Product p3("1113","chair","soft chair",10,3);
    Product p4("1114","pillow","purple pillow",10,3);
    Product p5("1115","LAMP"," little brass lamp ",10,3);
    
    s.addProduct(&p1);
    s.addProduct(&p2);
    s.addProduct(&p3);
    s.addProduct(&p4);
    s.addProduct(&p5);
    
    
    s.productSearch("table");
   
    
    s.addMember(&Ben);
    s.addMember(&Meredith);
    
    s.addProductToMemberCart("1111", "9999");
    s.addProductToMemberCart("1115", "9999");
    
    s.checkOutMember("9999");
    
    s.addProductToMemberCart("1111", "9998");
    
    s.checkOutMember("9998");
    
    s.checkOutMember("9999");
    s.productSearch("table");
    Ben.emptyCart();
    Meredith.emptyCart();
    
    return 0;
    
    
    
    
}
