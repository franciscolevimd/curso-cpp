#ifndef FIGURE_H_
#define FIGURE_H_
class Figure {
    protected:
    unsigned short total_vertex_;
    public:
    Figure(unsigned short total_vertex);
    ~Figure();
    void set_total_vertex(unsigned short total_vertex);
    inline unsigned short total_vertex() { return total_vertex_; }
};
#endif // FIGURE_H_