/* File : example.i */
%module flexric
%{
/* Put headers and other declarations here */
extern bool connect(const char*);
extern const char* stats(void);
%}

extern bool connect(const char*);
extern const char* stats(void);
