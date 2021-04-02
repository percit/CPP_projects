std::unique_ptr to scoped pointer czyli sam sie czysci jak wyjdzie spoza “scope” czyli takich nawiasow“{}”, np spoza funkcji czy cos, dziala jak zwykla statyczna zmienna pod tym wzgledem, ale nie mozesz tego kopiowac
przyklad:
std::unique_ptr<Class> object = std::make_unique<Class>(); gdzie Class to nazwa klasy, a object to nazwa obiektu
object->Function(); a tak sie dostajemy do funkcji	
