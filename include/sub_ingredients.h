#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H

class Cinnamon
{
public:
    Cinnamon(size_t units) : Ingredient{5, units}
    {
        this->name = "Cinnamon";
    }

    virtual std::string get_name() {return this->name;}
};

class Chocolate
{
public:
    Cinnamon(size_t units) : Ingredient{5, units}
    {
        this->name = "Chocolate";
    }

    virtual std::string get_name() {return this->name;}
};

class Sugar
{
public:
    Cinnamon(size_t units) : Ingredient{1, units}
    {
        this->name = "Sugar";
    }

    virtual std::string get_name() {return this->name;}
};

class Cookie
{
public:
    Cinnamon(size_t units) : Ingredient{10, units}
    {
        this->name = "Cookie";
    }

    virtual std::string get_name() {return this->name;}
};

class Espresso
{
public:
    Cinnamon(size_t units) : Ingredient{15, units}
    {
        this->name = "Espresso";
    }

    virtual std::string get_name() {return this->name;}
};

class Milk
{
public:
    Cinnamon(size_t units) : Ingredient{10, units}
    {
        this->name = "Milk";
    }

    virtual std::string get_name() {return this->name;}
};


class MilkFoam
{
public:
    Cinnamon(size_t units) : Ingredient{5, units}
    {
        this->name = "MilkFoam";
    }

    virtual std::string get_name() {return this->name;}
};

class Water
{
public:
    Cinnamon(size_t units) : Ingredient{1, units}
    {
        this->name = "Water";
    }

    virtual std::string get_name() {return this->name;}
};


#endif // SUB_INGREDIENTS_H