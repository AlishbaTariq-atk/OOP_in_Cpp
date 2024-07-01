using namespace std;

    class Fav_Songs
    {
        string *album;
        int albumsize;

        public:

        // Default constructor
        Fav_Songs(int size);

        //copy constructor
        Fav_Songs(Fav_Songs &s);

        //destructor
        ~Fav_Songs();

        //setter
        void setvalue(int index,string song_name);
        void setsize(int size);

        //getter
        string getvalue(int index)const;
        int getsize();

        //methods
        void addsongs(string song_name);
        void deletesong(string song_name);
        void updatesong(string song_name);
        void printalbum()const;
    };
