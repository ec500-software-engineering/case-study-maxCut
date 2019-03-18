enum Direction{up,down,left,right};

class Blob  {

    public:
    Blob();
    void update();
    void drawSelf();

    private:
    void move(int i);
    int x,y; //coordinates of the center of the blob
    Direction facing;
    int size;//radius of blob
};
