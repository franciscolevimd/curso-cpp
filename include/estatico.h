#ifndef ESTATICO_H_
#define ESTATICO_H_
class Estatico {
private:
	static int counter;
public:
	static int getCounter();
	Estatico();
	~Estatico();	
};
#endif // ESTATICO_H_