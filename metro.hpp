
#include <vector>
#include <unordered_map>

using namespace std;

class Stop{


    Stop(size_t index_in, int ns_in, int ew_in, vector<Stop*> & adj_in): 
    index(index_in), northsouth(ns_in), eastwest(ew_in), adjacent_stops(adj_in) {}

    size_t index;
    int northsouth; //positive numbers north, negative south
    int eastwest; //positive numbers north, negative south
    vector<Stop *> adjacent_stops;
};


enum class Train{
    RED = 0,
    GREEN = 1,
    BLUE = 2,
    ORANGE = 3,
    YELLOW = 4,
    SILVER = 5
};

class Metro{
    public:
    void stops(){
        vector<Stop*> vec;
        Stop shady_grove(size_t(0), 10, 10, vec);
    };

    unordered_map<Stop, Train> stop_map;
    vector<Stop> red_line;
    vector<Stop> green_line;
    vector<Stop> blue_line;
    vector<Stop> orange_line;
    vector<Stop> yellow_line;
    vector<Stop> silver_line;

};