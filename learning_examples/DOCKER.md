# komendy:

docker ps - pokazuje obecnie dzialajace kontenerki

docker logs- logi z kontenera

docker run -ti -name=kontener1 ubuntu      utworzenie nowego kontenera

exit ; wyjscie z kontenera

docker run -ti ubuntu ;    ti to interactive mode czyli ekran i klawiatura sie laczy, tak wlasnie wlaczamy dockera


## tworzenie sieci:

docker network create siec

docker network connect siec kontener1

docker network connect siec kontener2


## making a new image:

pobieramy co potrzeba

tworzymy plik Dockerfile z komendami

docker build -t myusername/app .

docker run -p 8888:5000 myusername/app, gdzie 8888:5000 to porty, 5000 jest w Dockerfile
