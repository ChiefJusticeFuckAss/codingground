

#ifndef _GENERIC_CLASS_H_
#define _GENERIC_CLASS_H_

//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  GENERIC
class myclass_gen {
    private:
        int     value_;
        string  payload_;
    public:
        myclass_gen ()                  { }
        myclass_gen (int a, string b) 
            : value_(a), payload_(b)    { }
        ~myclass_gen()                  { }
        virtual void primary_function() = 0;
};
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  PLAYER
class myclass_player : public myclass_gen {
    private:
        string name_;
    public:
        myclass_player  ();
        myclass_player  (string name);
        ~myclass_player ();
        virtual void primary_function();
};

#endif
