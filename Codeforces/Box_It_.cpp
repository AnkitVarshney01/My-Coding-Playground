class box
{
private:
    int length, breadth, height;

public:
    box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    box(int len, int bre, int hei)
    {
        length = len;
        breadth = bre;
        height = hei;
    }
    box(box &b)
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    long long CalculateVolune()
    {
        return (length * breadth * height);
    }
    bool operator<(box &b)
    {
        if (length < b.length || (length == b.length && breadth < b.breadth) || (length == b.length && breadth == b.breadth && height < b.height))
        {
            return true;
        }
        else
            return false;
    }
    friend ostream &operator<<(ostream &out, box &b)
    {
        out << b.length << " ";
        out << b.breadth << " ";
        out << b.height << " ";
    }
};
