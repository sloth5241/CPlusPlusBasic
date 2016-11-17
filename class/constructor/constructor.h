/*
 * Destructor use to release file
 */
#ifndef classConstructor_h
#define classConstructor_h

class Line {
    public:
        void m_getMembers() const; 
        Line(double len=0, double wid=0);
        ~Line(void);
    private:
        double m_length;    
        double m_width;
};

#endif /* classConstructor.h */
