#include "espresso_based.h"



///////////////////// Constructor /////////////////
    EspressoBased::EspressoBased()
    {
        name = "" ;
        ingredients = {} ;
    }

//////////////// Copy constructor ////////////////
    EspressoBased::EspressoBased(const EspressoBased& esp)
    {
        name = esp.name ;
        ingredients = esp.ingredients ;

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

    }

/////////////////// get_ingredients ///////////////

std::vector<Ingredient*>& EspressoBased::get_ingredients()

{
    return ingredients ;
}



