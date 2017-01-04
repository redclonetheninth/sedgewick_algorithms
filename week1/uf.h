#ifndef UF_H
#define UF_H

typedef struct uf * UF;

UF get_uf(size_t);
void connect(int, int, UF);
void find(int, int, UF);

#endif
