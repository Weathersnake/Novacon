//gsoap ns service name: calc
//gsoap ns service namespace: http://www.mysite.com/calc.wsdl
//gsoap ns service location: http://www.mysite.com/calc.cgi
//gsoap ns schema namespace: urn:calc  
int ns__add(double a, double b, double *result);  
int ns__sub(double a, double b, double *result);  
int ns__sqrt(double a, double *result);  