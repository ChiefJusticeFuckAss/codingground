

#ifndef __GENERIC_CLASS_H__
#define __GENERIC_CLASS_H__


class myclass_gen {
    private:
        int     value_;
        string  payload_;
    public:
        myclass_gen()   {}
        ~myclass_gen()  {}
        virtual void primary_function() = 0;
};

class myclass_player : public myclass_gen {
    private:
        string name_    = DEFAULT;
    public:
        myclass_player()    {}
        myclass_player(string* name);
        ~myclass_player();
        virtual void primary_function();
};

#endif
