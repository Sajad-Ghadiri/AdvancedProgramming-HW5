#include "cappuccino.h"

////////////////////// constructor ///////////////////////
Cappuccino::Cappuccino() : EspressoBased() , side_items{}

{
        name = "Cappuccino" ;
        ingredients.push_back(new Espresso{2});
        ingredients.push_back(new Milk{2});
        ingredients.push_back(new MilkFoam{1});
    
} 

    //////////////////// Capy constructor ////////////////////
    Cappuccino::Cappuccino(const Cappuccino& capy) : EspressoBased(capy)
    {
        
        // side_items.clear();
       
        for (const auto iter : capy.side_items)
        {
            auto temp_name = iter->get_name();
            auto temp_unit = iter->get_units();
            if (temp_name == "Cinnamon")
                side_items.push_back(new Cinnamon{temp_unit});
            if (temp_name == "Chocolate")
                side_items.push_back(new Chocolate{temp_unit});
            if (temp_name == "Sugar")
                side_items.push_back(new Sugar{temp_unit});
            if (temp_name == "Cookie")
                side_items.push_back(new Cookie{temp_unit});
            if (temp_name == "Espresso")
                side_items.push_back(new Espresso{temp_unit});
            if (temp_name == "Milk")
                side_items.push_back(new Milk{temp_unit});
            if (temp_name == "MilkFoam")
                side_items.push_back(new MilkFoam{temp_unit});
            if (temp_name == "Water")   
                side_items.push_back(new Water{temp_unit});
        }
        
    }


///////////////////// operator = /////////////////////////
void Cappuccino::operator=(const Cappuccino& capp)
{
    if(this != &capp)
    {
        ingredients.clear();
        name = capp.name ;
    
        side_items.clear();

    for (const auto iter : capp.ingredients)
    {
        auto temp_name = iter->get_name();
        auto temp_unit = iter->get_units();
        if (temp_name == "Cinnamon")
            ingredients.push_back(new Cinnamon{temp_unit});
        if (temp_name == "Chocolate")
            ingredients.push_back(new Chocolate{temp_unit});
        if (temp_name == "Sugar")
            ingredients.push_back(new Sugar{temp_unit});
        if (temp_name == "Cookie")
            ingredients.push_back(new Cookie{temp_unit});
        if (temp_name == "Espresso")
            ingredients.push_back(new Espresso{temp_unit});
        if (temp_name == "Milk")
            ingredients.push_back(new Milk{temp_unit});
        if (temp_name == "MilkFoam")
            ingredients.push_back(new MilkFoam{temp_unit});
        if (temp_name == "Water")
            ingredients.push_back(new Water{temp_unit});
    }

    for (const auto iter : capp.side_items)
    {
        auto temp_name = iter->get_name();
        auto temp_unit = iter->get_units();
        if (temp_name == "Cinnamon")
            side_items.push_back(new Cinnamon{temp_unit});
        if (temp_name == "Chocolate")
            side_items.push_back(new Chocolate{temp_unit});
        if (temp_name == "Sugar")
            side_items.push_back(new Sugar{temp_unit});
        if (temp_name == "Cookie")
            side_items.push_back(new Cookie{temp_unit});
        if (temp_name == "Espresso")
            side_items.push_back(new Espresso{temp_unit});
        if (temp_name == "Milk")
            side_items.push_back(new Milk{temp_unit});
        if (temp_name == "MilkFoam")
            side_items.push_back(new MilkFoam{temp_unit});
        if (temp_name == "Water")
            side_items.push_back(new Water{temp_unit});
    }
    }
}


/////////////////// destructor ///////////////////////////
Cappuccino::~Cappuccino()
{
    for(const auto& i : side_items)
        delete i;
    side_items.clear();
}

///////////////// add_side_item //////////////////////////
void Cappuccino::add_side_item(Ingredient* side)
{
    side_items.push_back(side);
}

//////////////// get_side_items ///////////////////////////
std::vector<Ingredient*>& Cappuccino::get_side_items()
{
    return side_items;
}

///////////////// price /////////////////////////////////
double Cappuccino::price()
{
    double total_price {0};
    for(const auto& i : ingredients)
        total_price += i->price();
    for(const auto& j : side_items)
        total_price += j->price();
    return total_price;
}


///////////////// get_name ///////////////////////////////
std::string Cappuccino::get_name()
{
    return "Cappuccino";
}
