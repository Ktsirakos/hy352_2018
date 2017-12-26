

class Object {
    private:
        string id;

    public:
}



// Object::id --> "number"
class NumberObject : public Object{
    private:
        int x;

    public:
}


// Object::id --> "bool"
class BooleanObject : public Object{
    private:
        bool state;

    public:
}

// Object::id --> "word"
class WordObject : public Object{
    private:
        string value;
    
    public: 
}

// Object::id --> "list"
class ListObject : public Object{
    private:
    vector<Objects> list;

    public:
}

