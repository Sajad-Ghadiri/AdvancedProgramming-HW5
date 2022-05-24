#include "espresso_based.h"



///////////////////// Constructor /////////////////
    // EspressoBased::EspressoBased()
    // : name{}
    // , ingredients{}
    // {
    // }

//////////////// Copy constructor ////////////////
    EspressoBased::EspressoBased(const EspressoBased& esp)
    : name{esp.name}
    {
        ingredients.clear() ;
        for (const auto iter : esp.ingredients)
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
        // ingredients = esp.ingredients ;

    }

////////////////// brew /////////////////////////
    void EspressoBased::brew()
    {
       
    }
////////////////// Destructor ////////////////////

    EspressoBased::~EspressoBased()
    {

        for(const auto& i : ingredients)
            delete i;
        ingredients.clear();
    
    }
//////////////////// operator = //////////////////
    void EspressoBased::operator=(const EspressoBased& esp)

    {
        if(this == &esp)
        
        name = esp.name ;

        // ingredients = esp.ingredients ;


        
        
    }

/////////////////// get_ingredients ///////////////

std::vector<Ingredient*>& EspressoBased::get_ingredients()

{
    return ingredients ;
}



