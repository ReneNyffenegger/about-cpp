all: cpp98 gcc98 cpp1z cpp11 gnu11 cpp14 gnu14 cpp17
	@ ./cpp98
	@ ./gcc98
	@ ./cpp11
	@ ./gnu11
	@ ./cpp14
	@ ./gnu14
	@ ./cpp1z
	@ ./cpp17

cpp98: main.cpp
	@g++ -std=c++98 main.cpp -o cpp98

gcc98: main.cpp
	@g++ -std=gnu++98 main.cpp -o gcc98

cpp11: main.cpp
	@g++ -std=c++11 main.cpp -o cpp11

gnu11: main.cpp
	@g++ -std=gnu++11 main.cpp -o gnu11

cpp14: main.cpp
	@g++ -std=c++14 main.cpp -o cpp14

gnu14: main.cpp
	@g++ -std=gnu++14 main.cpp -o gnu14

cpp1z: main.cpp
	@g++ -std=c++1z main.cpp -o cpp1z

cpp17: main.cpp
	@g++ -std=c++17 main.cpp -o cpp17

clean:
	@rm -f cpp98 gcc98 cpp11 gnu11 cpp14 gnu14 cpp1z cpp17

FORCE: ;
