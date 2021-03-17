enum Color
{
    color_black, // assigned 0
    color_red, // assigned 1
    color_blue, // assigned 2
    color_green, // assigned 3
    color_white, // assigned 4
    color_cyan, // assigned 5
    color_yellow, // assigned 6
    color_magenta // assigned 7
};
 
Color paint = color_white;
std::cout << paint;



//zeby nie dalo sie porownac enumow typu color_red = banana to uzywamy enum class

enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        red, // red is inside the scope of Color
        blue
    };
 
enum class Fruit
    {
        banana, // banana is inside the scope of Fruit
        apple
    };
Color color = Color::red;
